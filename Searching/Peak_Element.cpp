/*
Given an array of integers. Find a peak element in it. An array element is a peak if it is NOT smaller than its neighbours. For corner elements, we need to consider only one neighbour.

Input: array[]= {5, 10, 20, 15}
Output: 20
The element 20 has neighbours 10 and 15,
both of them are less than 20.

Input: array[] = {10, 20, 15, 2, 23, 90, 67}
Output: 20 or 90
The element 20 has neighbours 10 and 15, 
both of them are less than 20, similarly 90 has neighbous 23 and 67.
*/

#include<bits/stdc++.h>
using namespace std;

int peak_element(int arr[],int n){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if((mid == 0 || (arr[mid-1]<=arr[mid])) && (mid == n-1 || (arr[mid+1]<=arr[mid]))){
            return mid;
        }
        if(mid > 0 && arr[mid-1]>=arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = peak_element(arr,n);
    cout << arr[ans] << endl;
    return 0;
}