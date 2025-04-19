#include <iostream>
using namespace std;

int main() {
    
    double x;
    int n;

    cout << "ingrese dos numeros: ";
    cin >> x >> n;

    double result = 0;
    double sig = 1;

    for (int i = 0; i < n; ++i) {
        int expo = 2 * i + 1;

        double pot = 1;
        for (int j = 1; j <= expo; ++j) {
            pot *= x;
        }

        double fac = 1;
        for (int j = 1; j <= expo; ++j) {
            fac *= j;
        }

        result += sig * (pot / fac);
        sig *= -1;
    }

    cout << "El resultado es: " << result << endl;

    return 0;
}
