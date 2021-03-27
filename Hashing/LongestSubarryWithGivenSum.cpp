#include<bits/stdc++.h>
using namespace std;

int lonsub(int arr[],int n,int sum){
	unordered_map<int,int> m;
	int prefix=0,res=0;
	for(int i=0;i<n;i++){
		prefix += arr[i];
		if(prefix == sum){
			return max(res,i+1);
		}
		if(m.find(prefix) == m.end()){
			m.insert({prefix,i});
		}
		if(m.find(prefix-sum) != m.end()){
			res = max(res,i-m[prefix-sum]);
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
	int sum;
	cin >> sum;
	int res = lonsub(arr,n,sum);
	cout << res << endl;
	return 0;
}