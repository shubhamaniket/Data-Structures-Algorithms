/*
    Given an number x find the floor of square root of x
    e.g. x = 10 ; Output = 3
*/

#include<bits/stdc++.h>
using namespace std;

int square_root(int x){
    int start = 1;
    int end = x;
    int ans = 1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid > x){
            end = mid - 1;
        }
        else{
            start = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = square_root(n);
    cout << ans << endl;
    return 0;
}