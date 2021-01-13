#include <bits/stdc++.h>
#include <malloc.h>
#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i,j,min_index;
	for (i = 0; i < n-1 ; i++)
	{
		min_index = i;
		for(j = i + 1; j < n; j++)
			if (arr[j] < arr[min_index])
				min_index = j;
		swap(&arr[min_index], &arr[i]);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{	
	int n,i;
	cout << "Type in the size of array.";
	cin>>n; int arr[n-1];
	cout<<"Enter array elements";
	
	for (i = 0; i < n ; i++)
	{
		cin>>arr[i];
	}

	selectionSort(arr,n);
	cout << "Sorted array: \n";
	printArray(arr,n);
	return 0;
}

