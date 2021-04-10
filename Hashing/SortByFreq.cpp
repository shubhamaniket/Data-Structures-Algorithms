#include<bits/stdc++.h>
using namespace std;

bool sortbysec(pair<int,int> a,pair<int,int> b){
	return a.second < b.second;
}

void sortByFreq(int arr[],int n){
	map<int,int> m;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(auto x : m){
		v.push_back(make_pair(x.first,x.second));
	}
	sort(v.begin(),v.end(),sortbysec);
	for(auto itr=v.begin();itr!=v.end();itr++){
		int k = itr->second;
		while(k--){
			cout << itr->first << " ";
		}
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sortByFreq(arr,n);
	return 0;
}