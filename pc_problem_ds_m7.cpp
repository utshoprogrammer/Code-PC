#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node * next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
    
}
int print_linked_list(Node* head)
{
    int size = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    int siz = print_linked_list(head);

    if(siz%2 == 0)
    {
        // two value midel
        Node* temp = head;

        int mid = (siz/2);
        for (int i = 1; i < mid; i++)
        {
            temp = temp->next;
        }
        cout<<temp->val <<" ";
        cout<<temp->next->val<<endl;
        
    }
    else{
        // one value midel
        Node* temp = head;
        for (int i = 1; i < (siz/2)+1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val <<endl;
        

    }
    
    return 0;
}