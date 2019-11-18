#include <iostream>
using namespace std;

int linear_search(int a[],int n,int t)
{
	int i;
	for(i=0;i<n;i++)
	 if(a[i]==t)
		return i;
	return -1;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	 cin>>a[i];
	int t;
	cin >> t;
	int r;
	r=linear_search(a,n,t);
	(r==-1)?cout<<"Element is not present in array" : cout<<"Element is present at index " <<r; 
	
	return 0;
}