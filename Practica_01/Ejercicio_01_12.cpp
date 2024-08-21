// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales
// Fecha creación: 21/08/2024
// Número de ejercicio: 12
// Problema planteado: ingresar dos numeros y ver si son multiplos uno del otro
#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    system("cls");
    cout<<"ingrese un numero: ";
    cin>>num1;
    cout<<"ingrese otro numero: ";
    cin>>num2;
    //al ser el modulo o el resto igual a cero, se comprueba si son multiplos
    if (num1%num2==0)
    {
        cout<<num1<<" es multiplo de "<<num2;
    }
    else
    {
        if (num2%num1==0)
        {
            cout<<num2<<" es multiplo de "<<num1;
        }
        else
        {
            //al no ser el modulo igual a cero, el numero no es multiplo
            if (num2%num1!=0)
            {
                cout<<num2<<" es no multiplo de "<<num1;
            }
            else
            {
                cout<<num1<<" es no multiplo de "<<num2;
            }
        }
    }
        return 0;
}