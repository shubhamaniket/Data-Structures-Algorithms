/*
Input:  arr[] = {12, 13, 1, 10, 34, 1}
Output: The smallest element is 1 and 
        second Smallest element is 10
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
    int first,second;
    first = second = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] < second && arr[i]!=first){
            second = arr[i];
        }
    }
    if(second == INT_MAX){
        cout << "No second smallest element !" << endl;
    }
    else{
        cout << first << " " << second << endl;
    }
    return 0;
}