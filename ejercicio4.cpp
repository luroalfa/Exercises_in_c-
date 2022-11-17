/*
    Author:
        Luis A. Rodríguez F.
    Date:
        Wednesday, November 16th, 2022.
    Last edit:
        Wednesday, November 16th, 2022.
    Description:
        Escriba un programa que solicite el tamaño de un archivo (valor y unidad de medida) y realice la conversión a las otras unidades.
        Trabaje sólo con KB, MB y GB.
*/
// Libraries
#include <iostream>
using namespace std;
// Main function
int main()
{
    double size;
    int uniM;
    const int unitStandard = 1024;
    bool msg = false;
    cout << "Ingrese el tamaño del archivo.\n";
    cin >> size;
    do
    {
        system("clear");
        msg &&cout << "Por favor escoja un número del menú.\n";
        cout << "Ingrese la unidad de medida.\n"
             << "1) KB\n"
             << "2) MB\n"
             << "3) GB\n";
        cin >> uniM;
        (uniM < 1 || uniM > 3) ? msg = true : msg = false;
    } while (uniM < 1 || uniM > 3);
    switch (uniM)
    {
    case 1:
        system("clear");
        cout << "La conversion de " << size << "KB a MB: " << size / unitStandard << "MB\n";
        cout << "La conversion de " << size << "KB a GB: " << (size / unitStandard) / unitStandard << "GB\n";
        break;
    case 2:
        system("clear");
        cout << "La conversion de " << size << "MB a KB: " << size * unitStandard << "KB\n";
        cout << "La conversion de " << size << "MB a GB: " << (size / unitStandard) << "GB\n";
        break;
    case 3:
        system("clear");
        cout << "La conversion de " << size << "GB a KB: " << (size * unitStandard) * unitStandard << "KB\n";
        cout << "La conversion de " << size << "GB a MB: " << (size * unitStandard) << "GB\n";
        break;
    }
    return 0;
}