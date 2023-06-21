#include "Functions.h"

void display_the_list_of_employees(const string& FILENAME, const string& str) {
    cout << "\t\t" << str << endl;
    ifstream inFile(FILENAME, ios::binary);
    if (!inFile) {
        cout << "Cannot open file" << endl;
    } else {
        Employee employee;
        cout << endl << left << setw(30) << "Full name" << setw(20) << "date of birth"  << setw(15) << "number" << setw(10) << "gender" << endl;
        while (inFile.read((char*) &employee, sizeof(Employee))) {
            cout << left << setw(30) << employee.name << setw(20) << employee.birth_date << setw(15) << employee.identification_number << setw(10) << employee.gender << endl;
        }
        cout << "______________________________________________________________________" << endl;
        inFile.close();
    }
}
void employee_registration(Employee& employee) {
    cout << "Enter employee name: ";
    cin.getline(employee.name, 49);
    cout << "Enter employee birth date (DD.MM.YYYY): ";
    cin.getline(employee.birth_date, 19);
    cout << "Enter employee identification number: ";
    cin.getline(employee.identification_number, 19);
    cout << "Enter employee gender (male/female): ";
    cin.getline(employee.gender, 19);
}
int age_determination(char* birth_date) {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int day = 0, month = 0, year = 0;
    string str(birth_date);
    size_t pos = str.find('.');
    if (pos != string::npos) {
        day = stoi(str.substr(0, pos));
        str = str.substr(pos + 1);
    }
    pos = str.find('.');
    if (pos != string::npos) {
        month = stoi(str.substr(0, pos));
        str = str.substr(pos + 1);
    }
    year = stoi(str);
    int age = ltm->tm_year + 1900 - year;
    if (ltm->tm_mon < month - 1 || (ltm->tm_mon == month - 1 && ltm->tm_mday < day)) {
        age--;
    }
    return age;
}

void record_the_employee_in_the_file(const string& FILENAME, const Employee& person) {
    ofstream outFile(FILENAME, ios::binary | ios::app);
    if(!outFile)
        cout << "Cannot open file";
    else {
        outFile.write((char *) &person, sizeof(Employee));
        outFile.close();
    }
}
