#include <bits/stdc++.h>
#include "debugging.h"
using namespace std;

#define dbg(v) \
    cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

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

    // destructor
    ~Node()
    {
        int val = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory freed for node with value " << val << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    position--;
    while (position-- > 1)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node *node = new Node(data);
    node->next = temp->next;
    temp->next = node;
}

void deleteNode(Node *&head, int position)
{
    Node *temp = head;
    if (position == 1)
    {
        dbg(head->data);
        head = head->next;
        dbg(head->data);
        temp->next = NULL;
        delete temp;
        return;
    }
    while (position-- > 1)
    {
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = temp->next->next;
    del->next = NULL;
    delete del;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// --------------------------------------------------------------
class Solution
{
public:
    int MinSquares(int n)
    {
        // Code here
        dbg(n);
        int ctr = 0;
        while (!n <= 1)
        {
            dbg(n);
            dbg(ctr);
            int sq = pow(int(sqrt(n)), 2);
            dbg(sq);
            n = n - sq;
            if (n == 0)
                break;
            ctr++;
        }
        dbg(ctr);
        return ctr + 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.MinSquares(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
// --------------------------------------------------------------

// int main()
// {
//     Node *node1 = new Node(5);
//     Node *head = node1;
//     Node *tail = node1;
//     // cout << head->data << endl;
//     // cout << head->next;
//     insertAtHead(head, 6);
//     insertAtHead(head, 7);
//     insertAtHead(head, 8);
//     print(head);
//     insertAtTail(tail, 6);
//     insertAtTail(tail, 7);
//     insertAtTail(tail, 8);
//     print(head);
//     insertAtPosition(head, tail, 9, 8);
//     print(head);
//     deleteNode(head, 4);
//     print(head);
//     // deleteNode(head, 1);
//     // print(head);
//     // deleteNode(head, 4);
//     print(head);
//     return 0;
// }