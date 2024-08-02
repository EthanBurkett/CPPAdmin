#include <curl/curl.h>
#include <string>
#include <Requests.h>

using namespace std;

// create a write_callback function to capture the response data
size_t write_callback(void* contents, size_t size, size_t nmemb, string* data) {
	size_t realsize = size * nmemb;
	data->append((char*)contents, realsize);
	return realsize;
}

struct CommonResponse request(struct Request* request) {
	struct CommonResponse response;
	CURL* curl;
	curl_global_init(CURL_GLOBAL_ALL);
	curl = curl_easy_init();
	string* data;

	if (curl) {
		data = new string();
		curl_easy_setopt(curl, CURLOPT_URL, request->url->c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, data);
		CURLcode res = curl_easy_perform(curl);
		if (res != CURLE_OK) {
			response.error = curl_easy_strerror(res);
		}
		else {
			response.data = data;
		}
		curl_easy_cleanup(curl);
	}
	else {
		response.error = "Failed to initialize curl";
	}

	return response;
}