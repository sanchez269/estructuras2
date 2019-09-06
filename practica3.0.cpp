#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct persona{
    char nombre[20];
    int suscripcion;
    char revista[20];
    char eliminar[20];

};

int main(){

    struct persona P1[10];
    struct persona *apuntador;
    apuntador=P1;
    int opcion,contador;
    char eliminar[20];
    for(int i=0; i<10; i++){
        P1[i].nombre[0]='0';
        cout<<"Menu\n  1. suscripcion\n  2. Baja\n  3. Salir\n ";
        cin>>opcion;
    switch (opcion){
        case 1:
            for(int i=0;i<10; i++){
                if(P1[i].nombre[0]=='n'){
                    cout<<"Nombre: ";
                    fflush(stdin);
                    cin.getline(P1[i].nombre,20,'\0');
                    cout<<"Tiempo de suscripcion en meses: ";
                    cin>>P1[i].suscripcion;
                    cout<<"Nombre de la revista: ";
                    fflush(stdin);
                    cin.getline(P1[i].revista,20,'\0');
                    cout<<'\0';
                    break;
                    }else
                    cout<<"El "<<i+1<<"º espacio esta ocupado"<<endl;
        }break;
            case 2:
                cout<<"Nombre del usuario que desea dar de baja: ";fflush(stdin);
                cin.getline(eliminar,20,'\0');
                for(int i=0; i<10; i++){
                        contador=strcmp(apuntador->nombre,eliminar);
                if (contador!=0)
                    apuntador++;
                else{
                    P1[i].nombre[0]='0';
                    cout<<"El usuario ha sido eliminado";
                    break;
                }
            }
            break;
            default:
                cout<<"sale"<<endl;
                break;

}
 }



    return 0;


}
