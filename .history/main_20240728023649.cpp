#include <bits/stdc++.h>
#include <include/json/json.h>
#include <fstream>
#include "functions.h"
#include "curl_function.h"
using namespace std;

int main(){
    string ticker;
    cout<<endl<<"Enter Ticker Symbol of a company";
    cin>> ticker;
    while(true){
        Json::Value config;
        ifstream config_file("config.json", ifstream::binary);
        if(!config_file.is_open()){
            cerr << "Failed to open config file." << endl;
            return 1;
        }
        config_file >> config;
        config_file.close();

        string api_key = config["api_key"].asString();
        string name , exchange , currency, ans ;
        float open , high , low , close , volume , change , price;
        int amount;

        price = stof(getPrice(ticker, api_key));

        Json::Value stock_data = getStockQuote(ticker, api_key);
        if(!stock_data.empty()){
            name = stock_data["name"].asString();
            exchange = stock_data["exchange"].asString();
            currency = stock_data["currency"].asString();
            open = stof(stock_data["open"].asString());
            high = stof(stock_data["close"].asString());
            low = stof(stock_data["low"].asString());
            close = stof(stock_data["close"].asString());
            volume = stof(stock_data["volume"].asString());
            change = stof(stock_data["change"].asString());
        }else {
            
        }
        
    }
}