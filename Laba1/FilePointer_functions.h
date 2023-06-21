#include <cstring>
#include <cstdlib>
#include <iostream>

using namespace std;

        //введення записів
char* C_input_record();

        //створення початкового файлу
void C_create_file(const char* FILENAME);

        //створенння нового файлу
void C_create_new_file(const char* OLDFILENAME, const char* NEWFILENAME);

        //видалення у кожному рядку  тексту, розміщеного в дужках, і самих дужок
void C_delete_words(const char* FILENAME);

        //знахаодження найдовшошо слова, та переставлення його символів у зворотному порядку
void C_longest_word(const char* FILENAME);

        //виведення вмісту файлу
void C_Output_File(const char* FILENAME);

        //дозаписування у файл
bool C_Add_to_File(const char* FILENAME, const char* NEW_FILENAME);
