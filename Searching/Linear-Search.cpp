/*
Linear Search
Searching an element in an array.
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
    int i = 0;
    for(i=0;i<n;i++){
        if(arr[i] == x){
            cout << "Element found at index : " << i;
            break;
        }
    }
    if(i==n){
        cout << "Element not found !";
    }
    return 0;
}