#include<bits/stdc++.h>
using namespace std;

void getUnion(int a[], int b[], int m, int n){
    
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i-1]==a[i]){i++;continue;}
        if(j>0 && b[j-1]==b[j]){j++;continue;}
        if(a[i]<b[j]){cout<<a[i]<<" ";i++;}
        else if(a[i]>b[j]){cout<<b[j]<<" ";j++;}
        else{cout<<a[i]<<" ";i++;j++;}
    }
        while(i<m){if(i==0||a[i]!=a[i-1])cout<<a[i]<<" ";i++;}
        while(j<n){if(j==0||b[j]!=b[j-1])cout<<b[j]<<" ";j++;}
}

int main(){
    int n,m;
    cin >> m >> n;
    int a[m],b[n];
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    for(int j=0;j<n;j++){
        cin >> b[j];
    }
    getUnion(a,b,m,n);
    return 0;
}