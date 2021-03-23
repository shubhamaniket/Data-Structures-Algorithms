#include<bits/stdc++.h>
using namespace std;

void union_ele(int a[],int b[],int n,int m){
	unordered_set<int> s;
	for(int i=0;i<n;i++){
		s.insert(a[i]);
	}
	for(int i=0;i<m;i++){
		s.insert(b[i]);
	}
	cout << s.size();
}
int main(){
	int n,m;
	cin >> n >> m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++){
		cin >> arr1[i];
	}
	for(int i=0;i<m;i++){
		cin >> arr2[i];
	}
	union_ele(arr1,arr2,n,m);
	return 0;
}