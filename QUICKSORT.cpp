                                     /*QUICK SORT*/
                     


#include<iostream>
using namespace std;


void swap(int *a,int *b)   /*THIS FUNCTION IS USED TO SWAP*/
{
	int temp = *a;   /*POINTERS ARE USED TO COMPLETELY CHANGE AND STORE IT*/
	*a = *b;
	*b = temp;
}


int quick(int a[],int start,int end)  /*THIS IS USED TO SWAP 
THE ELEMENTS LESSER THAN PIVOT*/
{
	int pivot = a[start];
	int i = start;
	for(int j = start+1 ; j <= end ; j++)
	{
		if(pivot > a[j])
		{
			i++;
			swap(&a[i],&a[j])
		;}
	}
	swap(&a[i],&a[pivot])
	
;}


void quicksort(int a[],int low,int high) /*THIS FUNCTION IS USED TO TAKE THE 
PIVOT FOR THE SUBARRAYS*/
{
	int pivot = quick( a,low,high);
	
	quicksort(a,low,pivot);
	quicksort(a,pivot+1,high);
}


int main()
{
	cout<<"================================QUICK SORT===============================";
	int n,a[10];
	cout<<"\nENTER THE NUMBER OF ELEMENTS TO BE SORTED : ";
	cin>>n;
	cout<<"ENTER THE ELEMENTS : ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	cout<<"SORTED ARRAY: ";
	for(int q=0;q<n;q++)
	cout<<a[q]<<"\t";
}
