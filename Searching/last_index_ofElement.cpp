/*
    Last index of element in an sorted array given the element.
    e.g. = [1,3,3,3,5,5,8]  x = 3
    ouput = 3
*/

#include<bits/stdc++.h>
using namespace std;

int last_index(int arr[],int n,int x){
    int start = 0;
    int end = n - 1;
    while(start <= end){
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
    int res = last_index(arr,n,x);
    cout << res << endl;
    return 0;
}