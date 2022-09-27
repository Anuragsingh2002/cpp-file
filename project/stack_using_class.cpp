#include<iostream>
using namespace std;
class stack{
	private:
		int x[5];
		int n=0;
		int a;
	public:
		void push()
		{if(n<5)
		 {
		   cout<<"enter value:";
		   cin >>a;
		   x[n]=a;
		   n++;
		  
	    }
	    else{
	    	cout<<"\nstack overflow\n";
		    }	
		}
		
		void pop()
		{
			if(n>=0)
			{
				n--;
				cout<<"\nvalue deleted from stack\n";
			}
			else{
				cout<<"\nstack is underflow\n";
			}
		}
		void display()
		{
			for(int i=0;i<n;i++)
			{
				cout<<x[i]<<" ";
			}
		}
};
int main()
{ stack s;
cout<<"\n choice\n 1.push\n2.pop\n3.display\n";
char ch;
do{
	int n;
	cout<<"\n enter choice\n";
	cin >>n;	
	switch(n)
	{
		case 1:
			s.push();
		break;
		case 2:
			s.pop();
		case 3:
			s.display();
			break;
	}

	cout<<"\nenter y for repeat:";
	cin>>ch;
	
	
}while(ch=='Y'or ch=='y');

	
}
