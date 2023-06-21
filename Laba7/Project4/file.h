#pragma once
#include <iostream>
#include <fstream>
#include <vcclr.h>
using namespace std;

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

ref struct Employee {
	String^ name;
	String^ position;
	String^ gender;
	Int32 age;
};

ref class file {
	String^ filename;
	Int32 size;
public:
	file(String^ filename);
	void SaveToFile(Employee^ employee);
	void ReadFile(cli::array<Employee^>^ arr);
	void DisplayFile(RichTextBox^ box);
	void SetSize();
	Int32 GetSize();
};
