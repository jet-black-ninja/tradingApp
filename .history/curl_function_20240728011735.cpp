#include "curl_function.h"
#include <iostream>
#include <include/curl/curl.h>
#include <string>
using namespace std;

//callback fuction for cURL to handle the response
size_t  WriteCallback(void * contents, size_t size , size_t nmemb , string * output){
    size_t totalSize  = size * nmemb;
    output-> append(static_cast<char*>(contents), totalSize);
    return totalSize;
}

string getPrice(const string &ticker_symbol, const string &api)
{
    CURL * curl = curl_easy_init();
    if(!curl)
    return string();
}