#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int bin(int p)
{
    int temp[100000];
    int g=0;
    int temp_reverse[100000];
    int rep[100000];
    while(p>0)
    {
        temp[g]=p%2;
        p=p/2;
        g++;
    }
    for(int j=0;j<g;j++)
    {
        temp_reverse[j]=temp[g-j-1];
    }
    for(int i=0;i<g;i++)
    {
        if(temp_reverse[i]==0)
        {
            rep[i]=1;
        }
        else
        {
            rep[i]=temp_reverse[i];
        }
    }
    int num=0;
    for(int i=0;i<g;i++)
    {
        int f=rep[g-i-1];
        int exp=pow(2,i);
        num=num+exp*f;
    }
    return num;
    num=0;
    for(int i=0;i<g;i++)
    {
        temp[i]=0;
        temp_reverse[i]=0;
        rep[i]=0;
    }

}
int main()
{
    int t;
    cin>>t;
    int n;
    int part;
    int out[100000];
    int out2[100000];
    int diff;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        part=bin(n);
        out[i]=part;
        diff=part-n;
        out2[i]=diff;
    }
    for(int j=0;j<t;j++)
    {
        cout<<out2[j]<<" "<<out[j];
        cout<<"\n";
    }
}
