/*
Given a sorted array and a value x, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the greatest element smaller than or equal to x. Assume than the array is sorted in non-decreasing order. Write efficient functions to find floor and ceiling of x.
For example, let the input array be {1, 2, 8, 10, 10, 12, 19}
For x = 0:    floor doesn't exist in array,  ceil  = 1
For x = 1:    floor  = 1,  ceil  = 1
For x = 5:    floor  = 2,  ceil  = 8
For x = 20:   floor  = 19,  ceil doesn't exist in array
*/
#include<bits/stdc++.h>
using namespace std;

int ceilsearch(int arr[],int n,int x){

    if(x <= arr[0]){
        return 0;
    }
    if(x > arr[n-1]){
        return -1;
    }
    int start = 0;
    int end = n - 1;

    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            if(mid+1 <= end && x<=arr[mid+1]){
                return mid+1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(mid-1 >= start && x > arr[mid-1]){
                return mid;
            }
            else{
                end = mid - 1;
            }
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
    int ceilindex = ceilsearch(arr,n,x);
    cout << "Ceil : " << arr[ceilindex] << endl;
    return 0;
}