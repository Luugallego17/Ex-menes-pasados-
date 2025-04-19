#include <iostream>
using namespace std;

int main() {
    
    double in1 = 100.0;
    double in2 = 100.0;
    int anio = 0;

    while (in2 <= in1) {
        anio++;
        
        in1 += 10.0;       
        in2 *= 1.05;    
        
       cout << "Anio " << anio << "   interes de Daphne = " << in1 << "  interes de Cleo = " << in2 << endl;
    }

    return 0;
}
