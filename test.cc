#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
	int no=0;
	// Your logic here
	for(int i=1; i<=n; i++)
		no+=set_bits(i);
	return no;
}

int main(){
	for(int i=1; i<30; i++)
		cout<<countSetBits(i)<<endl;
	return 0;
}
