#include<iostream>
#include<cmath>
using namespace std;
int main() {
int i=1,k;
cout<<"I'll tell you the numbers divisible by 5 from 1 to 99\n";
while (i<100) {
    k=i%5;
    if (k==0) {
    cout<<i<<" is divisible by 5\n";
    }
i++;
}
return 0;
}
