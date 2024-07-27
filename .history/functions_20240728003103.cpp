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