#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i,j,tmp;
    bool swapped;

    for( i=0 ; i<n; i++)
    {
        swapped = false;

        for( j=0 ; j<n-i-1 ; j++ )
        {
            if( arr[j] > arr[j+1] )
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swapped = true;
            }
        }

        if(!swapped)
            break;
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}