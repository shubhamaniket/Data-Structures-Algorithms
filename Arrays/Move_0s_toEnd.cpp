/*
Move all the zeroes to the end of the array.
e.g. arr[] = [1,0,1,2,0]
Output - [1,1,2,0,0]
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
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count] = arr[i];
            count++;
        }
    }
    while(count < n){
        arr[count] = 0;
        count++;
    }
    //Output array
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << "Time taken by program is : " << fixed  << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}