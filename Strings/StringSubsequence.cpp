/*
	Check if a string is a subsequence of the 
	other or not
	i/p: ABCDE, ADE
	o/p: YES
	i/p: ABCDE, AEB
	o/p: NO (since second string not in order)
*/

#include<bits/stdc++.h>
using namespace std;

bool subseq(string str1,string str2){
	int n = str1.length();
	int m = str2.length();
	//Corner Cases
	if(m == 0){
		return true;
	}
	if(n < m){
		return false;
	}
	int j = 0;
	for(int i=0;i<n && j<m;i++){
		if(str1[i] == str2[j]){
			j++;
		}
	}
	return (j == m);
}

int main(){
	string s1,s2;
	cin >> s1 >> s2;
	if(subseq(s1,s2)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}