#include<bits/stdc++.h>
using namespace std;

bool bin_search(int x, int *a, int n){
    int l=0;
    int r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(x==a[m])
            return 1;
        if(x>a[m])
            l=m+1;
        else
            r=m-1;
    }
    return 0;
}

int main(){
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);
    if(bin_search(x, a, n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}