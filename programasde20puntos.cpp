#include <iostream>
#include <tgmath.h>
#include <cstdlib>
#include <math.h>

using namespace std;
int main(){
float a,b,c,d, R=0;
int jeje,e,i=0, ye, G, f, h; //jeje is used to choose the program to run, G is for the problem 8 selection
cout<<"Choose the exercises you want to do\n";
cout<<"1. A program that say if a number is even\n2. A program to ask a number and prints the sum of numbers from 1 to n\n3. A program to ask a number and prints the factorial\n4. A program to ask a number from 1 to 12 and prints the multiplication table\n5. A program that prints all the leap years from 2000 to 3000\n6. A program to ask the user a number n and prints a random number less than n. Then ask the user another number\n7. A program to print all possible primer numbers for an integer.\n8. A program to calculate the area or the perimeter of a circle, triangle, square or rectangle\n\t";
cin>>jeje;
cout<<"\n";
if (jeje==1) { //programa 1
cout<<"Enter a number: ";
cin>>e;
R=e%2;
if (R==0){
    cout<<"the number is even";
}
else {
    cout<<"the number is odd";
}
}
if (jeje==2) { //programa 2
cout<<"Enter a number ";
cin>>e;
if (e<1) {
    return 0;
}
b=e;
while (i<e) {
    R=b+R;
    b=b-1;
    i++;
}
cout<<R;
}
if (jeje==3) { //programa 3
cout<<"Enter a number ";
cin>>e;
if (e<1) {
    return 0;
}
b=e;
R=1;
while (i<e) {
    R=b*R;
    b=b-1;
    i++;
}
cout<<R;
}
if (jeje==4) { //programa 4
cout<<"Enter a number from 1 to 12: ";
cin>>e;
if (e<1) {
    return 0;
}
b=1;
while (i<12) {
    R=e*b;
    cout<<e<<" times "<<b<<" is "<<R<<"\n";
    b++;
    i++;
    }
    return 0;
//cout<<R;
}
if (jeje==5) { //programa 5
cout<<"\n";
ye=2000;
while (ye<3001) {
    a=ye%4;
    b=ye%100;
    c=ye%400;
    if (a==0) {
        if (b==0){
            if (c==0)  {
            cout<<ye<<", ";
            }
        }
        else {
        cout<<ye<<", ";
        }
    }
    ye++;
    }
    }
if (jeje==6) { //programa 6
f=1;
while (f!=0) {
    cout<<"enter a number: ";
    cin>>f;
    if (f==0){
        return 0;
    }
    R=(rand()%f);
    cout<<"The random number is: "<<R<<"\n";
    }
}
if (jeje==7) { //programa 7
i=2;
cout<<i<<" ,";
while (i<=10000) {
    for(e=2; e<i; e++) {
        if (i%e==0) {
            break;
        }
        if(e==i-1) {
            cout<<", "<<i;
        }
    }
    i++;
}
cout<<"\n\ni=2This program printed the prime number before 10000 due hardware limitations";
}
if (jeje==8) { //programa 8
cout<<"\n1. For area\n2. For perimeter\n\t";
cin>>G;
if (G==1) {
    cout<<"\nPress...\n1. for circle\n2. for triangle\n3. for square\n4. rectangle\n\t";
    cin>>G;
    if (G==1) {
    cout<<"enter the radius: ";
    cin>>a;
    R=3.141592654*(a*a);
    cout<<"The result is: "<<R;
    }
    if (G==2) {
    cout<<"enter the height: ";
    cin>>a;
    cout<<"enter the width: ";
    cin>>b;
    R=(a*b)/2;
    cout<<"The result is: "<<R;
    }
    if (G==3) {
    cout<<"enter one side: ";
    cin>>a;
    R= a*a;
    cout<<"the result is: "<<R;
    }
    if (G==4) {
    cout<<"enter the height: ";
    cin>>a;
    cout<<"enter the width: ";
    cin>>b;
    R= a*b;
    cout<<"the result is: "<<R;
    }
}
if (G==2) {
cout<<"\nPress...\n1. for circle\n2. for triangle\n3. for square\n4. rectangle\n\t";
    cin>>G;
    if (G==1) {
    cout<<"enter the radius: ";
    cin>>a;
    R=3.141592654*(2*a);
    cout<<"The result is: "<<R;
    }
    if (G==2) {
    cout<<"enter the height: ";
    cin>>a;
    cout<<"enter the width: ";
    cin>>b;
    R=a+b+sqrt((a*a)+(b*b));
    cout<<"The result is: "<<R;
    }
    if (G==3) {
    cout<<"enter one side: ";
    cin>>a;
    R= a*4  ;
    cout<<"the result is: "<<R;
    }
    if (G==4) {
    cout<<"enter the height: ";
    cin>>a;
    cout<<"enter the width: ";
    cin>>b;
    R= (2*a)+(2*b);
    cout<<"the result is: "<<R;
    }
}
cout<<"\n\nBYE :)\n\n\n\n";
return 0;
}
}
