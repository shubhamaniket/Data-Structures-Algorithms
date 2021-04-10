/*
	Count of characters in a given word
	i/p : geeksforgeeks
	o/p : 
	g -> 2
	e -> 4
	k -> 2
	s -> 2
	f -> 1
	o -> 1
	r -> 1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int CHARS = 26;
	int count[CHARS] = {0};
	for(int i=0;i<s.length();i++){
		count[s[i] - 'a']++;
	}
	for(int i=0;i<CHARS;i++){
		if(count[i] > 0){
			cout << (char)(i+'a') << " -> " << count[i] << endl;
		} 
	}
	return 0;
}