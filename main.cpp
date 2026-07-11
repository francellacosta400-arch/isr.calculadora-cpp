#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sueldoMensual;
    double sueldoAnual;
    double isrAnual = 0;
    double isrMensual = 0;


    cout << "=== CALCULO DE ISR - DGII 2026 ===" << endl;
    cout << "Ingrese el sueldo mensual del empleado: RD$ ";
    cin >> sueldoMensual;

 
    sueldoAnual = sueldoMensual * 12;


    if (sueldoAnual <= 416220) {
        isrAnual = 0;
    } else if (sueldoAnual <= 624329) {
        isrAnual = (sueldoAnual - 416220) * 0.15;
    } else if (sueldoAnual <= 867123) {
        isrAnual = 31216 + (sueldoAnual - 624329) * 0.20;
    } else {
        isrAnual = 79776 + (sueldoAnual - 867123) * 0.25;
    }

    
    isrMensual = isrAnual / 12;

  
    cout << fixed << setprecision(2);
    cout << "\n--- RESULTADO ---" << endl;
    cout << "Sueldo mensual:      RD$ " << sueldoMensual << endl;
    cout << "Sueldo anual:        RD$ " << sueldoAnual << endl;

    if (isrMensual == 0) {
        cout << "Descuento ISR:       N/A (no aplica)" << endl;
    } else {
        cout << "Descuento ISR mensual: RD$ " << isrMensual << endl;
    }

    return 0;
}