#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Introduce un numero entero positivo: ";
        cin >> n;
    } while (n < 0);

    double sum = 0.0;  
    int       i = 0;
    while (i <= n) {
        int fac = 1;
        int j = 1;
        
        while (j <= i) {
            fac = fac * j;
            j++;
        }

        sum = sum + (1.0 / fac);

        i = i + 1;
    }

    cout << "El resultado es: " << sum << endl;

    return 0;
}