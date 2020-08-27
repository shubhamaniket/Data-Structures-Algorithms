/*
Given an sorted array and a sum we need to check if there is a pair whose sum is equal to the given sum.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;
    while(start<=end){
        if(arr[start]+arr[end] == x){
            cout << "[" << arr[start] << "," << arr[end] << "]" << endl;
            break;
        }
        else if(arr[start]+arr[end] < x){
            start++;
        }
        else{
            end--;
        }
    }
    cout << endl;
    return 0;
}