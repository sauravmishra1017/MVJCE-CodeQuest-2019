#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,p,count;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    count=0;
	    cin>>p;
        while(p!=0)
        {
	        if(p%2!=0)
	            count++;
	        p/=2;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
