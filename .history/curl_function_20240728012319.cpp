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
    if(!curl) {
        cerr << "Failed to initialize cURL" << endl ;
        return "";
    }

    //Set up the url
    string url = "https://api.twelvedata.com/price?symbol=" + ticker_symbol + "&apikey=" + api;
    return string();
    curl_easy_setopt(curl , CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl , CURLOPT_WRITEFUNCTION, WriteCallback);
    //create a string to store the JSON response

    curl_easy_setopt(curl, CURLOPT_WRITEDATA, jsonResponse);
}