/*
Floor in a sorted array

arr = [1,5,10,15,15,20,25]  
x = 11  Output = 10
x = 1 Output = 1
x = 25 Output = 25
x = 50 Output = 25
*/

#include<bits/stdc++.h>
using namespace std;

int floorsearch(int arr[],int n,int x){
    int start,end;
    if(x < arr[0]){
        return -1;
    }
    if(x >= arr[n-1]){
        return n-1;
    }
    start = 0;
    end = n - 1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            if(mid+1 <= end && arr[mid+1] > x){
                return mid;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(mid-1>=start && x >= arr[mid-1]){
                return mid-1;
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
    int floorindex = floorsearch(arr,n,x);
    if(floorindex == -1){
        cout << "Floor : Not Found !" << endl;
    }
    else{
        cout << arr[floorindex] << endl;
    }
    return 0;
}