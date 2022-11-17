/*
    Author:
        Luis A. Rodríguez F.
    Date:
        Wednesday, November 16th, 2022.
    Last edit:
        Wednesday, November 16th, 2022.
    Description:
        Cálculo de Planilla intermedia para un empleado.
*/
// Libraries
#include <iostream>
using namespace std;
// Main function
int main()
{
    string name, apellido;
    double salary, amtExtras, amtDobles, hrOrdinaria,
        hrExtra, hrDoble, grossSalary, CCSS, IVM, BP, kmHomeToWork,
        anualidad, incentivoDistanciaHTW, incentivoHrExtra, incentivoHrDoble, salaryExceso, timeWorked, hrExtrasDobles;
    int yearsWorked;
    const int incentivoYears = 5, amtAnnual = 2000, distanciaLaboral = 10, incentivoHrExtras = 10,
              incentivoHrDobles = 10;
    cout << "Ingrese el nombre del empleado.";
    cin >> name;
    cout << "Ingrese el apellido del empleado.";
    cin >> apellido;
    cout << "Ingrese los años laborados.";
    cin >> yearsWorked;
    cout << "Ingrese la distancia de su casa a la empresa en kilometros.";
    cin >> kmHomeToWork;
    cout << "Ingrese el salario base mensual.";
    cin >> salary;
    cout << "Ingrese la cantidad de horas extras trabajadas.";
    cin >> amtExtras;
    cout << "Ingrese la cantidad de horas dobles trabajadas.";
    cin >> amtDobles;
    (yearsWorked > incentivoYears) ? anualidad = amtAnnual *yearsWorked : anualidad = 0;
    (kmHomeToWork > distanciaLaboral) ? incentivoDistanciaHTW = 50000 : incentivoDistanciaHTW = 0;
    (amtExtras > incentivoHrExtras) ? incentivoHrExtra = 15000 : incentivoHrExtra = 0;
    (amtDobles > incentivoHrDobles) ? incentivoHrDoble = 5000 *amtDobles : incentivoHrDoble = 0;
    hrOrdinaria = salary / 192;
    hrExtra = hrOrdinaria * 1.5;
    hrDoble = hrOrdinaria * 2;
    grossSalary = salary + (hrExtra * amtExtras) + (hrDoble * amtDobles) + anualidad + incentivoDistanciaHTW + incentivoHrExtra + incentivoHrDoble;
    CCSS = grossSalary * .0925;
    IVM = grossSalary * .0525;
    BP = grossSalary * .005;
    (grossSalary > 500000) ? salaryExceso = (grossSalary - 500000) * .1 : salaryExceso = 0;
    (yearsWorked < 10) ? timeWorked = grossSalary * .03 : timeWorked = 0;
    (amtExtras == 0 && amtDobles == 0) ? hrExtrasDobles = 1000 : hrExtrasDobles = 0;
    system("cls"); // or command cls.
    cout
        << "DETALLES DE LA BOLETA DE PAGO.\n"
        << "Precio de hora ordinaria:\t\t₡"
        << hrOrdinaria << "\n"
        << "Precio de hora extra:    \t\t₡"
        << hrExtra << "\n"
        << "Precio de hora doble:    \t\t₡"
        << hrDoble << "\n\n"
        << "Remuneraciones\n"
        << "--------------\n"
        << "Colaborador:             \t\t" << name << " " << apellido << "\n"
        << "Horas trabajadas\n"
        << "192                      \t\t₡" << salary << "\n"
        << "Horas extra trabajadas\n"
        << amtExtras << "                        \t\t₡" << amtExtras * hrExtra << "\n"
        << "Horas dobles trabajadas\n"
        << amtDobles << "                        \t\t₡" << amtDobles * hrDoble << "\n"
        << "Incentivos\n"
        << "----------\n"
        << "Anualidad\n"
        << yearsWorked << "                        \t\t₡" << anualidad << "\n"
        << "Comision de traslado \n"
        << kmHomeToWork << "                        \t\t₡" << incentivoDistanciaHTW << "\n"
        << "Incentivo por horas extra \n"
        << amtExtras << "                        \t\t₡" << incentivoHrExtra << "\n"
        << "Incentivo por horas dobles \n"
        << amtDobles << "                        \t\t₡" << incentivoHrDoble << "\n"
        << "\nSALARIO BRUTO:           \t\t₡" << grossSalary
        << "\n\nRetenciones\n"
        << "-----------\n"
        << "C.C.S.S:                  \t\t₡" << CCSS << "\n"
        << "IVM:                      \t\t₡" << IVM << "\n"
        << "Banco Popular:            \t\t₡" << BP << "\n"
        << "Inpuesto de renta:        \t\t₡" << salaryExceso << "\n"
        << "Capitalización:           \t\t₡" << timeWorked << "\n"
        << "Falta de compromiso:      \t\t₡" << hrExtrasDobles << "\n"
        << "\nTOTAL DE DEDUCCIONES:   \t\t₡" << (CCSS + IVM + BP + salaryExceso + timeWorked + hrExtrasDobles) << "\n"
        << "\nSALARIO NETO:            \t\t₡" << grossSalary - CCSS - IVM - BP - salaryExceso - timeWorked - hrExtrasDobles << "\n";
    return 0;
}
/*
Note:
    If you are in the Windows operating system, please use in the line 52 the command cls.
*/