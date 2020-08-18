// Left rotating by d elements in an array
// e.g. [1,2,3,4,5,6] left rotating by '2' elements we get [3,4,5,6,1,2]
// Input size of array,array elements & d

#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    for(int i=0;i<d;i++){
        leftRotate(arr,n);
    }
    cout << "Left Rotated by " << d << " elements :- ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}