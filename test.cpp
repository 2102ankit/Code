#include <bits/stdc++.h>
#include "debugging.h"
using namespace std;

#define dbg(v) \
    cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#define nl "\n";

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory of Node containing data " << val << " is freed" << nl;
    }
};

void insert(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *node = new Node(data);
        tail = node;
        tail->next = node;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *node = new Node(data);
        node->next = curr->next;
        curr->next = node;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
        return;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
        // dbg(temp);
    } while (temp != tail);

    cout << nl;
}

void deleteNode(Node *&tail, int val)
{
    if (tail == NULL)
        return;
    Node *curr = tail;
    Node *prev = tail;
    do
    {
        prev = curr;
        curr = curr->next;
    } while (curr->data != val);

    if (curr == prev)
    {
        tail = NULL;
    }
    if (curr == tail)
        tail = curr->next;

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main(int argc, char const *argv[])
{
    Node *tail = NULL;
    insert(tail, 5, 1);
    // insert(tail, 1, 2);
    // insert(tail, 2, 3);
    // insert(tail, 3, 4);
    // insert(tail, 4, 5);
    // insert(tail, 2, 0);
    // print(tail);
    // deleteNode(tail, 0);
    // print(tail);
    // deleteNode(tail, 2);
    print(tail);
    deleteNode(tail, 1);
    // print(tail);
    // deleteNode(tail, 5);
    print(tail);
    return 0;
}
