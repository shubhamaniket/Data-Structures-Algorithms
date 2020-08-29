/*
    There are 2 sorted arrays A and B of size n each. 
    Write an algorithm to find the median of the array obtained after merging the above 2 arrays(i.e. array of length 2n). The complexity should be O(log(n)).
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    vector<int> v;
    for(int i=0;i<n1;i++){
        v.push_back(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        v.push_back(arr2[i]);
    }
    sort(v.begin(),v.end());
    int median;
    if(v.size()%2 == 0){
        int first_index = v.size()/2 - 1;
        int last_index = v.size()/2;
        median = (v[first_index]+v[last_index])/2;
    }
    else{
        int index = v.size()/2;
        median = v[index];
    }
    cout << median << endl;
    return 0;
}