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
        
    }
}