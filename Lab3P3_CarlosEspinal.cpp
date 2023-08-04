#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <array>
using namespace std;

void menu() {
    cout << "--- MENU PRINCIPAL ---" << endl << "Opcion 1:  \n" << "Opcion 2:  \n" << "Opcion 3: SALIDA" << endl << "Ingrese la opcion a la que desea acceder: ";
}

int obtenerNumRandom() {
    int random = -500 + rand() % (500-(- 500));
    return random;
}

void recursiveTriangle(int num) {

}

int* ordenarArray(int* arreglo) {
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 20; j++){
            if (arreglo[j] > arreglo[j+1]){
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
    return arreglo;
}



int main(){
    int opcion;
    do {
        menu();
        cin >> opcion;
        int numbuscar, contcomparar = 0;
        int* arr = new int[20];
        int* arrordenado;
        switch (opcion){
            case 1:
                bool seencuentra;
                cout << endl << "Numero por buscar: ";
                cin >> numbuscar;
                
                //for que llena el arreglo
                for (int i = 0; i < 20; i++) {
                    arr[i] = obtenerNumRandom();
                }
                cout << endl << "Arreglo generado y ordenado: " << endl << endl;
                //puntero que contiene el arreglo ordenado
                arrordenado = ordenarArray(arr);
                //for que recorre e imprime el arreglo ordenado, este va vereificando para ver si el numero ingresado esta dentro del arreglo
                for (int i = 1; i < 20; i++){
                    cout << arrordenado[i] << " ";
                    if (arrordenado[i] == numbuscar){
                        seencuentra = true;
                    }
                    else {
                        seencuentra = false;
                        contcomparar++;

                    }
                }

                if (seencuentra) {
                    cout << endl << "El numero " << numbuscar << " SI se encuentra dentro del arreglo";
                    cout << endl << "Numero de comparaciones: " << contcomparar;
                }
                else {
                    cout << endl << "El numero " << numbuscar << " NO se encuentra dentro del arreglo";
                    cout << endl << "Numero de comparaciones: " << contcomparar;
                }
                
                    break;
            case 2:
                int iterationnum;
                cout << endl << "Ingrese el numero de iteraciones para el proceso: ";
                cin >> iterationnum;
                    break;

        }
        char respc;
        cout << endl;
        cout << "Desea continuar usando el programa(s/n)?: ";
        cin >> respc;

        if (respc == 's' || respc == 'S'){
            opcion = 0;
        }
        else {
            opcion = 3;
        }
    } while (opcion != 3);

        
}

