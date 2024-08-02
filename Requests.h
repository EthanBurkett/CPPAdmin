#include <string>
#include <curl/curl.h>

#ifndef REQUESTS_H_INCLUDED
#define REQUESTS_H_INCLUDED

enum Methods {
	GET,
	POST,
	PUT,
	DEL
};

struct Request {
	const std::string* url;
	Methods method;
	const std::string* body;
	const curl_slist* headers;
};

struct CommonResponse {
	std::string * data;
	const char* error;
};

struct CommonResponse request(struct Request* request);

#endif