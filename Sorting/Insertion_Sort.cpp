#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int value = arr[i];
        int index = i;
        while(index>0 && value<arr[index-1]){
            arr[index] = arr[index-1];
            index--;
        }
        arr[index] = value;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}