
#include <Requests.h>
#include <sio_client.h>
#include <jansson.h>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

sio::client h;
bool connected = false;


sio::socket::ptr get_socket() {
    
    if (h.get_sessionid().empty()) {
        cout << "Connecting to server... " << endl;
        h.connect("http://127.0.0.1:8000");

        // Adding a delay to wait for connection to be established
        this_thread::sleep_for(chrono::seconds(2));
    }
    if (h.socket() == nullptr) {
        cout << "Socket is still null after connect attempt" << endl;
    }
    return h.socket();
}

CommonResponse send_message(const char* event, json_t* data, const char* api_key) {
    auto socket = get_socket();

    if (socket == nullptr) {
        struct CommonResponse response;
        response.data = nullptr;
        char* error = (char*)malloc(strlen("Socket not connected") + 1);
        snprintf(error, strlen("Socket not connected") + 1, "%s", "Socket not connected");
        response.error = error;
        free(error);
        return response;
    }

    json_t* request = json_object();
    json_object_set_new(request, "event", json_string(event));
    json_object_set_new(request, "api_key", json_string(api_key));

    if (data != nullptr) {
        json_object_set(request, "data", data);
    }

    string body = json_dumps(request, JSON_COMPACT);

    socket->emit("message", body);

    json_decref(request);  // Decrement reference count of the JSON object

    struct CommonResponse response;
    response.data = nullptr;
    response.error = nullptr;

    return response;
}