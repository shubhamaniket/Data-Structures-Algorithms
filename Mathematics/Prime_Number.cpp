// Effective way to check for Prime Number.
// This method can be used while competitive coding.
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1){14
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    if(isPrime(n)){
        cout << "Its a prime number !";
    }
    else{
        cout << "Its not a prime number !";
    }
    return 0;
}