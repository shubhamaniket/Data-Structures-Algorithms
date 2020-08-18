//Insertion in a oneD array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int x,pos;
    cin >> x >> pos;
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = x;
    for(int i=0;i<n+1;i++){
        cout << arr[i] << "\n";
    }
    return 0;
}