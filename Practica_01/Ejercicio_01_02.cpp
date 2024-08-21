// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales
// Fecha creación: 21/08/2024
// Número de ejercicio: 2
// Problema planteado: calcular el volumen de una esfera
#include <math.h>
using namespace std;
int main()
{
    float radio,part1,part2, volumen;
    system("cls");
    cout<<"ingrese el radio de la esfera ";
    cin>>radio;
    //para este punto se divide en 2 partes para operar de mejor forma el resultado del volumen
    part1=pow(radio,3);
    part2=3.14159*part1;
    volumen=4/3*part2;
    cout<<"el volumen de la esfera es "<<volumen;
    return 0;
}