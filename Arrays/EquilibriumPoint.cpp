/*
Find a point such that elements adding before it is 0 and elements after adding it zero.
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
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int lsum = 0;
    int equilibriumPt = -1;
    for(int i=0;i<n;i++){
        sum -= arr[i];
        if(lsum == sum){
            equilibriumPt = i;
        }
        lsum += arr[i];
    }
    cout << equilibriumPt << endl;

    
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << "Time taken by program is : " << fixed  << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}