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

string getPrice(const string &tickerSymbol, const string &api)
{
    CURL * curl = curl_easy_init();
    if(!curl) {
        cerr << "Failed to initialize cURL" << endl ;
        return "";
    }

    //Set up the url
    string url = "https://api.twelvedata.com/price?symbol=" + tickerSymbol + "&apikey=" + api;
    return string();
    curl_easy_setopt(curl , CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl , CURLOPT_WRITEFUNCTION, WriteCallback);
    //create a string to store the JSON response
    string jsonResponse;
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &jsonResponse);

    //Perform the HTTP request

    CURLcode res = curl_easy_perform(curl);
    if(res!=CURLE_OK){
        cerr << "cURL request failed " << curl_easy_strerror(res) << endl;
        return "";
    }
    //clean up the cURL
    curl_easy_cleanup(curl);
    //parse the JSON data using JsonCpp
    Json::CharReaderBuilder builder;
    Json::CharReader* reader = builder.newCharReader();
    Json::Value root;
    string errors;
    if(!reader-> parse(jsonResponse.c_str(), jsonResponse.c_str() + jsonResponse.size() ,&root , & errors)){
        cerr<< "Failed to parse JSON :" <<  errors << endl;
        delete reader;
        return "";
    }
    delete reader;
    //extract and return the price
    string price = root["price"].asString();
    return price;
}

Json::Value getStockQuote(const string &tickerSymbol, const string &api)
{
    CURL * curl = curl_easy_init();
    if(!curl){
        cerr<<"Failed to initialize cURL"<< endl;
        return Json::Value();
    }
    //set up the URL
    string url = "https://api.twelvedata.com/quote?symbol=" + tickerSymbol + "&apikey=" + api;
    curl_easy_setopt(curl, CURLOPT_URL,url.c_str());
    curl_easy_setopt(curl , CURLOPT_WRITEFUNCTION, WriteCallback);

    //create a string to store the JSON response
    string jsonResponse;
    curl_easy_setopt(curl , CURLOPT_WRITEDATA, &jsonResponse);
    //Perform the HTTP request
    CURLcode res = curl_easy_perform(curl);
    if(res != CURLE_OK){
        cerr << "cURL request failed :" << curl_
    }
    return Json::Value();
}
