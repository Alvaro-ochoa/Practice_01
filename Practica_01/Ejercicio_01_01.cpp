// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales
// Fecha creación: 21/08/2024
// Número de ejercicio: 1
// Problema planteado: calcular el area de un triangulo
#include <iostream>
using namespace std;
int main()
{
    //se usa la variable float ya que los resultados no saldran siempre enteros
    float part1,num1,num2, area;
    system("cls");
    cout<<"ingrese la base ";
    cin>>num1;
    cout<<"ingrese la altura ";
    cin>>num2;
    part1=num1+num2;
    area=part1/2;
    cout<<"el area del triangulo es "<<area;
    return 0;
}