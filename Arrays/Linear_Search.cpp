#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int n,x;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> x;
    int result = linearSearch(arr,n,x);
    cout << result << endl;
    return 0;
}