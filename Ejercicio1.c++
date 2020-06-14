//Calcular el salario de los empleados

#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int main (void){ 

    int Trabajador = 0, Agregar, horas = 0, HorasE = 0, Total, Real, Impuesto = 0; //variables a usar 
    int Extra, descuentos; 

    cout <<"Bienvenido"<<endl<<endl;

    while (Trabajador == 0)
    {
    cout<<endl;
    cout <<"por favor coloque las horas trabajadas: "<<endl;
    cin>>horas;

    cout <<"usted a realizado horas extra? "<<endl<<endl; //pregunta paa saber si el empleado realizo horas extras
    cout <<"1. Si"<<endl;
    cout <<"2. No"<<endl;
    cin>>Extra;

    if (Extra == 1)
    {

        cout <<"Coloque las horas extras realizadas por favor"<<endl;
        cin>>HorasE;
    }
    
    Total =  (horas * 1.75) + (HorasE * 2.50); //Calculo del total

    if (Total > 500)
    {
        Impuesto = Total * 0.10;
    }

    descuentos = ((Total * 0.04) + (Total * 0.0625) + (Impuesto) ); //formula de los descuentos

    Real = Total - descuentos;

    cout <<"el salario total es: $"<<Total<<endl;
    cout <<"el salario real es: $"<<Real<<endl<<endl; //valores del salario real y total

    cout <<"Quisiera agregar saber el salario de otro empleado? "<<endl; //opcion para conseguir oreo salario
    cout <<"1. Si"<<endl;
    cout <<"2. No"<<endl;
    cin>>Agregar;
    cout<<endl;

    if (Agregar == 1)
    {
         cout <<"regresando al inicio..."<<endl;
    }
    else if(Agregar == 2)
    {
         Trabajador++;
          cout<<"Que tenga un buen dia."<<endl;
    }

    }
    cout<<endl;

    system ("pause");
        return 0;

}