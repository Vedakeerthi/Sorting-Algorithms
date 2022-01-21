#include<iostream>
using namespace std;
 
class normal 
{
	public:
		int a[100],i,j,n;
		void getdata(void);
		void putdata(void);
		void display(void);
};

void normal :: getdata(void)
{
	cout<<"=====================SELECTION SORT======================";
	cout<<"\nENTER THE NUMBER OF ELEMENTS IN THE ARRAY TO BE SORTED: ";
	cin >>n;
	cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
	for(i=0;i<n;i++)
	cin>>a[i];
	
}

void normal :: putdata(void)
{
	int low;
	for(i=0;i<n-1;i++)
	{
		low = a[0];
		for(j=1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				low = a[j];
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void normal :: display(void)
{
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
}

int main()
{
	normal n;
	n.getdata();
	n.putdata();
	n.display();
	return 0;
}
