#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

class List
{
    Node* head;
    Node* tail;
public:
    List()
    {
        head = nullptr;
        tail = nullptr;
    }
    void insert(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        if (tail == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void remove(){
        if(head == nullptr) return;
            Node* temp = head;
            head = head->next;
            cout << "O elemento removido foi: " << temp->data << endl;
            delete temp;
            return;
    }
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}