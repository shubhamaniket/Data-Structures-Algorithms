#include<bits/stdc++.h>
using namespace std;

void intersection(int a[],int b[],int n,int m){
	unordered_set<int> s;
	for(int i=0;i<n;i++){
		s.insert(a[i]);
	}
	int count = 0;
	for(int j=0;j<m;j++){
		if(s.find(b[j]) != s.end()){
			count++;
			s.erase(b[j]);
		}
	}
	cout << count;
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
	intersection(arr1,arr2,n,m);
	return 0;
}