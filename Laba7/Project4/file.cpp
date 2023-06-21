#include "file.h"


file::file(String^ filename) : filename(filename) { SetSize(); };
void file::SaveToFile(Employee^ employee) {
	size++;
	FileStream^ fileStream = gcnew FileStream(filename, FileMode::Open);
	fileStream->Seek(0, SeekOrigin::End);
	BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);
	binaryWriter->Write(employee->name);
	binaryWriter->Write(employee->position);
	binaryWriter->Write(employee->gender);
	binaryWriter->Write(employee->age);
	binaryWriter->Close();
	fileStream->Close();
}
void file::ReadFile(cli::array<Employee^>^ arr) {
	FileStream^ fileStream = gcnew FileStream(filename, FileMode::Open);
	BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);
	fileStream->Seek(0, SeekOrigin::Begin);
	for (int i = 0; i < size; i++) {
		arr[i]->name = binaryReader->ReadString();
		arr[i]->position = binaryReader->ReadString();
		arr[i]->gender = binaryReader->ReadString();
		arr[i]->age = binaryReader->ReadInt32();
	}

	binaryReader->Close();
	fileStream->Close();
}
void file::DisplayFile(RichTextBox^ box) {
		cli::array<Employee^>^ Arr = gcnew cli::array<Employee^>(size);
		for (int i = 0; i < size; i++)
			Arr[i] = gcnew Employee;
		ReadFile(Arr);
		box->Text = "";
		for (int i = 0; i < size; i++)
			box->Text += "ПІБ: " + Arr[i]->name + "\n" + "Посада: " + Arr[i]->position + "\n" + "Стать: " + Arr[i]->gender + "\n" + "Вік: " + Convert::ToString(Arr[i]->age) + "\n\n";
	}
void file::SetSize() {
	FileStream^ fileStream = gcnew FileStream(filename, FileMode::Open);
	BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);
	fileStream->Seek(0, SeekOrigin::Begin);
	Employee^ employee = gcnew Employee;
	int count = 0;
	if (fileStream->Length == 0)
		size = 0;
	else
		while (binaryReader->PeekChar() != -1) {
			employee->name = binaryReader->ReadString();
			employee->position = binaryReader->ReadString();
			employee->gender = binaryReader->ReadString();
			employee->age = binaryReader->ReadInt32();
			count++;
		}
	size = count;
	binaryReader->Close();
	fileStream->Close();
}
Int32 file::GetSize() {
	return size;
}
