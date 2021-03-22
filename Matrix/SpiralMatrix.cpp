#include<bits/stdc++.h>
using namespace std;

int main(){
	int R,C;
	cin >> R >> C;
	int matrix[R][C];
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin >> matrix[i][j];
		}
	}
	int top=0,left=0,right=C-1,bottom=R-1;
	while(top <= bottom && left <= right){
		for(int i=left;i<=right;i++){
			cout << matrix[top][i] << " ";
		}
		top++;
		for(int i=top;i<=bottom;i++){
			cout << matrix[i][right] << " ";
		}
		right--;
		if(top <= bottom){
			for(int i=right;i>=left;i--){
				cout << matrix[bottom][i] << " ";
			}
			bottom--;
		}
		if(left <= right){
			for(int i=bottom;i>=top;i--){
				cout << matrix[i][left] << " ";
			}
			left++;
		}
	}
	return 0;
}