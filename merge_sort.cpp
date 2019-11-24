/* Merge Sort(Divide & Conquer Approach) Implementation Using array.
   Time Complexity of Merge Sort in all cases will be theta(nlog(n)).
   Space Complexity : O(n).
   Space Complexity when using stack : O(log(n)).
   Time Complexity of merge function : O(n).*/
#include <iostream>
using namespace std;

void merge(int a [],int p,int q,int r)
{
	int n1,n2;
	n1=q-p+1;
	n2=r-q;
	int l[n1];
	int m[n2];
	for(int i=0;i<n1;i++)
		l[i]=a[p+i];
	int j;	
	for(int j=0;j<n2;j++)
		m[j]=a[q+1+j];
	
	int i = 0; j = 0;
	int k=p;
	while(i < n1 && j<n2) {
      if(l[i] <= m[j]) {
         a[k] = l[i];
         i++;
      }else{
         a[k] = m[j];
         j++;
      }
      k++;
   }
	while(i<n1)
	{
		a[k]=l[i];
		i++;k++;
	}
	while(j<n2)
	{
		a[k]=m[j];
		j++;k++;
	}
}

void merge_sort(int a [],int p,int r)
{
	
	if(p<r)
	{
		
		int q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}

int main() {
	int n;
	cin >> n;
	int i;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		cout << a[i] << " ";
	}
	merge_sort(a,0,n-1);
	cout << endl;
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	return 0;
}