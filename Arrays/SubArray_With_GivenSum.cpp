/*
Given Sum check if there is a subarray with given sum.
*/
#include<bits/stdc++.h>
#include <chrono>
using namespace std;

bool fun(int arr[],int n,int k){
    int curr_sum = arr[0];
    int start = 0;
    for(int i=1;i<n;i++){
        if(curr_sum < k){
            curr_sum += arr[i];
        }
        else{
            while(curr_sum > k){
                curr_sum -= arr[start];
                start++;
            }
            if(curr_sum == k){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    auto start = chrono::high_resolution_clock::now();
    bool res = fun(arr,n,k);
    cout << res << endl;

    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << "Time taken by program is : " << fixed  << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}