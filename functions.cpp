#include "functions.h"
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void ProfitLoss(float open, float close, string name)
{
    float percentChange = ((close -open )/open )* 100;
    if(percentChange > 0) {
        cout<< endl<<"The "+ name + " stocks is in profit of " << percentChange << "%" << endl;

    }else if(percentChange <0) {
        cout<< endl << "The "+ name + " stock is in loss of " << percentChange << "%" << endl;
    }else {
        cout << endl << "The "+ name + " stocks is in neutral state of "<< percentChange << "%" << endl ;
    }
}

void wantTransact(string ans, int amount, float price)
{
    cout <<"Enter the amount of stock of buying selling limit : ";
    cin>>amount ;
    cout<< endl << "Want to know the cost of buying or selling stock ? (Y/N)"<< endl ;
    cout<<"Your Response:" ;
    cin>> ans;
    transform (ans.begin(), ans.end(), ans.begin(),::toupper);
    if(ans == "Y") {
        cout<< endl << "The stock cost : " << amount * price << endl;
    }else if(ans == "N") {
        cout<<endl <<"OKAY\n" << endl;
    } else {
        cout<<endl << " Invalid Choice"<< endl;
    }
}

void printData(string name, string exchange, string currency, float open, float high, float low, float close, float volume, float change, float price)
{
    cout<<endl << "Generating Data  .............\n" << endl;
    cout<<
        "name : " << name << endl << 
        "exchange : " << exchange << endl <<
        "currency : " << currency << endl <<
        "Open Price : " << open << endl << 
        "Close Price : "<< close << endl << 
        "Volume : " << volume << endl << 
        "Change : " << change << endl << 
        "Current Price : "<< price << endl;
}

void sendSignal(float price, float high, float low, string ans, int amount)
{
    if(price <= low ){
        cout<< "sending Buying signal \n \n";
        wantTransact(ans , amount, price);
    } else if(price >= high) {
        cout<< "Sending Selling Signal \n\n ";
        wantTransact(ans , amount , price);
    } else {
        cout<<"Not Suitable for buying and selling \n Happy Trading !\n\n";
    }
}
