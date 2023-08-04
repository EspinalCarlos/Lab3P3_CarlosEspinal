#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <array>
using namespace std;

void menu() {
    cout << "--- MENU PRINCIPAL ---" << endl << "Opcion 1:  \n" << "Opcion 2:  \n" << "Opcion 3: SALIDA" << endl << "Ingrese la opcion a la que desea acceder: ";
}

int obtenerNumRandom() {
    int random = rand() % 501;
    return random;
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
        switch (opcion){
            case 1:
                int numbuscar;
                cout << endl << "Numero por buscar: ";
                cin >> numbuscar;
                int* arr = new int[20];
               

                for (int i = 0; i < 20; i++) {
                    arr[i] = obtenerNumRandom();
                }
                cout << endl << "Arreglo generado y ordenado: " << endl;
                int* arrordenado = ordenarArray(arr);
                for (int i = 0; i < 20; i++){
                    cout << arrordenado[i] << " ";
                }
                
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

