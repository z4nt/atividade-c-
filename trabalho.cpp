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
        cout << "O elemento inserido foi: " << data << endl;
    }

    void removeUm(){
        if(head == nullptr) return;
            Node* temp = head;
            head = head->next;
            cout << "O elemento removido foi: " << temp->data << endl;
            delete temp;
            return;
    }

    void removeVarios(int tamanho){
        if(head == nullptr) return;
        for (int i = 0; i < tamanho; i++)
        {
            removeUm();
        }
        
    }

    void print()
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    cout << "Digite o tamanho da lista: ";
    int n;
    cin>>n;
    List list;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        list.insert(x);
    }
    cout << "Digite a quantidade de elementos que deseja remover: ";
    int m;
    cin>>m;
    if (m <= 0 )
    {
        cout << "Nada foi removido" << endl;
    }else if (m > n)
    {
        cout << "A quantidade de elementos que deseja remover é maior que a quantidade de elementos na lista" << endl;
    }else if (m == 1)
    {
        list.removeUm();
    }else
    {
        list.removeVarios(m);
    }
    list.print();
    return 0;
}