#include <iostream>
#include <stdio.h>
using namespace std;

struct direccion {
    char pais [20];
    int cp;
    char ciudad[20];

};

struct animal{
    char nombre[20];
    int edad;
    float altura;
    struct direccion dire;

};

int main() {
    struct animal P1[5];
    struct animal *apuntador;

    apuntador=&P1[0];

    for(int i=0; i<1; i++) {

        cout<<"Animal: ";
        cin.getline(P1[i].nombre, 20, '\n');
        cout<<"Edad: ";
        cin>>P1[i].edad;
        cout<<"Altura: ";
        cin>>P1[i].altura;
        cout<<"Pais de origen: ";
        fflush(stdin);
        cin.getline(P1[i].dire.pais, 20, '\n');
}

    cout<<endl<<"Animal guardado: "<<apuntador->nombre;
    cout<<endl<<"Edad guardado: "<<apuntador->edad;
    cout<<endl<<"Altura guardado: "<<apuntador->altura;
    cout<<endl<<"Pais de origen guardado: "<<apuntador->dire.pais;

    return 0;

 }
