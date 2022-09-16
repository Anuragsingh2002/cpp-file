#include <iostream>
using namespace std;
class node
{
public:
    int key;
    int data;
    node *next;
    node *prev;
    node()
    {
        key = 0;
        data = 0;
        next = NULL;
        prev = NULL;
    }
    node(int k, int d)
    {
        key = k;
        data = d;
        next = NULL;
        prev = NULL;
    }
};
class doubly_link_list
{
    node *head;

public:
    doubly_link_list()
    {
        head = NULL;
    }
    doubly_link_list(node *n)
    {
        head = n;
    }
    node *nodeexist(int k)
    {
        node *temp=NULL;
        node *ptr = head;
        while (ptr != NULL)
        {
            if (k == ptr->key)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }

        return temp;
    }
    void append(node *n)
    {
        if (nodeexist(n->key) != NULL)
        {
            cout << "node alredy exist with this key value " << n->key << " use with another key value.";
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "node apppend at head";
            }
            else
            {
                node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                n->prev = ptr;
                cout << "node append";
            }
        }
    }
    void prepend(node *n)
    {
        if (nodeexist(n->key) != NULL)
        {
            cout << "node alredy exist with this key value " << n->key << " use with another key value.";
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "node prepend at head";
            }
            else
            {
                head->prev = n;
                n->next = head;
                head = n;
                cout << "node prepend";
            }
        }
    }
    void nodeinsertafter(int k, node *n)
    {
        node *ptr = nodeexist(k);
        if (nodeexist(n->key) != NULL)
        {
            cout << "node alredy exist with this key value " << n->key << " use with another key value.";
        }
        else
        {
            node *nextnode = ptr->next;
            if (nextnode == NULL)
            {
                ptr->next = n;
                n->prev = ptr;
                cout << "node insert at specific position.";
            }
            else
            {
                n->next = nextnode;
                nextnode->prev = n;
                n->prev = ptr;
                ptr->next = n;
                cout << "node insert at specific position.";
            }
        }
    }
    void deletion(int k)
    {
        node *ptr = nodeexist(k);
        if (ptr == NULL)
        {
            cout << "node alredy exist with this key value " << k << " use with another key value.";
        }
        else
        {
            if (head->key = k)
            {
                head = head->next;
                cout << "node deleted from head";
            }
            node *nextnode = ptr->next;
            node *prevnode = ptr->prev;
            if (nextnode == NULL)
            {
                prevnode->next = NULL;
                cout << "deleted succesfully at end";
            }
            else
            {
                prevnode->next = nextnode;
                nextnode->prev = prevnode;
                cout << "deleted succesfully in between";
            }
        }
    }
    void updatedata(int k, int d)
    {
        node *ptr = nodeexist(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "data updated";
        }
        else
        {
            cout << "key value is not exists ";
        }
    }
    void printlist()
    {
        if (head == NULL)
        {
            cout << "list is empty";
        }
        else
        {
            cout << "doubly link list:";
            node *temp = head;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ")"
                     << "<----->";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    doubly_link_list obj;
    int option;
    int key1, k1, data1;
    do
    {
        cout << "\n what opretion do you to perform ? select option number, enter 0 to exit." << endl;
        cout << "1. appendnode()" << endl;
        cout << "2.prependnode()" << endl;
        cout << "3.insertnodeafter()" << endl;
        cout << "4.deletenodebykey()" << endl;
        cout << "5.updatenodebykey()" << endl;
        cout << "6.print()" << endl;
        cout << "7.clear screen" << endl
             << endl;
        cin >> option;
        node *n1 = new node();
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "append node operation \n enter key & data of the node to be append" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            obj .append(n1);
            break;
        case 2:
            cout << "prepend node operation \n enter key & data of the node to be append" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            obj.prepend(n1);
            break;
        case 3:
            cout << "insert node after operation \n enter key & data of the node to be append" << endl;
            cin >> k1;
            cout << "enter key & data of the new node first" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            obj.nodeinsertafter(k1,n1);
            break;
        case 4:
            cout << "insert node after operation \n enter key & data of the node to be append" << endl;
            cin >> k1;
            obj.deletion(k1);
        case 5:
            cout << "insert node after operation \n enter key & data of the node to be append" << endl;
            cin >> key1;
            cin >> data1;
            obj.updatedata(key1, data1);
        case 6:
            obj.printlist();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "enter proper option number" << endl;
            break;
        }

    } while (option != 0);
 
}
