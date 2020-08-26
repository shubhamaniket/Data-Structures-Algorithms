/*
    Given an infinite sized array and a element x .
    Return the index of x if its exists else return -1;
*/

#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int low,int high,int x){
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
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
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(arr[0] == x){
        cout << 0 << endl;
    }
    int i = 1;
    while(arr[i] < x){
        i *= 2;
    }
    if(arr[i] == x){
        cout << i << endl;
    }
    else{
        int ans = binary_search(arr,i/2,i,x);
        cout << ans << endl;
    }
    return 0;
}