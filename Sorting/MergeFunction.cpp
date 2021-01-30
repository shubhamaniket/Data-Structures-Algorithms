/*
    Given that there is an array,a low index, a mid index & a high index.
    From low to mid is sorted and from mid+1 to high is sorted.
    Sort the array.
*/

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i] = arr[low+i];
    }
    for(int i=0;i<n2;i++){
        right[i] = arr[n1+i];
    }
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
            k++;
        }
        else{
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }
    cout << "Sorted List : ";
    for(int i=0;i<(n1+n2);i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int low,mid,high;
    cin >> low >> mid >> high;
    merge(arr,low,mid,high);
    return 0;
}