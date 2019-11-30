// Implementation of Quick Sort Using an Array.
/* Time Complexity In Best case O(n*log(n)) when partition is divided into nearly equal halves.
   Time Complexity In Worst case O(n^2) when array is either  sorted or unsorted or array containing
   same element throughout.
   Space Complexity In Best Case O(log(n))
   Space Complexity In Worst Case O(n)*/
#include <bits/stdc++.h>
using namespace std;

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(arr[i], arr[j]);  
        }  
    }  
    swap(arr[i + 1], arr[high]);  
    return (i + 1);  
}  

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        
        int pi = partition(arr, low, high);  
  
    
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	quickSort(arr,0,n-1);
	for(int j=0;j<n;j++)
		cout << arr[j] << " ";
	
	return 0;
}