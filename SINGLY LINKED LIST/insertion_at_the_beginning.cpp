#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};
class LinkedList
{
    private:
    Node* head;

    public:
    LinkedList()
    {
        this->head=nullptr;
    }

    void insert_at_beginning(int data)
    {
        Node* New=new Node(data);
        New->next=head;
        head=New;
    }
    void printList()
    {
        Node* ptr=head;
        while(ptr!=nullptr)
        {   
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
};
int main()
{
    LinkedList list;
    list.insert_at_beginning(1);
    list.insert_at_beginning(2);
    list.insert_at_beginning(3);
    list.insert_at_beginning(4);
    list.insert_at_beginning(5);
    cout<<"the list is:"<<endl;
    list.printList();
    return 0;
}