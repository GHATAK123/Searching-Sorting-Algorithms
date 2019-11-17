#include <iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
	int i,j,key;
	for(j=1;j<n;j++)
	{
		key=a[j];
		i=j-1;
		while(i>=0&&a[i]>key)
		{
		   a[i+1]=a[i];
		   i=i-1;
		}
		a[i+1]=key;
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int k=0;k<n;k++)
	cin >> a[k];
	insertion_sort(a,n);
	for(int l=0;l<n;l++)
	cout << a[l];
	return 0;
	
}
