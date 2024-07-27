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
    if(ans == "Y"){
        
    }
}
