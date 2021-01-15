//OchoTres 3 Ejercicio 3_SCD
//Tiempo 06:00
#include <iostream>
#include <cstdlib>

#define ENERO 1
#define FEBRERO 2
#define MARZO 3
#define ABRIL 4
#define MAYO 5
#define JUNIO 6
#define JULIO 7
#define AGOSTO 8
#define SEPTIEMBRE 9
#define OCTUBRE 10
#define NOVIEMBRE 11
#define DICEMBRE 12

using namespace std;

class Fecha
{
private:
    int anio;
    int mes;
    int dia;

public:
    Fecha()
    {
        anio = 1998;
        mes = 6;
        dia = 20;
    }

    bool esFechaValida(int a, int m, int d)
    {
        bool valido = false;
        bool bisiesto = false;
        if((a % 4 == 0 && a % 100 != 100) ||(a % 400 == 0))
        {
            bisiesto = true;
        }

        if(a >= 1 && (m == ENERO || m == MARZO || m == MAYO || m == JULIO || m == AGOSTO ||
                      m == OCTUBRE || m == DICEMBRE) && d >= 1 && d <= 31)
        {
            valido = true;
        }
        else if((m == MAYO || m == JUNIO || m == SEPTIEMBRE || m == NOVIEMBRE) &&
                (d >= 1 && d <= 30))
        {
            valido = true;
        }
        else if((m == FEBRERO) && (bisiesto) && (d >= 1 && d <= 29))
        {
            valido = true;
        }
        else if((m == FEBRERO) && (!bisiesto) && (d >= 1 && d <= 28))
        {
            valido = true;
        }
        else
        {
            cout << "Fecha NO Valida" << endl;
            valido = false;
        }
        return valido;
    }

    bool fijaAnio(int a)
    {
        if(esFechaValida(a,mes,dia) == true)
        {
            anio = a;
            cout << "Se cambio el anio" << endl;
        }
        else
        {
            cout << "No se cambio el anio" << endl;

        }
        return esFechaValida(a,mes,dia);
    }

    bool fijaMes(int m)
    {
        if(esFechaValida(anio,m,dia) == true)
        {
            mes = m;
            cout << "Se cambio el mes" << endl;
        }
        else
        {
            cout << "No se cambio el mes" << endl;
        }
        return esFechaValida(anio,m,dia);
    }

    bool fijaDia(int d)
    {
        if(esFechaValida(anio,mes,d) == true)
        {
            dia = d;
            cout << "Se cambio el dia" << endl;
        }
        else
        {
            cout << "No se cambio el dia" << endl;
        }
        return esFechaValida(anio,mes,d);
    }

    int dameAnio()
    {
        return anio;
    }

    int dameMes()
    {
        return mes;
    }

    int dameDia()
    {
        return dia;
    }
};

int main()
{
    int a;
    int m;
    int d;
    int opcion;
    Fecha f;
    do
    {
        system("cls");
        cout << "Ingrese Fecha" << endl;
        cout << "1.- Anio" << endl;
        cout << "2.- Mes" << endl;
        cout << "3.- Dia" << endl;
        cout << "4.- Mostrar Fecha" << endl;
        cout << "5.- Salir" << endl;
        cin >> opcion;
        switch(opcion)
        {
        case 1:
            cout << "Ingrese el Anio: ";
            cin >> a;
            f.fijaAnio(a);
            break;
        case 2:
            cout << "Ingrese el Mes: ";
            cin >> m;
            f.fijaMes(m);
            break;
        case 3:
            cout << "Ingrese el Dia: ";
            cin >> d;
            f.fijaDia(d);
            break;
        case 4:
            cout << "Fecha: " << f.dameAnio() << "/" << f.dameMes() << "/" << f.dameDia() << endl;
            break;
        default:
            break;
        }
        system("pause");
    }
    while(opcion != 5);
    return 0;
}
