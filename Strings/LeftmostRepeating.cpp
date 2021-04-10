/*
	Leftmost repeating character in a word
	i/p: abccbdd
	o/p: 1
	i/p: shubham
	o/p: 1
	i/p: geeksforgeeks
	o/p: 0
	i/p: redpdrr
	o/p: 2
*/

#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;
int leftmost(string s){
	int count[CHAR] = {0};
	for(int i=0;i<s.length();i++){
		count[s[i]]++;
	}
	for(int i=0;i<s.length();i++){
		if(count[s[i]] > 1){
			return i;
		}
	}
	return -1;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		string s;
		cin >> s;
		int ans = leftmost(s);
		cout << ans << endl;
	}
	return 0;
}