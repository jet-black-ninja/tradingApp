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
        ifstream config_file("config.json", ifs)
    }
}