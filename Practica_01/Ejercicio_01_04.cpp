// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales
// Fecha creación: 21/08/2024
// Número de ejercicio: 4
// Problema planteado: iconvertir grados cel¿ntigrados a kelvin
#include <iostream>
using namespace std;
int main()
{
    float grados_k,grados_c;
    system("cls");
    cout<<"cuantos grados centigrados quiere convertir a kelvin?: ";
    cin>>grados_c;
    //se suma los grados centigrados con la cantidad de 273.15
    grados_k=grados_c+273,15;
    cout<<"los grados centigrados ingresados son: "<<grados_k<<" kelvin";
    return 0;
}