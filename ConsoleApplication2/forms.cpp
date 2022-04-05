#include "forms.h"

void inputForm(student* stud){
    FILE* TestFile;

    fopen_s(&TestFile, "File.txt", "w");

    for (int i = 0; i < 2; i++) {
        cout << "¬вед≥ть id: ";
        cin >> stud[i].id;
        cout << "print name: ";
        cin >> stud[i].name;
        cout << "print surname: ";
        cin >> stud[i].surname;
        cout << "print D/R" << endl;
        cout << "cout date / month / year" << endl;
        cin >> stud[i].dr.day >> stud[i].dr.month >> stud[i].dr.year;
        cout << "print S/B: ";
        cin >> stud[i].sb;
    }

    fwrite(stud, sizeof(student), 2, TestFile);

    for (int i = 0; i < 2; i++) {
        cout << "id: " << stud[i].id << endl;
        cout << "name: " << stud[i].name << endl;
        cout << "surname: " << stud[i].surname << endl;
        cout << "D/R" << endl;
        cout << "cout date / month / year - " << stud[i].dr.day << "/" << stud[i].dr.month << "/" << stud[i].dr.year << endl;
        cout << "S/B: " << stud[i].sb << endl << endl;
    }

    fclose(TestFile);
}

void outputForm(student* stud) {
    FILE* TestFile;

    fopen_s(&TestFile, "File.txt", "r");
    fread(stud, sizeof(student), 2, TestFile);

    cout << "id | name | surname | date / month / year | S/B" << endl;

    for (int i = 0; i < 2; i++) {
        cout << setw(3) << stud[i].id << setw(5) << stud[i].name << setw(5) << stud[i].surname << setw(5) << stud[i].dr.day << "/" << stud[i].dr.month << "/" << stud[i].dr.year << setw(3) << stud[i].sb << endl;
    }

    cout << endl << "  Name  |  Surname  |  S/B " << endl;

    for (int i = 0; i < 2; i++) {
        if (stud[i].sb >= 7) {
            cout << setw(5) << stud[i].name << setw(10) << stud[i].surname << setw(8) << stud[i].sb << endl;
        }
    }

    fclose(TestFile);
}