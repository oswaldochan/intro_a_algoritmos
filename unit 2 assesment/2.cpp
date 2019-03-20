#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
float l;
string r;
cout<<"Write F if you have Fahrenheit\nWrite C if you have Celsius\nWrite K if you have Kelvin\n\t";
cin>>r;
cout<<"How many do you have?\n\t";
cin>>l;
if (r=="F" or r=="f") {
    cout<<"Press C if you want to convert it to Celsius\nPress K if you want to convert it to Kelvin\n";
    cin>>r;
    if (r=="C" or r=="c"){l=(5*(l-32))/9;cout<<"then you have "<<l<<" Celsius";}
    if (r=="K" or r=="k"){l=((5*(l-32))/9)+273.16;cout<<"then you have "<<l<<" Kelvin";}
}
if (r=="C" or r=="c"){
    cout<<"Press F if you want to convert it to Fahrenheit\nPress K if you want to convert it to Kelvin\n";
    cin>>r;
    if (r=="F" or r=="f") {l=((9*l)/5)+32;cout<<"then you have "<<l<<" Fahrenheit";}
    if (r=="K" or r=="k") {l=l+273.16;cout<<"then you have "<<l<<" Kelvin";}
}
if (r=="K" or r=="k"){
    cout<<"Press C if you want to convert it to Celsius\nPress F if you want to convert it to Fahrenheit\n";
    cin>>r;
    if (r=="F" or r=="f") {l=((9*(l-273.15))/5)+32;cout<<"then you have "<<l<<" Fahrenheit";}
    if (r=="C" or r=="c") {l=l-273.16;cout<<"then you have "<<l<<" Celsius";}
}
return 0;
}
