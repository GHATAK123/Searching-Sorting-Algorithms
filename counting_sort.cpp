#include <iostream>
using namespace std;

int main() {
	// your code goes here
	return 0;
#include <iostream>
using namespace std;

void counting_sort(int a[],int n,int b[],int k);

void counting_sort(int a[],int n,int b[],int k)
{
	int i,j,c[k];
	for(i=0;i<k;i++)
		c[i]=0;
	for(j=0;j<n;j++)
		c[a[j]]++;
	for(i=1;i<k;i++)
		c[i]=c[i]+c[i-1];
	for(j=n-1;j>=0;j--)
	{
		b[c[a[j]]-1]=a[j];
		c[a[j]]--;
	}
}

int main() {
	int k;
	cin >> k;
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int b[n];
	counting_sort(a,n,b,k);
	for(int i=0;i<n;i++)
		cout << b[i]<< " ";
	
	return 0;
}