#include "DoublyLinkedList.cpp"

int main() {
    std:: cout << "(Типи даних: int; double; char; string)" << std::endl;
    std::cout << "Введіть тип даних для списку: ";
    std::string dataType;
    std::cin >> dataType;
    if(dataType == "int") {
        int choice, value, position;
        DoublyLinkedList<int> list;
        DoublyLinkedList<int>::Iterator iterator;
        do {
            std::cout << "1. Визначити розмір списку\n";
            std::cout << "2. Пошук елемента із заданим значенням\n";
            std::cout << "3. Визначити позицію у списку елемента із заданим значенням\n";
            std::cout << "4. Включити новий елемент в позицію із заданим номером\n";
            std::cout << "5. Додати елемент в кінець списку\n";
            std::cout << "0. Вийти\n";
            std::cout << "Введіть свій вибір: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    std::cout << "Розмір списку: " << list.getSize() << "\n";
                    break;
                case 2:
                    std::cout << "Введіть значення для пошуку: ";
                    std::cin >> value;
                    if (list.search(value)) {
                        std::cout << "Елемент знайдено\n";
                    } else {
                        std::cout << "Елемент не знайдено\n";
                    }
                    break;
                case 3:
                    std::cout << "Введіть значення для визначення позиції: ";
                    std::cin >> value;
                    position = list.getPosition(value);
                    if (position != -1) {
                        std::cout << "Позиція елемента зі значенням " << value << ": " << position << "\n";
                    } else {
                        std::cout << "Елемент не знайдено\n";
                    }
                    break;
                case 4:
                    std::cout << "Введіть значення для вставки: ";
                    std::cin >> value;
                    std::cout << "Введіть позицію: ";
                    std::cin >> position;
                    try {
                        iterator.setToBegin(list);
                        for (int i = 0; i < abs(position); i++) {
                            if (position >= 0)
                                iterator.moveToNext();
                            else
                                iterator.moveToPrevious();
                        }
                        list.insertAtPosition(value, iterator, position);
                        std::cout << "Значення вставлено на позицію " << position << "\n";
                    } catch (const std::out_of_range &e) {
                        std::cout << e.what() << "\n";
                    }
                    break;
                case 5:
                    std::cout << "Введіть значення для додавання в кінець списку: ";
                    std::cin >> value;
                    list.addToEnd(value);
                    std::cout << "Значення додано в кінець списку\n";
                    break;
                case 0:
                    std::cout << "Вихід...\n";
                    break;
                default:
                    std::cout << "Неправильний вибір\n";
                    break;
            }

            list.displayList();

            std::cout << "\n";
        } while (choice != 0);
    }
    if(dataType == "double") {
        int choice, position;
        double value;
        DoublyLinkedList<double> list;
        DoublyLinkedList<double>::Iterator iterator;
        do {
            std::cout << "1. Визначити розмір списку\n";
            std::cout << "2. Пошук елемента із заданим значенням\n";
            std::cout << "3. Визначити позицію у списку елемента із заданим значенням\n";
            std::cout << "4. Включити новий елемент в позицію із заданим номером\n";
            std::cout << "5. Додати елемент в кінець списку\n";
            std::cout << "0. Вийти\n";
            std::cout << "Введіть свій вибір: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    std::cout << "Розмір списку: " << list.getSize() << "\n";
                    break;
                case 2:
                    std::cout << "Введіть значення для пошуку: ";
                    std::cin >> value;
                    if (list.search(value)) {
                        std::cout << "Елемент знайдено\n";
                    } else {
                        std::cout << "Елемент не знайдено\n";
                    }
                    break;
                case 3:
                    std::cout << "Введіть значення для визначення позиції: ";
                    std::cin >> value;
                    position = list.getPosition(value);
                    if (position != -1) {
                        std::cout << "Позиція елемента зі значенням " << value << ": " << position << "\n";
                    } else {
                        std::cout << "Елемент не знайдено\n";
                    }
                    break;
                case 4:
                    std::cout << "Введіть значення для вставки: ";
                    std::cin >> value;
                    std::cout << "Введіть позицію: ";
                    std::cin >> position;
                    try {
                        iterator.setToBegin(list);
                        for (int i = 0; i < abs(position); i++) {
                            if (position >= 0)
                                iterator.moveToNext();
                            else
                                iterator.moveToPrevious();
                        }
                        list.insertAtPosition(value, iterator, position);
                        std::cout << "Значення вставлено на позицію " << position << "\n";
                    } catch (const std::out_of_range &e) {
                        std::cout << e.what() << "\n";
                    }
                    break;
                case 5:
                    std::cout << "Введіть значення для додавання в кінець списку: ";
                    std::cin >> value;
                    list.addToEnd(value);
                    std::cout << "Значення додано в кінець списку\n";
                    break;
                case 0:
                    std::cout << "Вихід...\n";
                    break;
                default:
                    std::cout << "Неправильний вибір\n";
                    break;
            }

            list.displayList();

            std::cout << "\n";
        } while (choice != 0);
    }
    if(dataType == "char") {
        int choice, position;
        char value;
        DoublyLinkedList<char> list;
        DoublyLinkedList<char>::Iterator iterator;
        do {
            std::cout << "1. Визначити розмір списку\n";
            std::cout << "2. Пошук елемента із заданим значенням\n";
            std::cout << "3. Визначити позицію у списку елемента із заданим значенням\n";
            std::cout << "4. Включити новий елемент в позицію із заданим номером\n";
            std::cout << "5. Додати елемент в кінець списку\n";
            std::cout << "0. Вийти\n";
            std::cout << "Введіть свій вибір: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    std::cout << "Розмір списку: " << list.getSize() << "\n";
                    break;
                case 2:
                    std::cout << "Введіть значення для пошуку: ";
                    std::cin >> value;
                    if (list.search(value)) {
                        std::cout << "Елемент знайдено\n";
                    } else {
                        std::cout << "Елемент не знайдено\n";
                    }
                    break;
                case 3:
                    std::cout << "Введіть значення для визначення позиції: ";
                    std::cin >> value;
                    position = list.getPosition(value);
                    if (position != -1) {
                        std::cout << "Позиція елемента зі значенням " << value << ": " << position << "\n";
                    } else {
                        std::cout << "Елемент не знайдено\n";
                    }
                    break;
                case 4:
                    std::cout << "Введіть значення для вставки: ";
                    std::cin >> value;
                    std::cout << "Введіть позицію: ";
                    std::cin >> position;
                    try {
                        iterator.setToBegin(list);
                        for (int i = 0; i < abs(position); i++) {
                            if (position >= 0)
                                iterator.moveToNext();
                            else
                                iterator.moveToPrevious();
                        }
                        list.insertAtPosition(value, iterator, position);
                        std::cout << "Значення вставлено на позицію " << position << "\n";
                    } catch (const std::out_of_range &e) {
                        std::cout << e.what() << "\n";
                    }
                    break;
                case 5:
                    std::cout << "Введіть значення для додавання в кінець списку: ";
                    std::cin >> value;
                    list.addToEnd(value);
                    std::cout << "Значення додано в кінець списку\n";
                    break;
                case 0:
                    std::cout << "Вихід...\n";
                    break;
                default:
                    std::cout << "Неправильний вибір\n";
                    break;
            }

            list.displayList();

            std::cout << "\n";
        } while (choice != 0);
    }
    if(dataType == "string") {
        int choice, position;
        std::string value;
        DoublyLinkedList<std::string> list;
        DoublyLinkedList<std::string>::Iterator iterator;
        do {
            std::cout << "1. Визначити розмір списку\n";
            std::cout << "2. Пошук елемента із заданим значенням\n";
            std::cout << "3. Визначити позицію у списку елемента із заданим значенням\n";
            std::cout << "4. Включити новий елемент в позицію із заданим номером\n";
            std::cout << "5. Додати елемент в кінець списку\n";
            std::cout << "0. Вийти\n";
            std::cout << "Введіть свій вибір: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    std::cout << "Розмір списку: " << list.getSize() << "\n";
                    break;
                case 2:
                    std::cout << "Введіть значення для пошуку: ";
                    std::cin >> value;
                    if (list.search(value)) {
                        std::cout << "Елемент знайдено\n";
                    } else {
                        std::cout << "Елемент не знайдено\n";
                    }
                    break;
                case 3:
                    std::cout << "Введіть значення для визначення позиції: ";
                    std::cin >> value;
                    position = list.getPosition(value);
                    if (position != -1) {
                        std::cout << "Позиція елемента зі значенням " << value << ": " << position << "\n";
                    } else {
                        std::cout << "Елемент не знайдено\n";
                    }
                    break;
                case 4:
                    std::cout << "Введіть значення для вставки: ";
                    std::cin >> value;
                    std::cout << "Введіть позицію: ";
                    std::cin >> position;
                    try {
                        iterator.setToBegin(list);
                        for (int i = 0; i < abs(position); i++) {
                            if (position >= 0)
                                iterator.moveToNext();
                            else
                                iterator.moveToPrevious();
                        }
                        list.insertAtPosition(value, iterator, position);
                        std::cout << "Значення вставлено на позицію " << position << "\n";
                    } catch (const std::out_of_range &e) {
                        std::cout << e.what() << "\n";
                    }
                    break;
                case 5:
                    std::cout << "Введіть значення для додавання в кінець списку: ";
                    std::cin >> value;
                    list.addToEnd(value);
                    std::cout << "Значення додано в кінець списку\n";
                    break;
                case 0:
                    std::cout << "Вихід...\n";
                    break;
                default:
                    std::cout << "Неправильний вибір\n";
                    break;
            }

            list.displayList();

            std::cout << "\n";
        } while (choice != 0);
    }

    return 0;
}

