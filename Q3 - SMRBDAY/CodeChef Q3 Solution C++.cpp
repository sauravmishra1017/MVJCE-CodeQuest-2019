#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,p,count,sum;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    count=0,sum=0;
	    cin>>p;
	    for(int j=p;j>0;j--)
	    {
	        if((j & (j-1))==0)  //to check where j is a power of 2
	        {
	            if((sum+j)>p)
	                continue;
	            sum+=j;
	            count++;
	        }
	        if(sum==p)
	            break;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
