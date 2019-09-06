#include <iostream>
#include <stdio.h>
using namespace std;

//  struct direccion {
    //char nombre [20];
   // int suscripcion;
    //char revista[20];

//};



struct persona{
    char nombre[20];
    int suscripcion;
    char revista[20];
    char eliminar[20];
};

int main() {
    struct persona P[10];
    struct persona *apuntador;
    apuntador=P;
    int opcion;
    for(int i=0; i<10; i++){
        P[i].nombre[0]=='no';
        cout<<"Menu\n 1. Suscripcion\n 2. Baja\n 3. Salir ";
        cin>>opcion;
        switch (opcion){
            case 1:
                for (int i=0; i<10, i++);{
                if (P[i].nombre[0]=='no'){
                cout<<"Nombre:";
                cin.getline(P[i].nombre, 20, '\n');
                cout<<"Tiempo de suscripcion: ";
                cin>>P[i].edad;
                cout<<"Nombre de la revista: ";
                cin>>P[i].altura;
                cout<<"Pais de origen: ";
                fflush(stdin);
                cin.getline(P[i].dire.pais, 20, '\n');
                break;
                }else
                cout<<"El" <<i+1<< "esta ocupado"<<endl;


            }break;
            case 2:
                cout<<"Dar de baja"cin.getline(P[i].)
                break;
            default:
                cout<<"sale"<<endl;
                break;


  //  cout<<endl<<"Animal guardado: "<<apuntador->nombre;
    // cout<<endl<<"Edad guardado: "<<apuntador->edad;
    // cout<<endl<<"Altura guardado: "<<apuntador->altura;
    // cout<<endl<<"Pais de origen guardado: "<<apuntador->dire.pais;

    return 0;


 }
