//Maximum Circular Sum Subarray

#include<bits/stdc++.h>
#include <chrono>
using namespace std;

int kadanesum(int arr[],int n){
    int curr_sum = 0;
    int max = arr[0];
    for(int i=0;i<n;i++){
        curr_sum += arr[i];
        if(curr_sum > max){
            max = curr_sum;
        }
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }
    return max;
}
int minsum_subarray(int arr[],int n){
    int curr_sum = 0;
    int minsum = arr[0];
    for(int i=0;i<n;i++){
        curr_sum += arr[i];
        if(curr_sum < minsum){
            minsum = curr_sum;
        }
        if(curr_sum > 0){
            curr_sum = 0;
        }
    }
    return minsum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    auto start = chrono::high_resolution_clock::now();
    int total_sum = 0;
    for(int i=0;i<n;i++){
        total_sum += arr[i];
    }
    int kadane = kadanesum(arr,n);
    int minsum_sub = minsum_subarray(arr,n);
    if(kadane < 0){
        cout << kadane << endl;
    }
    int diff = total_sum - minsum_sub;
    cout << max(kadane,diff) << endl;


    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << "Time taken by program is : " << fixed  << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}