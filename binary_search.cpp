#include <iostream>
using namespace std;

int binary_search(int a[],int l,int r,int t)
{
	while(l<=r)
	{
		int m;
		m=l+(r-l)/2;
		if(a[m]==t)
		return m;
		if(a[m]<t)
		l=m+1;
		else
		r=m-1;
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int t;
	cin >> t;
	int k;
	k=binary_search(a,0,n-1,t);
	(k==-1)?cout << "Element is not present in array": cout << "Element is present at index " << k;
	
	return 0;
}