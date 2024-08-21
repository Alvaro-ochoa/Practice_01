// Materia: Programación I, Paralelo 1
// Autor: Alvaro Alejandro Ochoa Segales
// Fecha creación: 21/08/2024
// Número de ejercicio: 7
// Problema planteado: ingresar los meses en numeros y volverlos de forma literal
#include <iostream>
using namespace std;
int main()
{
    int mes;
    system("cls");
    cout<<"bienvenido "<<endl; 
    //se crea un menu para poder elegir las opciones de mes en numerico, para luego salir de forma literal
    cout<<"ingrese la opción que quisiera convertir en segundos: "<<endl;
    cout<<"1. "<<"\t";
    cout<<"2. "<<"\t";
    cout<<"3. "<<"\t";
    cout<<"4. "<<"\t";
    cout<<"5. "<<"\t";
    cout<<"6. "<<"\t";
    cout<<"7. "<<"\t";
    cout<<"8. "<<"\t";
    cout<<"9. "<<"\t";
    cout<<"10. "<<"\t";
    cout<<"11. "<<"\t";
    cout<<"12. "<<"\t";
    cin>>mes;
    switch(mes)
    {
       case 1: 
          cout<<"Enero";
          break;
       case 2:
          cout<<"Febrero";
          break;
       case 3:
          cout<<"Marzo";
          break;
       case 4:
          cout<<"Abril";
          break;
        case 5:
          cout<<"Mayo";
          break;
        case 6:
          cout<<"Junio";
          break;
       case 7:
          cout<<"Julio";
          break;
       case 8:
          cout<<"Agosto";
          break;
       case 9:
          cout<<"Septiembre";
          break;
       case 10:
          cout<<"Octubre";
          break;
       case 11:
          cout<<"Noviembre";
          break;
       case 12:
          cout<<"Diciembre";
          break;
        default:
          cout<<"no ha elegido ninguna opcion, que tenga un buen dia";
    }
     return 0;
}