//OchoTres 4 Ejercio 4_SCD
//Tiempo = 06:40
#include <iostream>
#include <stdlib.h>
#include <string.h>

#define ANIO_ACTUAL 2020
#define MES_ACTUAL 10
#define DIA_ACTUAL 13

#define ANIO_MINIMO 2002

using namespace std;

class Fecha
{
public:
    int anio;
    int mes;
    int dia;
    Fecha()
    {
        anio = 0;
        mes = 0;
        dia = 0;
    }

    int fijaAnio(int a)
    {
        if(a <= ANIO_MINIMO)
        {
            anio = a;
            cout << "Anio valido" << endl;
        }
        else
        {
            cout << "Es muy joven para ser Jugador Profesional" << endl;
        }
        return a;
    }

    int fijaMes(int m)
    {
        if(m >= 1 && m <= 12)
        {
            mes = m;
            cout << "Mes valido" << endl;
        }
        else
        {
            cout << "No existe ese mes" << endl;
        }
        return m;
    }

    int fijaDia(int d)
    {
        if(d >= 1 && d <= 31)
        {
            dia = d;
            cout << "Dia valido" << endl;
        }
        else
        {
            cout << "No existe ese dia" << endl;
        }
        return dia;
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

class Jugador
{
private:
    string nombre;
    string pais;
    string posicion;
    int numero;
    int edad;
    float altura;
    float peso;

public:
    Fecha fechaNacimiento;
    Jugador()
    {
        nombre = "";
        pais = "";
        posicion = "";
        numero = 0;
        edad = 0;
        altura = 0;
        peso = 0;
    }

    string fijaNombre(string nombreEntrada)
    {
        int tamanioCadena = sizeof(nombreEntrada);
        for(int i = 0; i < tamanioCadena; i++)
        {
            if(nombreEntrada[i] < 33 || nombreEntrada[i] > 44)
            {
                break;
            }
            else
            {
                cout << "Caracteres invalidos" << endl;
            }
        }
        cout << "El nombre es valido" << endl;
        nombre = nombreEntrada;
        return nombre;
    }

    string fijaPais(string nombreEntrada)
    {
        int tamanioCadena = sizeof(nombreEntrada);
        for(int i = 0; i < tamanioCadena; i++)
        {
            if(nombreEntrada[i] < 33 || nombreEntrada[i] > 44)
            {
                break;
            }
            else
            {
                cout << "Caracteres invalidos" << endl;
            }
        }
        cout << "El pais es valido" << endl;
        pais = nombreEntrada;
        return pais;
    }

    string fijaPosicion(string nombreEntrada)
    {
        int tamanioCadena = sizeof(nombreEntrada);
        for(int i = 0; i < tamanioCadena; i++)
        {
            if(nombreEntrada[i] < 33 || nombreEntrada[i] > 44)
            {
                break;
            }
            else
            {
                cout << "Caracteres invalidos" << endl;
            }
        }
        cout << "La Posicion es valida" << endl;
        posicion = nombreEntrada;
        return posicion;
    }

    int fijaNumero(int n)
    {
        if(n >= 1 && n <= 100)
        {
            numero = n;
            cout << "Numero de Jugador guardado" << endl;
        }
        else if(n <= 0)
        {
            cout << "Lo lamento Numero invalido" << endl;
        }
        else
        {
            cout << "No puedes tener ese numero" << endl;
        }
        return numero;
    }



    int fijaEdad(int a, int m, int d)
    {
        if(a < ANIO_ACTUAL)
        {
            if(m < MES_ACTUAL)
            {
                edad = ANIO_ACTUAL - a;
            }
            else if(m == MES_ACTUAL)
            {
                if(d < DIA_ACTUAL || d == DIA_ACTUAL)
                {
                    edad = ANIO_ACTUAL - a;
                }
                else
                {
                    edad = (ANIO_ACTUAL - a) - 1;
                }
            }
            else if(m > MES_ACTUAL)
            {
                edad = (ANIO_ACTUAL - a) - 1;
            }
        }
        return edad;
    }

    float fijaAltura(float alturaEntrada)
    {
        if(alturaEntrada >= 1 && alturaEntrada <= 2.5)
        {
            alturaEntrada = alturaEntrada;
            cout << "Altura Guardada" << endl;
        }
        else
        {
            cout << "Nadie es tan alto" << endl;
        }
        return altura;
    }

    float fijaPeso(float pesoEntrada)
    {
        if(pesoEntrada >= 50 && pesoEntrada <= 100)
        {
            peso = pesoEntrada;
            cout << "Tienes el peso necesario" << endl;
        }
        else
        {
            cout << "No tienes el peso necesarios" << endl;
        }
        return peso;
    }

    string dameNombre()
    {
        return nombre;
    }

    string damePais()
    {
        return pais;
    }

    string damePosicion()
    {
        return posicion;
    }

    int dameNumero()
    {
        return numero;
    }

    int dameEdad()
    {

        return edad;
    }

    float dameAltura()
    {
        return altura;
    }

    float damePeso()
    {
        return peso;
    }
};

class JugadorProfesional : public Jugador
{
private:
   string club;
   string entrenador;
   int sueldo;

public:
    JugadorProfesional()
    {
        club = "";
        entrenador = "";
        sueldo = 0;
    }

    string fijaClub(string nombreEntrada)
    {
        int tamanioCadena = sizeof(nombreEntrada);
        for(int i = 0; i < tamanioCadena; i++)
        {
            if(nombreEntrada[i] < 33 || nombreEntrada[i] > 44)
            {
                break;
            }
            else
            {
                cout << "Caracteres invalidos" << endl;
            }
        }
        cout << "El nombre del Jugador es valido" << endl;
        club = nombreEntrada;
        return club;
    }

    string fijaEntrenador(string puesto)
    {
        int tamanioCadena = sizeof(puesto);
        for(int i = 0; i < tamanioCadena; i++)
        {
            if(puesto[i] < 33 || puesto[i] > 44)
            {
                break;
            }
            else
            {
                cout << "Caracteres invalidos" << endl;
            }
        }
        cout << "El entrenador es valido" << endl;
        entrenador = puesto;
        return entrenador;
    }

    int fijaSueldo(int sueldoEntrada)
    {
        if(sueldoEntrada >= 1 && sueldoEntrada <= 1000000)
        {
            sueldo = sueldoEntrada;
            cout << "Excelente sueldo" << endl;
        }
        else
        {
            cout << "No puedes tener ese sueldo" << endl;
        }
        return sueldo;
    }

    string dameClub()
    {
        return club;
    }

    string dameEntrenador()
    {
        return entrenador;
    }

    int dameSueldo()
    {
        return sueldo;
    }

};

class JugadorEscolar : public Jugador
{
private:
   string escuela;
   int grado;
   float promedio;

public:
    JugadorEscolar()
    {
        escuela = "";
        grado = 0;
        promedio = 0;
    }

    string fijaEscuela(string nombreEntrada)
    {
        int tamanioCadena = sizeof(nombreEntrada);
        for(int i = 0; i < tamanioCadena; i++)
        {
            if(nombreEntrada[i] < 33 || nombreEntrada[i] > 44)
            {
                break;
            }
            else
            {
                cout << "Caracteres invalidos" << endl;
            }
        }
        cout << "El nombre de la escuela es valido" << endl;
        escuela = nombreEntrada;
        return escuela;
    }

    int fijaGrado(int gradoEntrada)
    {
        for(int i = 0; i < gradoEntrada; i++)
        {
            if(gradoEntrada >= 1 || gradoEntrada <= 8)
            {
                break;
            }
            else
            {
                cout << "Caracteres invalidos" << endl;
            }
        }
        cout << "El grado es valido" << endl;
        grado = gradoEntrada;
        return grado;
    }

    float fijaPromedio(float promedioEntrada)
    {
        if(promedioEntrada >= 1 && promedioEntrada <= 10)
        {
            promedio = promedioEntrada;
            cout << "Es un buen promedio" << endl;
        }
        else if(promedioEntrada <= 0)
        {
            cout << "Es un mal promedio" << endl;
        }
        else
        {
            cout << "Mentiroso nadie tiene un promedio mas alto de 10" << endl;
        }
        return promedio;
    }

    string dameEscuela()
    {
        return escuela;
    }

    int dameGrado()
    {
        return grado;
    }

    float damePromedio()
    {
        return promedio;
    }
};

int main()
{
    Jugador jugador;
    JugadorProfesional jugadorPro;
    JugadorEscolar jugadorEsc;
    string datoEntrada = "";
    int dato = 0;
    int opc = 0;
    float datoDiferente = 0;
    do
    {
        system("cls");
        cout << "Equipo de Futbol" << endl;
        cout << "1.- Registrar Jugador" << endl;
        cout << "2.- Registrar Jugador Profesional" << endl;
        cout << "3.- Registrar Jugador Escolar" << endl;
        cout << "4.- Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opc;
        switch(opc)
        {
        case 1:
            do
            {
                int a = 0;
                int m = 0;
                int d = 0;
                system("cls");
                cout << "Equipo de Futbol" << endl;
                cout << "1.- Nombre" << endl;
                cout << "2.- Pais" << endl;
                cout << "3.- Posicion" << endl;
                cout << "4.- Numero" << endl;
                cout << "5.- Edad" << endl;
                cout << "6.- Altura" << endl;
                cout << "7.- Peso" << endl;
                cout << "8.- Salir" << endl;
                cout << "Ingrese opcion: ";
                cin >> opc;
                switch(opc)
                {
                case 1:
                    cout << "Ingrese el nombre" << endl;
                    cout << "Equipo: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugador.fijaNombre(datoEntrada);
                    cout << endl;
                    cout << "Equipo: " << jugador.dameNombre() << endl;
                    cout << endl;
                    break;
                case 2:
                    cout << "Ingrese el Pais" << endl;
                    cout << "Pais: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugador.fijaPais(datoEntrada);
                    cout << endl;
                    cout << "Pais: " << jugador.damePais() << endl;
                    cout << endl;
                    break;
                case 3:
                    cout << "Ingrese Posicion" << endl;
                    cout << "Posicion: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugador.fijaPosicion(datoEntrada);
                    cout << endl;
                    cout << "Posicion: " << jugador.damePosicion() << endl;
                    cout << endl;
                    break;
                case 4:
                    cout << "Ingrese Numero" << endl;
                    cout << "Numero: ";
                    cin >> dato;
                    jugador.fijaNumero(dato);
                    cout << endl;
                    cout << "Numero: " << jugador.dameNumero() << endl;
                    cout << endl;
                    break;
                case 5:
                    cout << "Ingrese la fecha de nacimiento" << endl;
                    cout << "Fecha de naciminto" << endl;
                    cout << "Anio: ";
                    cin >> a;
                    jugador.fechaNacimiento.fijaAnio(a);
                    cout << "Mes: ";
                    cin >> m;
                    jugador.fechaNacimiento.fijaMes(m);
                    cout << "Dia: ";
                    cin >> d;
                    jugador.fechaNacimiento.fijaDia(d);
                    jugador.fijaEdad(a,m,d);
                    cout << endl;
                    cout << "Edad: " << jugador.dameEdad() << endl;
                    cout << "Fecha: " << jugador.fechaNacimiento.dameAnio() << " / "
                         << jugador.fechaNacimiento.dameMes() << " / "
                         << jugador.fechaNacimiento.dameDia() << endl;
                    cout << endl;
                    break;
                case 6:
                    cout << "Ingrese Altura" << endl;
                    cout << "Altura: ";
                    cin >> datoDiferente;
                    jugador.fijaAltura(datoDiferente);
                    cout << endl;
                    cout << "Altura: " << jugador.dameAltura() << endl;
                    cout << endl;
                    break;
                case 7:
                    cout << "Ingrese Peso" << endl;
                    cout << "Peso: ";
                    cin >> dato;
                    jugador.fijaPeso(dato);
                    cout << endl;
                    cout << "Peso: " << jugador.damePeso() << endl;
                    cout << endl;
                    break;
                default:
                    break;
                }
                system("pause");
            }
            while(opc != 8);
            break;
        case 2:
            do
            {
                system("cls");
                int a = 0;
                int m = 0;
                int d = 0;
                cout << "Jugador de Futbol" << endl;
                cout << "1.- Nombre" << endl;
                cout << "2.- Pais" << endl;
                cout << "3.- Posicion" << endl;
                cout << "4.- Numero" << endl;
                cout << "5.- Edad" << endl;
                cout << "6.- Altura" << endl;
                cout << "7.- Peso" << endl;
                cout << "8.- Club" << endl;
                cout << "9.- Entrenador" << endl;
                cout << "10.- Sueldo" << endl;
                cout << "11.- Salir" << endl;
                cout << "Ingrese opcion: ";
                cin >> opc;
                switch(opc)
                {
                case 1:
                    cout << "Ingrese el nombre" << endl;
                    cout << "Equipo: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugadorPro.fijaNombre(datoEntrada);
                    cout << endl;
                    cout << "Equipo: " << jugadorPro.dameNombre() << endl;
                    cout << endl;
                    break;
                case 2:
                    cout << "Ingrese el Pais" << endl;
                    cout << "Pais: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugadorPro.fijaPais(datoEntrada);
                    cout << endl;
                    cout << "Pais: " << jugadorPro.damePais() << endl;
                    cout << endl;
                    break;
                case 3:
                    cout << "Ingrese Posicion" << endl;
                    cout << "Posicion: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugadorPro.fijaPosicion(datoEntrada);
                    cout << endl;
                    cout << "Posicion: " << jugadorPro.damePosicion() << endl;
                    cout << endl;
                    break;
                case 4:
                    cout << "Ingrese Numero" << endl;
                    cout << "Numero: ";
                    cin >> dato;
                    jugadorPro.fijaNumero(dato);
                    cout << endl;
                    cout << "Numero: " << jugadorPro.dameNumero() << endl;
                    cout << endl;
                    break;
                case 5:
                    cout << "Ingrese la fecha de nacimiento" << endl;
                    cout << "Fecha de naciminto" << endl;
                    cout << "Anio: ";
                    cin >> a;
                    jugadorPro.fechaNacimiento.fijaAnio(a);
                    cout << "Mes: ";
                    cin >> m;
                    jugadorPro.fechaNacimiento.fijaMes(m);
                    cout << "Dia: ";
                    cin >> d;
                    jugadorPro.fechaNacimiento.fijaDia(d);
                    jugadorPro.fijaEdad(a,m,d);
                    cout << endl;
                    cout << "Edad: " << jugadorPro.dameEdad() << endl;
                    cout << "Fecha: " << jugadorPro.fechaNacimiento.dameAnio() << " / "
                         << jugadorPro.fechaNacimiento.dameMes() << " / "
                         << jugadorPro.fechaNacimiento.dameDia() << endl;
                    cout << endl;
                    break;
                case 6:
                    cout << "Ingrese Altura" << endl;
                    cout << "Altura: ";
                    cin >> datoDiferente;
                    jugadorPro.fijaAltura(datoDiferente);
                    cout << endl;
                    cout << "Altura: " << jugadorPro.dameAltura() << endl;
                    cout << endl;
                    break;
                case 7:
                    cout << "Ingrese Peso" << endl;
                    cout << "Peso: ";
                    cin >> dato;
                    jugadorPro.fijaPeso(dato);
                    cout << endl;
                    cout << "Peso: " << jugadorPro.damePeso() << endl;
                    cout << endl;
                    break;
                case 8:
                    cout << "Ingrese Club" << endl;
                    cout << "Club: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugadorPro.fijaClub(datoEntrada);
                    cout << endl;
                    cout << "Club: " << jugadorPro.dameClub() << endl;
                    cout << endl;
                    break;
                case 9:
                    cout << "Ingrese Entrenador" << endl;
                    cout << "Entrenador: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugadorPro.fijaEntrenador(datoEntrada);
                    cout << endl;
                    cout << "Entrenador: " << jugadorPro.dameEntrenador() << endl;
                    cout << endl;
                    break;
                case 10:
                    cout << "Ingrese Sueldo" << endl;
                    cout << "Sueldo: ";
                    cin >> dato;
                    jugadorPro.fijaSueldo(dato);
                    cout << endl;
                    cout << "Sueldp: " << jugadorPro.dameSueldo() << endl;
                    cout << endl;
                    break;
                default:
                    break;

                }
                system("pause");
            }
            while(opc != 11);
            break;
        case 3:
            do
            {
                system("cls");
                int a = 0;
                int m = 0;
                int d = 0;
                cout << "Jugador de Futbol" << endl;
                cout << "1.- Nombre" << endl;
                cout << "2.- Pais" << endl;
                cout << "3.- Posicion" << endl;
                cout << "4.- Numero" << endl;
                cout << "5.- Edad" << endl;
                cout << "6.- Altura" << endl;
                cout << "7.- Peso" << endl;
                cout << "8.- Escuela" << endl;
                cout << "9.- Grado" << endl;
                cout << "10.- Promedio" << endl;
                cout << "11.- Salir" << endl;
                cout << "Ingrese opcion: ";
                cin >> opc;
                switch(opc)
                {
                case 1:
                    cout << "Ingrese el nombre" << endl;
                    cout << "Equipo: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugadorEsc.fijaNombre(datoEntrada);
                    cout << endl;
                    cout << "Equipo: " << jugadorEsc.dameNombre() << endl;
                    cout << endl;
                    break;
                case 2:
                    cout << "Ingrese el Pais" << endl;
                    cout << "Pais: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugadorEsc.fijaPais(datoEntrada);
                    cout << endl;
                    cout << "Pais: " << jugadorEsc.damePais() << endl;
                    cout << endl;
                    break;
                case 3:
                    cout << "Ingrese Posicion" << endl;
                    cout << "Posicion: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugadorEsc.fijaPosicion(datoEntrada);
                    cout << endl;
                    cout << "Posicion: " << jugadorEsc.damePosicion() << endl;
                    cout << endl;
                    break;
                case 4:
                    cout << "Ingrese Numero" << endl;
                    cout << "Numero: ";
                    cin >> dato;
                    jugadorEsc.fijaNumero(dato);
                    cout << endl;
                    cout << "Numero: " << jugadorEsc.dameNumero() << endl;
                    cout << endl;
                    break;
                case 5:
                    cout << "Ingrese la fecha de nacimiento" << endl;
                    cout << "Fecha de naciminto" << endl;
                    cout << "Anio: ";
                    cin >> a;
                    jugadorEsc.fechaNacimiento.fijaAnio(a);
                    cout << "Mes: ";
                    cin >> m;
                    jugadorEsc.fechaNacimiento.fijaMes(m);
                    cout << "Dia: ";
                    cin >> d;
                    jugadorEsc.fechaNacimiento.fijaDia(d);
                    jugadorEsc.fijaEdad(a,m,d);
                    cout << endl;
                    cout << "Edad: " << jugadorEsc.dameEdad() << endl;
                    cout << "Fecha: " << jugadorEsc.fechaNacimiento.dameAnio() << " / "
                         << jugadorEsc.fechaNacimiento.dameMes() << " / "
                         << jugadorEsc.fechaNacimiento.dameDia() << endl;
                    cout << endl;
                    break;
                case 6:
                    cout << "Ingrese Altura" << endl;
                    cout << "Altura: ";
                    cin >> datoDiferente;
                    jugadorEsc.fijaAltura(datoDiferente);
                    cout << endl;
                    cout << "Altura: " << jugadorEsc.dameAltura() << endl;
                    cout << endl;
                    break;
                case 7:
                    cout << "Ingrese Peso" << endl;
                    cout << "Peso: ";
                    cin >> dato;
                    jugadorEsc.fijaPeso(dato);
                    cout << endl;
                    cout << "Peso: " << jugadorEsc.damePeso() << endl;
                    cout << endl;
                    break;
                case 8:
                    cout << "Ingrese Escuela" << endl;
                    cout << "Escuela: ";
                    cin.ignore();
                    getline(cin,datoEntrada);
                    jugadorEsc.fijaEscuela(datoEntrada);
                    cout << endl;
                    cout << "Escuela: " << jugadorEsc.dameEscuela() << endl;
                    cout << endl;
                    break;
                case 9:
                    cout << "Ingrese Grado" << endl;
                    cout << "Grado: ";
                    cin >> dato;
                    jugadorEsc.fijaGrado(dato);
                    cout << endl;
                    cout << "Grado: " << jugadorEsc.dameGrado() << endl;
                    cout << endl;
                    break;
                case 10:
                    cout << "Ingrese Promedio" << endl;
                    cout << "Promedio: ";
                    cin >> dato;
                    jugadorEsc.fijaPromedio(dato);
                    cout << endl;
                    cout << "Promedio: " << jugadorEsc.damePromedio() << endl;
                    cout << endl;
                    break;
                default:
                    break;
                }
                system("pause");
            }
            while(opc != 11);
            break;
        default:
            break;
        }
        system("pause");
    }
    while(opc != 4);
    return 0;
}
