// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales
// Fecha creación: 21/08/2024
// Número de ejercicio: 3
// Problema planteado: ingresar notas para sacar un promedio
#include <iostream>
using namespace std;
int main()
{
    float cant,prom,suma,nota;
    suma=0;
    cout<<"cuantas notas ingresara para sacar el promedio?: ";
    cin>>cant;
    for(int i=1;i<=cant;i++)
      {  
        cout<<"ingrese la nota ";
        cin>>nota;
        //se anota la suma con un valor de 0 para posteriormente ir sumando las notas de forma progresiva
        suma=suma+nota;
      }
      prom=suma/cant;
      cout<<"el promedio de las notas ingresadas es de :"<<prom;
    return 0;
}