/*
    Merge Two Sorted Arrays
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int a[m],b[n];
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    vector<int> v;
    for(int i=0;i<m;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<n;i++){
        v.push_back(b[i]);
    }
    sort(v.begin(),v.end());
    cout << "Sorted Array :-";
    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    return 0;
}