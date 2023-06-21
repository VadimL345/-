#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

        //введення записів
string input_record();

        //записування тексту у файл
void write_to_a_file(const string& FILENAME, string& text);

        //зчитування даних з файлу
string Read_File (const string& FILENAME);

        //створення початкового файлу
void create_file(const string& FILENAME);

        //створення нового файлу
void create_new_file (const string& OLD_FILENAME, const string& NEW_FILENAME);

        //видалення у кожному рядку  тексту, розміщеного в дужках, і самих дужок
void delete_words(const string& FILENAME);

        //знахаодження найдовшошо слова, та переставлення його символів у зворотному порядку
void longest_word(const string& FILENAME);

        //дозаписування у файл
bool Add_to_File(const string& FILENAME);