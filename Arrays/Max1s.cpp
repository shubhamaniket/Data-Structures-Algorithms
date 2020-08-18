// Maximum consecutive 1s in an Array

#include<bits/stdc++.h>
using namespace std;

int max1s(int arr[],int n){
    int current = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            count = 0;
        }
        else{
            count++;
            current = max(current,count);
        }
    }
    return current;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int result = max1s(arr,n);
    cout << result;
    return 0;
}