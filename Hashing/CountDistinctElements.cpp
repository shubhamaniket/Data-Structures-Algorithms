/*
	Count of distinct elements
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	unordered_set<int> s;
	for(int i=0;i<n;i++){
		s.insert(arr[i]);
	}
	cout << s.size();
	return 0;
}