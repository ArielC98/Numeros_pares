#include <iostream>
using namespace std;


int main(){

    int tam , k, n = 0;
    cout << "Ingrese el tamaño del arreglo:" << endl;
    cin >> tam;
    int arr[tam], pares[100];

    for (int i = 0; i < tam; i++){

        cout << "Ingrese el valor del elemento arr[" << i << "]" << endl;
        cin >> arr[i]; 

    }

    for (k = 0; k < tam; k++){

        if(arr[k] % 2 == 0){

            pares[n] = arr[k];
            n++;
        }
        
    }

    cout << "Los numeros pares del arreglo pares[] son:" << endl;

    for (int j=0 ; j<n ; j++){

        cout << "pares[" << j << "] = " << pares[j] << endl;

    }
    

    return 0;
}
//fin