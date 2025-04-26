#include <iostream>
using namespace std;

int main (){
    
    int horaInicio, cantidadHoras, i, horaActual;
    int totalConsumo = 0, contador3watts = 0, contador5watts = 0, consumo = 0;
    
    cout << "ingrese la hora de inicio (entre 0 y 23): ";
    cin >> horaInicio;
    
    while (horaInicio < 0 || horaInicio > 23){
        cout << "La hora de inicio debe estar entre 0 y 23" << endl;
        cout << "Ingrese una hora de inicio valida: ";
        cin >> horaInicio;
    }
    
    cout << "Ingrese la cantidad de horas de uso: ";
    cin >> cantidadHoras;
    
    while (cantidadHoras <= 0){
        cout << "La hora de inicio debe ser mayor a 0" << endl;
        cout << "Ingrese una cantidad de horas de uso valida: ";
        cin >> cantidadHoras;
    }
    
    horaActual = horaInicio;
    
     for (i = 1; i <= cantidadHoras; i++) {
        if ((horaActual >= 0 && horaActual < 6) || (horaActual >= 18 && horaActual < 24)) {
            consumo = 3;
            contador3watts++;
        } else {
            consumo = 5;
            contador5watts++;
        }

        totalConsumo += consumo; 

        horaActual++;

        if (horaActual == 24) {
            horaActual = 0;
        }
    }
    
    cout << "Has usado el sistema de iluminacion por: " << endl;
    
    if ( contador3watts > 0){
        cout << contador3watts << " hora(s) con la tarifa de 3 watt(s)" << endl;
    } 
    
    if (contador5watts > 0){
        cout << contador5watts << " hora(s) con la tarifa de 5 watt(s)" << endl;
    }
    
    cout << "El consumo total es de " << totalConsumo << " watt(s)." << endl;
    
    return 0;
}