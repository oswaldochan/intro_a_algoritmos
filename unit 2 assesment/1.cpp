#include <iostream>
#include<string>

using namespace std;
int main() {
float f;
string r;
cout<<"Write P if you have pounds or\nWrite M if you have miligrams\n\t";
cin>>r;
cout<<"How many?\n\t";
cin>>f;
if (r=="P" or r=="p") {
    f= 453.6*f;
    cout<<"Then you have "<<f<<" miligrams.";
}
if (r=="M" or r=="m"){
    f=(f/453.6);
    cout<<"then you have "<<f<<" pounds.";
}
}
