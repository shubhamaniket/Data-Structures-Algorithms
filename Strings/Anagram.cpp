/*
	Anagram - strings having equal length and same
			  frequency of characters.
	i/p: spine, pines
	o/p: YES
	i/p: nice, cine
	o/p: YES
	i/p: hello, borll
	o/p: NO
*/

#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;

bool anagram(string str1,string str2){

	/*
	Easier Method but extra space :=
	
		sort(str1.begin(),str1.end());
		sort(str2.begin(),str2.end());
		return (str1 == str2);
	*/

	int n = str1.length();
	int m = str2.length();
	if(n != m){
		return false;
	}
	int count[CHAR] = {0};
	for(int i=0;i<n;i++){
		count[str1[i]]++;
		count[str2[i]]--;
	}
	for(int i=0;i<CHAR;i++){
		if(count[i] > 0){
			return false;
		}
	}
	return true;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		string s1,s2;
		cin >> s1 >> s2;
		if(anagram(s1,s2)){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
}