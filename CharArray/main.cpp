//OchoTres 2 Ejercicio 2_SCD
//Tiempo = 05:30
#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

void copiarCadena(char recibidos[], string cadenaRecibida){
    int tamanoArreglo = 50;
    int vecesQueCabe = 0;

    vecesQueCabe = (50/cadenaRecibida.length());

    for(int i=0; i<vecesQueCabe; i++){
        cadenaRecibida += cadenaRecibida;
    }

    for(int j=0; j<50; j++){
        recibidos[j] = cadenaRecibida[j];
    }
}

int main(){
    string cadenaEntrada;
    char elementos[50];

    do{
        system("cls");
        cout << "Ingrese una Cadena: ";
        getline(cin, cadenaEntrada);

        copiarCadena(elementos, cadenaEntrada);

        for(int i=0; i<sizeof(elementos)/cadenaEntrada.length(); i++){
            for(int j=0; j<cadenaEntrada.length(); j++){
                cout << elementos[j];
            }
        }
        cout << endl;
        system("PAUSE");
    }while(!cin.eof());
}
