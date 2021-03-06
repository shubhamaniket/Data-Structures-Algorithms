/*
Given an array of n distinct integers sorted in ascending order, write a function that returns a Fixed Point in the array, if there is any Fixed Point present in array, else returns -1. Fixed Point in an array is an index i such that arr[i] is equal to i. Note that integers in array can be negative.
Input: arr[] = {-10, -5, 0, 3, 7}
Output: 3  // arr[3] == 3 

Input: arr[] = {0, 2, 5, 8, 17}
Output: 0  // arr[0] == 0 


Input: arr[] = {-10, -5, 3, 4, 7, 9}
Output: -1  // No Fixed Point
*/

#include<bits/stdc++.h>
using namespace std;

int fixed_point(int arr[],int n){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == mid){
            return mid;
        }
        else if(arr[mid] < mid){
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
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int fixed = fixed_point(arr,n);
    cout << fixed << endl;
    return 0;
}