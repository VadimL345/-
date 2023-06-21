#include "FilePointer_functions.h"
char* C_input_record() {
    char *str;
    str = (char*)malloc(sizeof(char)*257);
    cin.getline(str, 256);
    strcat(str, "\n");
    return str;
}
void C_create_file(const char* FILENAME) {
    FILE *file_pointer = fopen(FILENAME, "a");
    if(file_pointer == nullptr)
        cout << "Cannot open file";
    else {
        cout << "Enter text:" << endl << endl;
        bool flag = true;
        do {
            char *line = C_input_record();
            if (strcmp(line, "\n") != 0)
                fputs(line, file_pointer);
            else
                flag = false;
        } while (flag);
        fclose(file_pointer);
    }
}
void C_create_new_file(const char* OLDFILENAME,const char* NEWFILENAME) {
    FILE *input_file, *output_file;
    const int BUFFER_SIZE = 257;
    char buffer[BUFFER_SIZE];
    input_file = fopen(OLDFILENAME, "r");
    if (input_file == nullptr) {
        cout << "Cannot open file";
    } else {
        output_file = fopen(NEWFILENAME, "a");
        if (output_file == nullptr) {
            cout << "Cannot open file";
        } else {
            while (fgets(buffer, BUFFER_SIZE, input_file)) {
                for (int i = 1; buffer[i] != '\0'; i++) {
                    if (buffer[i + 1] == '\n')
                        buffer[i + 1] = ' ';
                    if (buffer[i - 1] == '.')
                        buffer[i] = '\n';
                }
                fprintf(output_file, "%s", buffer);
            }
            fclose(input_file);
            fclose(output_file);
        }
    }
}
void C_delete_words(const char* FILENAME) {
    FILE *input_file, *output_file;
    const int BUFFER_SIZE = 257;
    char buffer[BUFFER_SIZE];
    input_file = fopen(FILENAME, "r");
    if (input_file == nullptr) {
        cout << "Cannot open file";
    } else {
        output_file = fopen("temp_file","a");
        if (output_file == nullptr) {
            cout << "Cannot open file";
        } else {
            while (fgets(buffer, BUFFER_SIZE, input_file)) {
                int pos1, pos2;
                for (int i = 0; buffer[i] != '\0'; i++) {
                    if (buffer[i] == '(')
                        pos1 = i;
                    if (buffer[i] == ')') {
                        pos2 = i;
                        for (int j = pos2 + 2; buffer[j] != '\0'; j++) {
                            buffer[pos1++] = buffer[j];
                            buffer[pos1] = '\0';
                        }
                    }
                }
                fputs(buffer, output_file);
            }
            fclose(input_file);
            fclose(output_file);
            remove(FILENAME);
            rename("temp_file", FILENAME);
        }
    }
}
void C_longest_word(const char* FILENAME) {
    FILE *input_file, *output_file;
    const int BUFFER_SIZE = 257;
    char buffer[BUFFER_SIZE];
    input_file = fopen(FILENAME, "r");
    if (input_file == nullptr) {
        cout << "Cannot open file";
    } else {
        output_file = fopen("temp_file", "a");
        if (output_file == nullptr) {
            cout << "Cannot open file";
        } else {
            while (fgets(buffer, BUFFER_SIZE, input_file)) {
                int length = 0;
                int pos1 = -1, pos2, position_word;
                char longest_word[100];
                for (int i = 0; buffer[i] != '\0'; i++)
                    if (buffer[i] == ' ' || buffer[i] == '.' || buffer[i] == ',') {
                        pos2 = i;
                        if (pos2 - pos1 - 1 > length) {
                            length = pos2 - pos1 - 1;
                            position_word = pos1 + 1;
                            for (int j = 0; j < length; j++)
                                longest_word[j] = buffer[++pos1];
                        }
                        pos1 = pos2;
                    }
                for (int i = length - 1; i >= 0; i--) {
                    buffer[position_word++] = longest_word[i];
                }
                fputs(buffer, output_file);
            }
        }
        fclose(input_file);
        fclose(output_file);
        remove(FILENAME);
        rename("temp_file", FILENAME);
    }
}
void C_Output_File(const char* FILENAME) {
    FILE *input_file;
    const int BUFFER_SIZE = 257;
    char buffer[BUFFER_SIZE];
    input_file = fopen(FILENAME, "r");
    if (input_file == nullptr) {
        cout << "Cannot open file";
    } else {
        cout << "________________________________New file____________" << endl;
        while(fgets(buffer, BUFFER_SIZE, input_file))
            cout << buffer;
        fclose(input_file);
        cout << "___________________________________________________";
    }

}
bool C_Add_to_File(const char* FILENAME, const char* NEW_FILENAME) {
    bool flag = false;
    char choice;
    cout << endl << "Do you want to add text (y/n):";
    cin >> choice;
    cin.ignore();
    if (choice == 'y') {
        flag = true;
        remove(NEW_FILENAME);
        C_create_file(FILENAME);
    }
    return flag;
}