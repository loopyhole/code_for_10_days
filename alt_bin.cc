#include<bits/stdc++.h>
using namespace std;

bool alt_bin(int *a, int n, int x){
    int k=0;
    for(int i=n/2; i>=1; i/=2){
        while((k+i)<n && a[k+i]<=x) k+=i;
    }
    if(a[k]==x)
        return 1;
    return 0;
}

int main(){
    int n, k;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);
    if(alt_bin(a, n, k))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}