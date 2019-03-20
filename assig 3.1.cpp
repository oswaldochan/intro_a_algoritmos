#include <iostream>
#include <string>
#include <math.h>

int answer(int resp, ) {
    string respuesta;
if (respuesta=="Y" || respuesta=="y" || respuesta=="Yes" || respuesta=="yes" || respuesta=="YES") {resp=1;}
    else {resp=0;}}

using namespace std;
int main ( ) {
string nombredelproducto, respuesta;
float total=0, costodelproducto, cantidaddelproducto, sub,tax;
// int resp;




cout<<"Are you going to buy something?\n";
cin>>respuesta;
    /* if (respuesta=="Y" || respuesta=="y" || respuesta=="Yes" || respuesta=="yes" || respuesta=="YES") {resp=1;}
    else {resp=0;} */
answer();
while(resp==1) {
    cout<<"\nWhat product are you going to buy?\n";
    cin>>nombredelproducto;
    cout<<"what's the cost of "<<nombredelproducto<<"?\n";
    cin>>costodelproducto;
    tax=costodelproducto*1.16;
    cout<<"who many "<<nombredelproducto<<" are you going to buy?\n";
    cin>>cantidaddelproducto;
    sub= tax*cantidaddelproducto;
    total= total + sub;
    cout<<"You're going to pay "<<sub<<" for "<<nombredelproducto<<"\n[[[THE CURRENT TOTAL IS: "<<total<<"]]]\n";
    cout<<"\nDo you want to keep buying stuff?\n";
    cin>>respuesta;
        /* if (respuesta=="Y" || respuesta=="y" || respuesta=="Yes" || respuesta=="yes" || respuesta=="YES") {resp=1;}
        else {resp=0;} */
            answer();
}
cout<<"\n[[[[[[[ THE TOTAL IS: "<<total<<" ]]]]]]]";
return 0;
}


/* while (Resp=1) {
cin>>nombredelproducto;
cin>>preciodelproducto;
cin>>cantidaddelproducto;
Sub= (preciodelproducto)*(cantidaddelproducto);
Tax= (Sub)*(.16);
Total= Total+Tax;
cout<<"el producto "<<nombredelproducto<<" costó "<<Sub<<endl;
cout<<"Con todo e impuestos es "<<Tax<<endl;
cout<<"su total es "<<Total<<endl;
cout<<" wanna do it again?";
cin>>Respuesta;
if (Respuesta=="Y" || Respuesta=="y" || Respuesta=="Yes" || Respuesta=="yes" || Respuesta=="YES") {Resp=1;}
}
cout<<"\n\n el total totalísimo es "<<Total; */
