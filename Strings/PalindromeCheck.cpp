/*
	Palindrome check
	i/p : bob
	o/p : YES
	i/p : geeksforgeeks
	o/p : NO
*/

#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str){
	int start = 0;
	int end = str.length() - 1;
	while(start < end){
		if(str[start] != str[end]){
			return false;
		}
		start++;
		end--;
	}
	return true;
}

int main(){
	string s;
	cin >> s;
	if(palindrome(s)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}