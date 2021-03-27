#include<bits/stdc++.h>
using namespace std;

int findLongest(int arr[],int n){
	int res = 0;
	unordered_set<int> s;
	for(int i=0;i<n;i++){
		s.insert(arr[i]);
	}
	for(int i=0;i<n;i++){
		if(s.find(arr[i]-1) == s.end()){
			int curr = 1;
			while(s.find(arr[i]+curr) != s.end()){
				curr++;
			}
			res = max(res,curr);
		}
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int output = findLongest(arr,n);
	cout << output;
	return 0;
}