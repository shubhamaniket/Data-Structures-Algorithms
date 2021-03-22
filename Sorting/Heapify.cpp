/*
	Change given array to a Max Heap
*/

#include<bits/stdc++.h>
using namespace std;

void Heapify(int arr[],int index,int size){
	/*
		Get the left & right child of a node
	*/
	int left = 2*index + 1;
	int right = left + 1;

	int max = index;

	if(left <= size && arr[left] > arr[max]){
		max = left;
	}
	if(right <= size && arr[right] > arr[max]){
		max = right;
	}
	/*
		if the max is updated then swap and call
		the Heapify function again
	*/
	if(index != max){
		swap(arr[max],arr[index]);
		Heapify(arr,max,size);
	}
}

void buildHeap(int arr[],int size){
	/*
		Get the bottom most layer of the heap
	*/
	for(int i=size/2;i>=0;i--){
		Heapify(arr,i,size);
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	buildHeap(arr,n-1);
	cout << "Max Heap :- " << endl;
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}