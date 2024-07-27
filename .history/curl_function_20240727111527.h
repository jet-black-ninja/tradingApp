#ifndef CURL_FUNCTION_H
#define CURL_FUNCTION_H

#include <string> 
#include <jsoncpp/json/json.h>

using namespace std;

string getPrice(const string& ticker_symbol, cont string & api);
Json::Value getStockQuote(const string & tickerSymbol, const string & api);

#endif 