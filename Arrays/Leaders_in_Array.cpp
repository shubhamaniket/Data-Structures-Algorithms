/*
Write a program to print all the LEADERS in the array. 
An element is leader if it is greater than all the elements to its right side. 
And the rightmost element is always a leader. 
For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2. 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int current = arr[n-1];
    vector<int> v;
    v.push_back(current);
    for(int i=n-2;i>=0;i--){
        if(arr[i] > current){
            current = arr[i];
            v.push_back(arr[i]);
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    return 0;
}