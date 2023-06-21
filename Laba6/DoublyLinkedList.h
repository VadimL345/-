#include <iostream>


template <typename T>
class DoublyLinkedList {
private:
    struct Node {
        T data;
        Node* prev;
        Node* next;

        Node(const T& value);
    };

    Node* head;
    int size;

public:
    DoublyLinkedList();

    int getSize() const;

    bool isEmpty() const;

    class Iterator {
    public:
        Node* current;

    public:
        Iterator();

        void setToBegin(const DoublyLinkedList<T>& list);

        bool isEnd(const DoublyLinkedList<T>& list) const;

        T& getValue() const;

        void moveToPrevious();

        void moveToNext();
    };

    void addToEnd(const T& value);
    void displayList() const;

    bool search(const T& value) const;

    int getPosition(const T& value)const;

    void insertAtPosition(const T& value, Iterator& iterator, int position);
};