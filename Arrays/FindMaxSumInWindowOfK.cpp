/*
    Find the maximum sum subarray in an array of window size k.
*/

#include<bits/stdc++.h>
#include <chrono>
using namespace std;

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
    int initial_sum = 0;
    for(int i=0;i<k;i++){
        initial_sum += arr[i];
    }
    cout << initial_sum << endl;
    int max_sum = initial_sum;
    for(int i=k;i<n;i++){
        initial_sum += arr[i]-arr[i-k];
        max_sum = max(max_sum,initial_sum);
    }
    cout << max_sum << endl;
    
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << "Time taken by program is : " << fixed  << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}