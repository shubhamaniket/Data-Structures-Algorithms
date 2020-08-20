/*
Given N ranges in two arrays find the max common appearing element in all of them.
e.g. L[] = [1,2,5,15]
     R[] = [5,8,7,18]

     Hence,there becomes 4 arrays like :-
     arr1[] = [1,2,3,4,5]
     arr2[] = [2,3,4,5,6,7,8]
     arr3[] = [5,6,7]
     arr4[] = [15,16,17,18] 

     Hence Output - 5, which is the maximum appearing element
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
    int L[n],R[n];
    for(int i=0;i<n;i++){
        cin >> L[i];
    }
    for(int i=0;i<n;i++){
        cin >> R[i];
    }
    auto start = chrono::high_resolution_clock::now();
    vector<int> v;
    for(int i=0;i<n;i++){
        for(int j=L[i];j<=R[i];j++){
            v.push_back(j);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << "Time taken by program is : " << fixed  << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}