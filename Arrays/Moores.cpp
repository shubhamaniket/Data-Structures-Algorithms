/*
In this we calculate the majority element's index using Moore's Voting Algorithm.
*/

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
    int count = 1, res=0;
    for(int i=1;i<n;i++){
        if(arr[res] == arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            count = 1;
            res = i;
        }
    }
    cout << res << endl;
    
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << "Time taken by program is : " << fixed  << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}