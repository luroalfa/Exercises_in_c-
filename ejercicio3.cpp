/*
    Author:
        Luis A. Rodríguez F.
    Date:
        Wednesday, November 16th, 2022.
    Last edit:
        Wednesday, November 16th, 2022.
    Description:
        Escriba un programa que solicite la medida del radio de un círculo y calcule el área y el perímetro,
        los resultados se deben mostrar con dos decimales (investigue como mostrar números con n cantidad de decimales).
*/
// Libraries
#include <iostream>
#include <math.h>
using namespace std;

// Main function
int main()
{
    double radius, area, perimeter;
    cout << "Ingrese el radio del circulo.\n";
    cin >> radius;
    // Mathematical calculation for area is: π * r² and perimeter is: 2*π*r
    area = M_PI * pow(radius, 2);
    perimeter = 2 * M_PI * radius;
    printf("%s%.2f%s", "El valor del área del circulo es: ", area, "cm²\n");
    printf("%s%.2f%s", "El valor del perimetro del circulo es: ", perimeter, "cm\n");
    return 0;
}