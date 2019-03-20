#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main () {
string w, AoP;
float x, x1, y;
//	while (j=="yes" or "YES" or "y" or "Y" or "Yes") //
cout<<"This program gives you the AREA and PERIMETER\n\nPress A for an Area or\nPress P for a Perimeter\nYour response: ";
cin>>AoP;
if (AoP=="A" or AoP=="a") {
    cout<<"\n\nYou chose AREA...\nPress T for a triangle\nPress R for a rectangle\nPress S for a square\nYour response: ";
    cin>>w;
cout<<"\n";
if (w=="T" or w=="t" or w=="R" or w=="r") { //AREA OF A TRIANGLE OR RECTANGLE
	cout<<"enter the height: ";
	cin>>x;
	cout<<"enter the width: ";
	cin>>x1;
	if (w=="T" or w=="t") {
		y=(x*x1)/2;
	}
	else {
		y=x*x1;
	}
}
if (w=="S" or w=="s") { //AREA OF A SQUARE
	cout<<"enter one side: ";
	cin>>x;
	y=x*x;
}

}
if (AoP=="P" or AoP=="p") {
        cout<<"\nYou chose PERIMETER...\nPress R for a rectangle\nPress S for a square\nYour response: ";
    cin>>w;
cout<<"\n";
if (w=="R" or w=="r") { //PERIMETER OF A RECTANGLE
	cout<<"enter the height: ";
	cin>>x;
	cout<<"enter the width: ";
	cin>>x1;
	y=(2*x)+(2*x1);
}
if (w=="S" or w=="s") { //PERIMETER OF A SQUARE
	cout<<"enter one side: ";
	cin>>x;
	y=4*x;
}

}
cout<<"\nThe result is: "<<y<<"\n\n\n\nBye :)";
return 0;
}

/* if (w=="C" or "c") { //AREA OF A CIRCLE
	cout<<"enter the value of the radius: ";
	cin>>x;
	y=3.141592654*(x)*(x);
} */
