#include "FileStream_functions.h"
#include "FilePointer_functions.h"

int main(int argc, char* argv[]) {
    bool flag = true;
    if(strcmp(argv[2], "FileStream") == 0 && argc == 3) {
        const string BEGIN_FILE = "begin_file.txt";
        const string NEW_FILE = "new_file.txt";
        create_file(BEGIN_FILE);
        while (flag) {
            create_new_file(BEGIN_FILE, NEW_FILE);
            delete_words(NEW_FILE);
            longest_word(NEW_FILE);
            cout << "________________________________New file________________" << endl << Read_File(NEW_FILE) << endl
                 << "________________________________________________________";
            flag = Add_to_File(BEGIN_FILE);

        }
    }
    if(strcmp(argv[2], "FilePointer") == 0 && argc == 3) {
        const char *C_BEGIN_FILE = "C_begin_file.txt";
        const char *C_NEW_FILE = "C_new_file.txt";
        C_create_file(C_BEGIN_FILE);
        while (flag) {
            C_create_new_file(C_BEGIN_FILE, C_NEW_FILE);
            C_delete_words(C_NEW_FILE);
            C_longest_word(C_NEW_FILE);
            C_Output_File(C_NEW_FILE);
            flag = C_Add_to_File(C_BEGIN_FILE, C_NEW_FILE);
        }
    }
    return 0;
}
