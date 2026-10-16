// 2NLIDTS-FidelAlvarado-11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int sumaRecursiva(int n) {
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + n % 10;
}


int sumaIterativa(int n) {
    int suma = 0;
    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }
    return (suma + n);
}

int main() {
    int cantidad, numero;

    cout << "Cuantos numeros va a ingresar? ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "\nIngrese el numero " << (i + 1) << ": ";
        cin >> numero;

       
        if (numero < 0) numero = -numero;

        cout << "Resultado (Recursiva): " << sumaRecursiva(numero) << endl;
        cout << "Resultado (Iterativa): " << sumaIterativa(numero) << endl;
    }

    return 0;
}