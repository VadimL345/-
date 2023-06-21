#include "Employee.h"
#include <iomanip>
#include <ctime>
#include <fstream>

void display_the_list_of_employees(const string& FILENAME, const string& str);

void employee_registration(Employee &employee);

int age_determination(char* birth_date);

void record_the_employee_in_the_file(const string& FILENAME, const Employee& person);
