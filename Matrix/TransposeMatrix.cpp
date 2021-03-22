#include<bits/stdc++.h>
using namespace std;

int main(){
	int R,C;
	cin >> R >> C;
	int arr[R][C];
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin >> arr[i][j];
		}
	}
	for(int i=0;i<R-1;i++){
		for(int j=i+1;j<C;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	/*Printing the transpose matrix*/
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}