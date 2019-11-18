#include<bits/stdc++.h>
using namespace std;
 
void selection_sort(int a[],int n)
{
	int i,j,min_idx;
	for(i=0;i<n-1;i++)
	{
		min_idx=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min_idx])
			min_idx=j;
 
			swap(a[min_idx],a[i]);
		}
	}
}
 
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int k=0;k<n;k++)
	cin >> a[k];
	selection_sort(a,n);
	for(int l=0;l<n;l++)
	cout << a[l];
 
	return 0;
}