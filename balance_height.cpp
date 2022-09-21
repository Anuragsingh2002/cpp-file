#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=height(root->left);
    int r=height(root->right);
    return max(l,r)+1;
}
bool isbalance(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL)
    
    {
        return false;
    }
    if(root->right==NULL)
    {
        return false;
    }
        
   int lh=height(root->right);
int rh=height(root->left);
if((lh-rh)<=1)
{
    return true;
}
return false;
}
int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
     root->right->left=new node(6);
    root->right->right=new node(7);
    struct node* root1=new node(1);
    root1->left=new node(2);
    root1->left=new node(3);
    if(isbalance(root1))
    {
        cout<<"balance subtree";
    }
    else{
        cout<<"unbalance subtree";
    }
    return 0; 
}