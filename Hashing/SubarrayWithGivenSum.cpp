#include<bits/stdc++.h>
using namespace std;

bool givensum(int arr[],int n,int sum){
	unordered_set<int> s;
	int prefix = 0;
	for(int i=0;i<n;i++){
		if(prefix == sum){
			return true;
		}
		prefix += arr[i];
		if(s.find(prefix-sum) != s.end()){
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
	int sum;
	cin >> sum;
	if(givensum(arr,n,sum)){
		cout << "Found !";
	}
	else{
		cout << "Not Found !";
	}
	return 0;
}