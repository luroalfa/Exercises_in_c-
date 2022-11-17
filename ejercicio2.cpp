/*
    Author:
        Luis A. Rodríguez F.
    Date:
        Wednesday, November 16th, 2022.
    Last edit:
        Wednesday, November 16th, 2022.
    Description:
        Para que un estudiante apruebe un curso deben tomar en cuenta los siguientes criterios:
        Nota                    Ausencias                   Estado
        Menor a 60              -                           Reprobó
        -                       Mayor o igual a 2           Reprobó
        Mayor o igual a 70      Menor a 2                   Aprobó
        Entre 60 y 69           Menor a 2                   Aplazó

        Tomando en cuenta las condiciones anteriores escriba un programa en C++.
        Que se encargue de solicitar la nota y las ausencias de un estudiante y determine su Estado.
*/
// Libraries
#include <iostream>
using namespace std;

// Main function
int main()
{
    int grade, absences;
    cout << "Ingrese por favor la nota del estudiante.\n";
    cin >> grade;
    cout << "Ingrese por favor las ausencias del estudiante.\n";
    cin >> absences;
    system("cls"); // or command cls.
    if (grade < 60 || absences >= 2)
    {
        cout << "El estudiante ha reprobado el curso, ";
        (grade < 60) ? cout << "porque su nota es menor a 60." : cout << "porque tiene 2 o más ausencias.";
    }
    else if (grade >= 70 && absences < 2)
    {
        cout << "El estudiante ha aprobado el curso.";
    }
    else if (grade >= 60 && grade <= 69 && absences < 2)
    {
        cout << "El estudiante ha aplazado el curso.";
    }
    return 0;
}
/*
    If you are in the Windows operating system, please use in the line 31 the command cls.
*/