#include<iostream>
#include<cmath>
using namespace std;
int main() {
float a, b, c, d;
cout<<"Enter the first test score from 0 to 100: ";
cin>>a;
cout<<"Enter the second test score from 0 to 100: ";
cin>>b;
cout<<"Enter the third test score from 0 to 100: ";
cin>>c;
d= ((a+b+c)/3);
cout<<"\nYour average score is: "<<d<<", ";
if (d<70) {cout<<"YOU FAILED MUAJAJAJA";}
else {cout<<"YOU PASSED, CONGRATS :D";}
cout<<"\n\n\n";
}
