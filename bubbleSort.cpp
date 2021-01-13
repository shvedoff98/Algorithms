#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
	int temp =*xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
		if (arr[j]>arr[j+1])
			swap(&arr[j],&arr[j+1]);
	
}

void printArray(int arr[], int n)
{
	int i;
	for (i=0;i<n;i++)
		cout <<"arr["<<i<<"]="<<arr[i];
	cout << endl;
}

int main()
{
	int i,n;
	int *arr;
	cout <<"Enter the size of array";cin>> n;
	arr = new int[n]; 
	for (i=0;i<n;i++)
	{
		cout<<"arr["<<i<<"]="<<endl;
		cin>>arr[i];
		cout<<arr[i]<<endl;
	}
	bubbleSort(arr,n);
	printArray(arr,n);
	delete[] arr;
	
	return 0;
}


