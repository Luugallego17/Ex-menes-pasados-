#include <iostream>
#include <string>
using namespace std;

int main (){
    
    int visitas[10];
    string tipoTorta[4];
    int caloriaTotal, visitaActual, i;
    
    caloriaTotal = 0;
    visitaActual = 0;
    
    tipoTorta[1] = "CH";
    tipoTorta[2] = "VA";
    tipoTorta[3] = "FR";
    tipoTorta[0] = "--";
    
    cout << "Ingrese los tipos de visita (0 a 3) separados por espacios: ";
    
    while (visitaActual < 10 && caloriaTotal < 1000){
        int entrada;
        cin >> entrada;

    if (entrada == 0){
        cout << "Sin pastel :( \n";
    }    
    if (entrada < 0 || entrada > 3){
        cout << "Entrada no válida. Ingrese un número entre 0 y 3: ";
    } else {
        visitas[visitaActual] = entrada;
        visitaActual = visitaActual + 1;
    
    switch (entrada) {
        case 1:
        caloriaTotal = caloriaTotal + 100;
        break;
        case 2:
        caloriaTotal = caloriaTotal + 80;
        break; 
        case 3: 
        caloriaTotal = caloriaTotal + 120;
        break;
    }
    if (caloriaTotal >= 1000){
        cout << "¡Te pasaste de calorías!";
        break;
    }}
    }
    cout << "";
    cout << "Resultado de las visitas: " << endl;
    
    for (i = 0; i < visitaActual; i++){
        if (i % 5 == 0 && i != 0){
            cout << "";
        }
        cout << (i+1) << tipoTorta[visitas[i]] << " ";
    }
    
    if ((visitaActual % 5) != 0) {
    int repeticiones = 5 - (visitaActual % 5);  
    for (int j = 1; j <= repeticiones; j++) {
        cout << (visitaActual + j) << "-- ";
    }}
    
    cout << "" << endl;
    cout << "Calorías totales: " << caloriaTotal;
    return 0;
}