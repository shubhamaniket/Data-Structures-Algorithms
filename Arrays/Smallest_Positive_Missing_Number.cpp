/*
    Smallest Postive Missing Number
    e.g. arr[] = [1,0,3,4,5]
    output - 2 
*/

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
    //Initialzing an array as zero.
    int H[1000];
    for(int i=0;i<1000;i++){
        H[i] = 0;
    }
    //Incrementing all the position to 1 where arr[i]>0
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            H[arr[i]]++;
        }
    }
    //Checking until we find 1 and then returning the index.
    int x;
    for(int i=1;i<1000;i++){
        if(H[i] == 0){
            x = i;
            break;
        }
    }
    cout << x << endl;
    return 0;
}