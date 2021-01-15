//OchoTres  1 Ejercicio 1_SCD
//Tiempo=08:20

#include <iostream>
#include <string>
#include <sstream>
using namespace std;


void imprimirCadena(string recibida){
    stringstream contadorTemp;
    string contadorAux;
    int contador;
    unsigned int i;
    char* elementos = new char[sizeof(recibida)];
    int* cadenaCombinada = new int[sizeof(recibida)];

    for(i=0; i<recibida.length(); i++){
        contador = i+1;
    }

    contadorTemp << contador;
    contadorTemp >> contadorAux;
    recibida = contadorAux + recibida;

    cout << "Tu Cadena fue" <<endl;
    for(i=0; i<recibida.length(); i++){
            cadenaCombinada[i] = recibida[i];
            elementos[i]= cadenaCombinada[i];
            if(elementos[i] < 48 || elementos[i] > 57){
                cout<<"Cadena: " <<elementos[i]<<" "<<"ASCII: "<<(int)elementos[i]<<endl;
            }
    }
}

int main()
{
    string cadenaEntrada;
    cout << "Ingrese una Cadena: ";
    getline(cin,cadenaEntrada);

    imprimirCadena(cadenaEntrada);
    return 0;
}
