/*
    Given element in a sorted array we have to find the count of that element using Binary Search.
*/

#include<bits/stdc++.h>
using namespace std;

int first(int arr[],int n,int x){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == x && (mid == 0 || arr[mid]!=arr[mid-1])){
            return mid;
        }
        else if(arr[mid] >= x){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}
int last(int arr[],int n,int x){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == x && (mid == n-1 || arr[mid]!=arr[mid+1])){
            return mid;
        }
        else if(arr[mid] > x){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int first_index = first(arr,n,x);
    int last_index = last(arr,n,x);
    cout << "Count : " << (last_index - first_index + 1) << endl;
    return 0;
}