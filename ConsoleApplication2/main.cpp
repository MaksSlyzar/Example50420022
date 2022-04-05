#include "main.h";
#include "forms.h";

int main()
{
    setlocale(LC_ALL, ".1251");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    student stud[2];

    int k;
    cin >> k;


    switch (k) {
    case 0:
        inputForm(stud);
        break;

    case 1:
        outputForm(stud);
        break;

    default:
        cout << "Undefined prop" << endl;
        break;
    }


    return 0;
}