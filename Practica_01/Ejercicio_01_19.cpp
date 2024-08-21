// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales
// Fecha creación: 21/08/2024
// Número de ejercicio: 19
// Problema planteado: convertir dias, horas y minutos a segundos
#include <iostream>
using namespace std;
int main()
{
    int dias, horas, min, seg1, seg2, seg3, seg4, segT, opcion;
    system("cls");
    cout<<"bienvenido "<<endl;
    cout<<"----------- "<<endl;
    //se hace un menu para poder elegir la opcion, esto con ayuda de la funcion switch
    cout<<"elija la opcion que desee "<<endl;
    cout<<"1.convertir dias en segundos "<<"\t";
    cout<<"2.convertir horas en segundos "<<"\t";
    cout<<"3.convertir minutos en segundos "<<endl;
    cout<<"4.todas las anteriores "<<"\t";
    cin>>opcion;
    switch(opcion)
    {
       case 1: 
        cout<<"ingrese los días transcurridos "<<endl;
        cin>>dias;
        seg1=dias*86400;
        cout<<"en segundos serian "<<seg1<<"seg";
        break;
       case 2:
        cout<<"ingrese la cantidad de horas transcurridas "<<endl;
        cin>>horas;
        seg2=horas*3600;
        cout<<"en segundos serian "<<seg2<<"seg";
        break;
       case 3:
        cout<<"ingrese la cantidad de minutos transcurridos "<<endl;
        cin>>min;
        seg3=min*60;
        cout<<"en segundos serian "<<seg3<<"seg";
        break;
       case 4:
        cout<<"ingrese los días transcurridos "<<endl;
        cin>>dias;
        cout<<"ingrese la cantidad de horas transcurridas "<<endl;
        cin>>horas;
        cout<<"ingrese la cantidad de minutos transcurridos "<<endl;
        cin>>min;
        cout<<"ingrese la cantidad de segundos transcurridos "<<endl;
        cin>>seg4;
        seg1=dias*86400;
        seg2=horas*3600;
        seg3=min*60;
        segT=seg1+seg2+seg3+seg4;
        cout<<" el tiempo total en segundos es de "<<segT<<"s";
        break;
    }
  return 0;
}