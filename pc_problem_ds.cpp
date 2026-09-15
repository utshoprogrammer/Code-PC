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

    int fre[101] = {0};

    Node* temp = head;

    while(temp != NULL)
    {
        fre[temp->val]++;

        temp = temp->next;
    }
    int flag = 0;
    for (int i = 0; i < 101; i++)
    {
        if(fre[i] > 1)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout <<"Yes" << endl;
    }
    else{
        cout <<"No"<<endl;
    }
    
    return 0;
}