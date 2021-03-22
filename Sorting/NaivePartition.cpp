/*
	Naive partitioning of an array for Quick Sort
	Bring the last element of the array to the correct position.
*/

#include<bits/stdc++.h>
using namespace std;

void NaivePartition(int arr[],int l,int h,int p){
	int temp[h-l+1],index = 0;
	for(int i=l;i<=h;i++){
		if(arr[i] <= arr[p]){
			temp[index] = arr[i];
			index++;
		}
	}
	for(int i=l;i<=h;i++){
		if(arr[i] > arr[p]){
			temp[index] = arr[i];
			index++;
		}
	}
	//Copying the elements to the original array
	for(int i=l;i<=h;i++){
		arr[i] = temp[i-l];
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	NaivePartition(arr,0,n-1,n-1);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}