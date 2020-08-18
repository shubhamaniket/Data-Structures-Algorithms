/*
Given an array A[] of N positive integers. 
The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int current = 0;
    int max_diff = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<=arr[j]){
                current = j - i;
            }
            max_diff = max(max_diff,current);
        }
    }
    cout << max_diff;
    return 0;
}