#include "Functions.h"

int main() {
    const string EMPLOYEES_ALL = "employees_all.txt";
    const string EMPLOYEES_UNDER40 = "employees_under_40.txt";
    const string EMPLOYEES_OVER40 = "employees_over_40.txt";
    bool flag = true;
    while(flag) {
        while (flag) {
            Employee person;
            int age;
            employee_registration(person);
            age = age_determination(person.birth_date);
            if (age >= 20 && age <= 60) {
                record_the_employee_in_the_file(EMPLOYEES_ALL, person);
                if (age <= 40) {
                    record_the_employee_in_the_file(EMPLOYEES_UNDER40, person);
                } else
                    record_the_employee_in_the_file(EMPLOYEES_OVER40, person);
                cout << "Employee added successfully." << endl;
                cout << "Do you want to add another employee? (y/n) ";
                string answer;
                getline(cin, answer);
                if (answer != "y") {
                    flag = false;
                }
            } else
                cout << "Invalid age. Employee must be between 20 and 60 years old." << endl;
        }
        display_the_list_of_employees(EMPLOYEES_ALL, "all employees");
        display_the_list_of_employees(EMPLOYEES_UNDER40, "employees who are no more than 40 years old");
        display_the_list_of_employees(EMPLOYEES_OVER40, "employees who are over 40 years old");
        flag = true;
        cout << "Do you want to add another employee? (y/n) ";
        string answer2;
        getline(cin, answer2);
        if (answer2 != "y") {
            flag = false;
        }
    }
    return 0;
}