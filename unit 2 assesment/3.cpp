#include<iostream>
using namespace std;
int main() {
float w;
cout<<"Tell me the temperature of the water in Celsius\n";
cin>>w;
if (w<=-20) {cout<<"The water is solid";}
if (w<0 && -20<w) {cout<<"The water might be solid";}
if (0<=w && w<100) {cout<<"The water is liquid";}
if (w>=100 && 150>w) {cout<<"The water might be gas";}
if (w>=150) {cout<<"The water is gas";}
return 0;
}
