#include <iostream>
using namespace std;
class node
{
public:
    int key;
    int data;
    node *next;
    node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    node(int k, int d)
    {
        key = k;
        data = d;
        next = NULL;
    }
};
class single_link_list
{
public:
    node *head;
    single_link_list()
    {
        head = NULL;
    }
    single_link_list(node *n)
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
            cout << "node cant append "<<"("<<n->key<<" ,"<<n->data<<")1";
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "node append";
            }
            else
            {
                node *temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = n;
                cout << "append";
            }
        }
    }
    void prepend(node *n)
    {
        if (nodeexist(n->key) != NULL)
        {
            cout << "node cant preend";
        }
        else
        {
            n->next = head;
            head = n;
        }
    }
    void insertnodeafter(int k, node *n)
    {
        node *ptr = nodeexist(k);
        if (ptr == NULL)
        {
            cout << "node is not exist";
        }
        else
        {
            if (nodeexist(n->key) != NULL)
            {
                cout << "node alredy exist with key value" << n->key;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
            }
        }
    }
    void deletenode(int k)
    {
        if (head == NULL)
        {
            cout << "linklist alredy empty";
        }
        else if (head != NULL)
        {
            if (head->key == k)
            {
                head = head->next;
                cout << "node unlinked from node key: " << k;
            }
        }
        else
        {
            node *temp = NULL;
            node *prevptr = head;
            node *currentptr = head->next;
            while (currentptr != NULL)
            {
                if (currentptr->key == k)
                {
                    temp = currentptr;
                    currentptr = NULL;
                }
                else
                {
                    currentptr = currentptr->next;
                    prevptr = prevptr->next;
                }
            }
            if (temp != NULL)
            {
                prevptr->next = currentptr->next;
                cout << "node is unlinked";
            }
            else
            {
                cout << "key is not exist";
            }
        }
    }
    void updateddata(int k, int d)
    {
        node *ptr = nodeexist(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "noda data updated successfully";
        }
        else
        {
            cout << "node doesn't exist with key value";
        }
    }
    void printlist()
    {
        if (head == NULL)
        {
            cout << "no node in single link list";
        }
        else
        {
            cout << endl
                 << "single list value";
            node *temp = head;
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ") -->";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    single_link_list s;

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
            s.append(n1);
            break;
        case 2:
            cout << "prepend node operation \n enter key & data of the node to be append" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prepend(n1);
            break;
        case 3:
            cout << "insert node after operation \n enter key & data of the node to be append" << endl;
            cin >> k1;
            cout << "enter key & data of the new node first" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prepend(n1);
            break;
        case 4:
            cout << "insert node after operation \n enter key & data of the node to be append" << endl;
            cin >> k1;
            s.deletenode(k1);
        case 5:
            cout << "insert node after operation \n enter key & data of the node to be append" << endl;
            cin >> key1;
            cin >> data1;
            s.updateddata(key1, data1);
        case 6:
            s.printlist();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "enter proper option number" << endl;
            break;
        }

    } while (option!= 0);
}