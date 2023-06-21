#include "FileStream_functions.h"
using namespace std;
string input_record(){
    string InputString, input_strings;
    cout << "Enter text:" << endl << endl;
    while(getline(cin,InputString) && !InputString.empty())
        input_strings += InputString + '\n';
    return input_strings;
}
void write_to_a_file(const string& FILENAME, string& text) {
    ofstream outFile(FILENAME);
    if (!outFile)
        cout << "Cannot open file";
    else {
        outFile << text;
        outFile.close();
    }
}
string Read_File (const string& FILENAME) {
    string text;
    ifstream infile(FILENAME);
    if (!infile)
        cout << "Cannot open file";
    else {
        while (!infile.eof()) {
            getline(infile,text, '\0');
        }
        infile.close();
    }
    return text;
}
void create_file(const string& FILENAME) {
    string text = input_record();
    write_to_a_file(FILENAME, text);
}
void create_new_file (const string& OLD_FILENAME, const string& NEW_FILENAME) {
    string sentence, empty_string, text_to_string, text_file, str;
    ifstream infile(OLD_FILENAME);
    if(!infile)
        cout << "Cannot open file";
    else {
        while (!infile.eof()) {
            str = "";
            getline(infile, str);
            text_to_string += str + ' ';
        }
        infile.close();
        write_to_a_file(NEW_FILENAME, text_to_string);
        ifstream inFile("new_file.txt");
        if (!inFile)
            cout << "Cannot open file";
        else {
            while (!inFile.eof()) {
                sentence = "";
                getline(inFile, sentence, '.');
                getline(inFile, empty_string,' ');
                if(!inFile.eof())
                    text_file += sentence + '.' + '\n';
            }
        }
        write_to_a_file(NEW_FILENAME, text_file);
    }
}
void delete_words(const string& FILENAME) {
    string text_file = Read_File(FILENAME);
    size_t pos1 = text_file.find('(');
    size_t pos2 = text_file.find(')');
    if(text_file.find('.', pos2) == pos2 + 1 || text_file.find(',', pos2) == pos2 + 1) {
        pos1 -= 1;
        pos2 -= 1;
    }
    if(text_file.find('.', pos1 - 2) == pos1 - 1)
        pos1 -= 1;
    while(pos1 != string::npos && pos2 != string::npos) {
        text_file.erase(pos1, pos2 + 2 - pos1);
        pos1 = text_file.find('(');
        pos2 = text_file.find(')');
        if (text_file.find('.', pos2) == pos2 + 1 || text_file.find(',', pos2) == pos2 + 1) {
            pos1 -= 1;
            pos2 -= 1;
        }
        if (text_file.find('.',pos1 - 1) == pos1 - 1)
            pos1 -= 1;
    }
    write_to_a_file(FILENAME, text_file);
}
void longest_word(const string& FILENAME) {
    string inputString;
    ifstream inFile(FILENAME);
    if (!inFile)
        cout << "Cannot open file";
    else {

        while (getline(inFile, inputString)) {
            string reversed_word = "";
            string longestWord = " ";
            int startPos = 0;
            int position;
            for (int i = 0; i < inputString.length(); i++) {
                if (inputString[i] == ' ' || inputString[i] == ',' || inputString[i] == '.') {
                    int wordLength = i - startPos + 1;
                    string currentWord = inputString.substr(startPos, wordLength - 1);
                    if (currentWord.length() > longestWord.length()) {
                        longestWord = currentWord;
                        position = startPos;
                    }
                    startPos = i + 1;
                }
            }
            for (int i = longestWord.length() - 1; i >= 0; i--) {
                reversed_word += longestWord[i];
            }
            inputString.replace(position,reversed_word.length(), reversed_word);
            ofstream outFile("temp_file", ios::app);
            if (!outFile)
                cout << "Cannot open file";
            else {
                outFile << inputString << '\n';
                outFile.close();
            }

        }
        inFile.close();
        remove(FILENAME.c_str());
        rename("temp_file",FILENAME.c_str());
    }
}
bool Add_to_File(const string& FILENAME) {
    char choice;
    bool flag = false;
    cout << endl << "Do you want to add text (y/n):";
    cin >> choice;
    cin.ignore();
    if(choice == 'y') {
        string text;
        text = input_record();
        ofstream outFile(FILENAME, ios::app);
        if (!outFile)
            cout << "Cannot open file";
        else {
            outFile << text;
            outFile.close();
        }
        flag = true;
    }
    return flag;
}