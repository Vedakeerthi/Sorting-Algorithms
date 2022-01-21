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
	cout<<"=======================BUBBLE SORT=================================";
	cout<<"\nENTER THE NUMBER OF ELEMENTS TO BE ENTERED IN THE GIVEN ARRAY:";
	cin >>n;
	cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
	for(i=0;i<n;i++)
	cin >>a[i];
}

void normal :: putdata(void)
{
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i]= a[j];
				a[j]= temp;
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
