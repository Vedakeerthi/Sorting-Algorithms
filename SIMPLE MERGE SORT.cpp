#include<iostream>
#include<stdlib.h>
using namespace std;

void merge(int a[], int l,int mid,int h)
{
	int temp[100],k;
	int j = mid+1;
	while(l<=mid || j<=h)
	{
		if(a[l]<a[j])
		{
			temp[k] = a[l];
			k++;
			l++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	    	
	}
	while(l<mid)
	{
		temp[k] = a[l];
		k++;
		l++;
	}
	while(j<h)
	{
		temp[k] = a[j];
		k++;
		j++
	;}
}

void mergesort(int a[],int l,int h)
{
	if(l < h)
	{
		int mid = (l+h)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}

void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
int main()
{
	int n,i,a[1000];
	cout<<"enter the number of elements to be sorted: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
    cin>>a[i];
    
    mergesort(a,0,n-1);
    
    cout<<"the sorted elements are: ";
    display(a,n)
;}
