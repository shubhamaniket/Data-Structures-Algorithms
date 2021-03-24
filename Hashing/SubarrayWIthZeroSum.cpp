#include<bits/stdc++.h>
using namespace std;

bool zerosum(int arr[],int n){
	unordered_set<int> s;
	int prefix = 0;
	for(int i=0;i<n;i++){
		prefix += arr[i];
		if(s.find(prefix) != s.end()){
			return true;
		}
		if(prefix == 0){
			return true;
		}
		s.insert(prefix);
	}
	return false;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	if(zerosum(arr,n)){
		cout << "Found !";
	}
	else{
		cout << "Not Found !";
	}
	return 0;
}