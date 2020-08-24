/*
Given an array of size n & k we have to find the kth smallest
positive missing number.
e.g. arr[] = [1,3,5,8,9] ; k = 2
here the missing numbers are = [2,4,6,7] and k=2 means 2nd smallest
number output = 4
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int H[1000];
    for(int i=0;i<1000;i++){
        H[i] = 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            H[arr[i]]++;
        }
    }
    //Pushing all the missing numbers in the vector.
    vector<int> v;
    for(int i=1;i<1000;i++){
        if(H[i] == 0){
            v.push_back(i);
        }
    }
    cout << v[k-1] << endl;
    return 0;
}