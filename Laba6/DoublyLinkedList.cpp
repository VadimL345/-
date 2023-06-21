#include "DoublyLinkedList.h"


template <typename T>
DoublyLinkedList<T>::Node::Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() : head(nullptr), size(0) {}

template <typename T>
int DoublyLinkedList<T>::getSize() const {
    return size;
}

template <typename T>
bool DoublyLinkedList<T>::isEmpty() const {
    return size == 0;
}

template <typename T>
DoublyLinkedList<T>::Iterator::Iterator() : current(nullptr) {}

template <typename T>
void DoublyLinkedList<T>::Iterator::setToBegin(const DoublyLinkedList<T>& list) {
    if (!list.isEmpty()) {
        current = list.head;
    }
}

template <typename T>
bool DoublyLinkedList<T>::Iterator::isEnd(const DoublyLinkedList& list) const {
    return list.isEmpty() || current == list.head;
}
template <typename T>
T& DoublyLinkedList<T>::Iterator::getValue() const {
    if (current == nullptr) {
        throw std::out_of_range("Ітератор не вказує на жоден елемент");
    }

    return current->data;
}
template <typename T>
void DoublyLinkedList<T>::Iterator::moveToPrevious() {
    if (current == nullptr) {
        throw std::out_of_range("Ітератор не вказує на жоден елемент");
    }

    current = current->prev;
}

template <typename T>
void DoublyLinkedList<T>::Iterator::moveToNext() {
    if (current == nullptr) {
        throw std::out_of_range("Ітератор не вказує на жоден елемент");
    }

    current = current->next;
}
template <typename T>
void DoublyLinkedList<T>::addToEnd(const T& value) {
    Node *newNode = new Node(value);

    if (isEmpty()) {
        head = newNode;
        head->prev = head;
        head->next = head;
    } else {
        newNode->prev = head->prev;
        newNode->next = head;
        head->prev->next = newNode;
        head->prev = newNode;
    }

    size++;
}

template <typename T>
void DoublyLinkedList<T>::displayList() const {
    if (isEmpty()) {
        std::cout << "Список порожній\n";
    } else {
        std::cout << "Елементи списку: ";
        Iterator iterator;
        iterator.setToBegin(*this);

        do {
            std::cout << iterator.getValue() << " ";
            iterator.moveToNext();
        } while (!iterator.isEnd(*this));

        std::cout << "\n";
    }
}

template <typename T>
bool DoublyLinkedList<T>::search(const T& value) const {
    if (isEmpty()) {
        return false;
    }
    Iterator iterator;
    iterator.setToBegin(*this);

    do {
        if (iterator.getValue() == value) {
            return true;
        }
        iterator.moveToNext();
    } while (!iterator.isEnd(*this));

    return false;
}

template <typename T>
int DoublyLinkedList<T>::getPosition(const T& value) const {
    if (isEmpty()) {
        return -1;
    }

    Iterator iterator;
    iterator.setToBegin(*this);

    int position = 0;
    do {
        if (iterator.getValue() == value) {
            return position;
        }
        iterator.moveToNext();
        position++;
    } while (!iterator.isEnd(*this));

    return -1;
}

template <typename T>
void DoublyLinkedList<T>::insertAtPosition(const T& value, Iterator& iterator, int position) {
    if (position >= size) {
        throw std::out_of_range("Неправильна позиція");
    }

    Node *newNode = new Node(value);

    newNode->prev = iterator.current->prev;
    newNode->next = iterator.current;

    if (iterator.current == head) {
        head = newNode;
    }

    iterator.current->prev->next = newNode;
    iterator.current->prev = newNode;

    size++;
}














