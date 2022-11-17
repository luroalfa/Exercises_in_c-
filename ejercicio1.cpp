/*
    Author:
        Luis A. Rodríguez F.
    Date:
        Wednesday, November 16th, 2022.
    Last edit:
        Wednesday, November 16th, 2022.
    Description:
        Escriba un programa que genere la siguiente salida (utilice manipuladores de entrada/salida) (Ejemplo: \n, \t, otros).
        Puede solicitar los datos al usuario, o puede hacer que el programa genere los códigos de los estudiantes y sus promedios.
*/
// Libraries
#include <iostream>
#include <vector>
using namespace std;
// Main function
int main()
{
    vector<int> students(0);
    vector<double> average(0);
    double n1, n2, n3;
    srand(time(NULL)); // This function start the random number generator used by the function rand() in line 25.
    for (int i = 0; i < 5; i++)
    {
        // Method >> rand() >> Returns a pseudo-random number in the range of 0 to RAND_MAX.
        n1 = 1 + rand() % (101 - 1);
        n2 = 1 + rand() % (101 - 1);
        n3 = 1 + rand() % (101 - 1);
        students.push_back(i + 1);
        average.push_back((n1 + n2 + n3) / 3);
    }
    cout << "\nESTUDIANTES\tPROMEDIO DEL CURSO\n";
    cout << "___________\t__________________\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "     " << students[i] << "\t\t\t";
        printf("%.2f %s\n", average[i], "%"); // Printf function used for print 2 decimal
    }
    return 0;
}

/*
NOTE:
    What is the difference between cout and printf?
    The function cout is used for c++
    The function printf is used for c, although it can also be used in c++
*/