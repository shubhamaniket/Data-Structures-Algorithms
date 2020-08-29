/*
    Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
             key = 3
    Output : Index found at 8

    Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
             key = 30
    Output : Index found at -1

    Input : arr[] = {30, 40, 50, 10, 20}
            key = 10   
    Output : Index found at 3
*/
#include<bits/stdc++.h>
using namespace std;

int findPivot(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[],int low,int high,int key){
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n,key;
    cin >> n >> key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int pivot = findPivot(arr,n);
    int search;
    if(arr[pivot] == key){
        search = pivot;
    }
    else{
        if(pivot == -1){
            search = binary_search(arr,0,n-1,key);
        }
        if(arr[0] > key){
            search = binary_search(arr,pivot+1,n-1,key);
        }
        else{
            search = binary_search(arr,0,pivot-1,key);
        }
    }
    cout << "Index found at " << search << endl;
    return 0;
}