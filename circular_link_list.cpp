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
class circular_link_list
{
public:
    node *head;
    circular_link_list()
    {
        head = NULL;
    }
    circular_link_list(node *n)
    {
        head = n;
    }
    node *nodeexist(int k)
    {
        node *temp = NULL;
        node *ptr = head;
        if (ptr == NULL)
        {
            return temp;
        }
        else
        {
            do
            {
                if (ptr->key != k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            } while (ptr != head);
            return temp;
        }
    }
    void append(node *n)
    {
        if (nodeexist(n->key) != NULL)
        {
            cout << "node cant append "
                 << "(" << n->key << " ," << n->data << ")1";
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                n->next = head;
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
                n->next = head;
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
            node *ptr;
            while (ptr != head)
            {
                ptr = ptr->next;
            }
            ptr->next = n;

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
                if (ptr->next == head)
                {
                    n->next = head;
                    ptr->next = n;
                    cout << "inserted at head .";
                }
                else
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    cout << "inserted at between";
                }
            }
        }
    }
    void deletenode(int k)
    {
        node *ptr = nodeexist(k);
        if (head->next == NULL)
        {
            if (ptr == NULL)
            {
                cout << "no node exit with these key value ";
            }
            else
            {
                if (ptr->next = NULL)
                {
                    head = NULL;
                    cout << "head unlinked from link list";
                }
                else
                {
                    node *ptr1 = head;
                    while (ptr->next != head)
                    {
                        ptr = ptr->next;
                    }
                    ptr->next = head->next;
                    head = head->next;
                    cout << "head is unlinked from the linklist";
                }
            }
        }
        else
        {
            node *prevptr=head;
            node *currptr=head->next;
            node* temp=NULL;
            while (currptr!=NULL)
            {
                if(currptr->key==k)
                {
                    temp=currptr;
                    currptr=NULL;
                }
                else{
                    currptr=currptr->next;
                    prevptr=prevptr->next;
                }
            }
            prevptr->next=temp->next;
            cout<<"node is deleted from between.";
            
        }
    }
    void updatevalue(int k,int new_data)
    {
        node*ptr=nodeexist(k);
        if(ptr!=NULL)
        {
            ptr->data=new_data;
            cout<<"data is updated with existing key value";
        }
        else
        {
            cout<<"node does not exist with this key value";
        }
    }
    void printlist()
    {
        if (head == NULL)
        {
            cout << "no node in single link list";
        }
        else
        {   cout<<"head address:"<<head<<endl;
            cout << endl << "single list value";
            node *temp = head;
            do
            {
                cout << "(" << temp->key << "," << temp->data << ") -->";
                temp = temp->next;
            }while(temp!=head);
        }
    }
};
int main()
{
    circular_link_list s;

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
            s.updatevalue(key1, data1);
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