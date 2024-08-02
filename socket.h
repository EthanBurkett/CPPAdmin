#pragma once
#include <Requests.h>
#include <jansson.h>
#include <sio_client.h>

struct CommonResponse send_message(const char* event, json_t* data, const char* api_key);

sio::socket::ptr get_socket();