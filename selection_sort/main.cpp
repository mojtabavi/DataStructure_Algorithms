#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{   
    int i,j,selection,tmp;
    for( i=0 ; i<n ; i++ )
    {
        selection = i;
        for( j=i+1 ; j<n ; j++ )
        {
            if(arr[j] <= arr[selection])
                selection = j;
        }
        tmp = arr[i];
        arr[i] = arr[selection];
        arr[selection] = tmp;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}