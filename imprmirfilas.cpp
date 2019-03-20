#include <iostream>

using namespace std;
int main(){
int x,i,w,y;
cout<<"how many numbers do you want to print?\n";
cin>>x;
x=x+1;
i=0; w=0;
while (i<x) {
    w=0;
    while(w<i) {
        cout<<"*";
        w++;
    }
    cout<<"\n";
    i++;
    }
i=0; w=0;
while (i<x) {
    w=0;
    while(w<i) {
        cout<<w+1;
        w++;
    }
    cout<<"\n";
    i++;
    }
i=0; w=0;
while (i<x) {
    w=0;
    while(w<i) {
        cout<<i;
        w++;
    }
    cout<<"\n";
    i++;
    }
i=0; w=0; y=x;
while (i<x) {
    w=0;
    while(0<y) {
        cout<<".";
        y=y-1;
    }
    while(w<i) {
        cout<<"*";
        w++;
    }
    cout<<"\n";
    i++;
    }
}
