/* Implementation of bubble sort in cpp */
/* In Best case Time Complexity will be O(n) [If Array will be Sorted Intially.] */
/* In Worst case Time Complexity will be O(n^2) [If Array will be reverse Sorted Intially.]*/
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a [], int n)
{
	int swapped,i,j;
	for(i=0;i<n;i++)
	{
		swapped=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			swap(a[j],a[j+1]);
			swapped=1;
			}
		}
		if(swapped==0)
			break;
		
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int k=0;k<n;k++)
	cin >> a[k];
	bubble_sort(a,n);
	for(int l=0;l<n;l++)
	cout << a[l];
	
	return 0;
}
