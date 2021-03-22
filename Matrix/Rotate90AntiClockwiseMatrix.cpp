#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n][n];
	/*2D Array Input*/
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> arr[i][j];
		}
	}
	/*Transposing the Matrix*/
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	/*Reversing the columns*/
	for(int i=0;i<n;i++){
		int low = 0,high = n-1;
		while(low < high){
			swap(arr[low][i],arr[high][i]);
			low++;
			high--;
		}
	}
	/*Printing the rotate 90 deg anti-clockwise matrix*/
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}