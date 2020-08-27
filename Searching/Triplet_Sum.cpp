/*
    Given Sorted Array check if it has a triplet with given sum
*/

#include<bits/stdc++.h>
using namespace std;

bool checkTriplet(int arr[],int i,int start,int end,int x){
    while(start<=end){
        if(arr[i]+arr[start]+arr[end] == x){
            return true;
        }
        else if(arr[i]+arr[start]+arr[end] < x){
            start++;
        }
        else{
            end--;
        }
    }
    return false;
}

int main()
{
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int start,end;
    for(int i=0;i<n-2;i++){
        start = i+1;
        end = n-1;
        while(start<=end){
            if(arr[i]+arr[start]+arr[end] == x){
                cout << "[" << arr[i] << "," << arr[start] << "," << arr[end] << "]" << endl;
                break;
            }
            else if(arr[i]+arr[start]+arr[end] < x){
                start++;
            }
            else{
                end--;
            }
        }
    }
    return 0;
}