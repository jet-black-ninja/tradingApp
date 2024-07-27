#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <include/json/json.h>

using namespace std;
void ProfitLoss(float open , float close, string name );
void wantTransact(string ans, int amount , float price);
void printData(string name , string exchange, string currency , float open , float high ,float low, float close, float volume, float change , float price );
void sendSignal(float price , float high , float low , string ans , int amount);
#endif //FUNCTION_H