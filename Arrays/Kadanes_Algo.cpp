// Maximum continous Sum subarray
// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.


#include<bits/stdc++.h>
#include <chrono>
using namespace std;

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
    int current_sum = 0;
    int max = arr[0];
    for(int i=0;i<n;i++){
        current_sum += arr[i];
        if(current_sum > max){
            max = current_sum;
        }
        if(current_sum < 0){
            current_sum = 0;
        }
    }
    cout << max << endl;
    // Time Execution of the program.
    auto end = chrono::high_resolution_clock::now(); 
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
  
    time_taken *= 1e-9; 
  
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(9); 
    cout << " sec" << endl;  
    return 0;
}