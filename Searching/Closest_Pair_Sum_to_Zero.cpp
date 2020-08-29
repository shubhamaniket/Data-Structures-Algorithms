/*
An Array of integers is given, both +ve and -ve. You need to find the two elements such that their sum is closest to zero.
arr[] = [1, 60, -10, 70, -80, 85]
output - -80 & 85
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
    sort(arr,arr+n);
    int sum,min_sum = INT_MAX;
    int start = 0,end = n - 1;
    int min_l = 0,min_e = n - 1;
    while(start<end){
        sum = arr[start] + arr[end];
        if(abs(sum) < abs(min_sum)){
            min_sum = sum;
            min_l = start;
            min_e = end;
        }
        if(sum < 0){
            start++;
        }
        else{
            end--;
        }
    }
    cout << "[" << arr[min_l] << "," << arr[min_e] << "]" << endl;
    return 0;
}