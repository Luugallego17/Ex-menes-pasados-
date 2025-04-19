#include <iostream>
using namespace std;

int main() {
    int num;
    int cant = 0;
    int suma_t = 0;
    int suma_p = 0;
    int suma_n = 0;
    double prom =0;

    cout << "ingrese numeros al azar, ingrese el cero cuando desee parar" << endl;

    do {
        cout << "Numero " << (cant + 1) << ": ";
        cin >> num;

        if (num != 0) {
            cant++;
            suma_t += num;

            if (num > 0) {
                suma_p += num;
            } else {
                suma_n += num;
            }
        }
    } while (num != 0);
    
       if (cant > 0) {
           
        prom = (double)suma_t / cant;
       }   
    cout << "==========================================" << endl;
    cout << "Numeros ingresados: " << cant << endl;
    cout << "Suma total: " << suma_t << endl;
    cout << "Promedio aritmetico: " << prom << endl;
    cout << "Suma de los negativos: " << suma_n << endl;
    cout << "Suma de los positivos: " << suma_p << endl;

    return 0;
}