#include<bits/stdc++.h>
using namespace std;

int main() {
	char str[1000],chr,temp;
	int n,flag;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    flag=0;
	    cin>>str>>chr;
	    for(int j=0;str[j]!='\0';j++)
	    {
	        if(str[j]==chr)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<str<<endl;
	    else
	    {   /* The following sorting algorithm can be written using inbuilt
	        command of bits/stdc++ as:
	        sort(str.begin()+1,str.begin()+str.length()-1);
	        */
	        for(int j=1;str[j+1]!='\0';j++)
	        {
	            for(int k=j+1;str[k+1]!='\0';k++)
	                if(str[j]>str[k])
	                {
	                    temp=str[j];
	                    str[j]=str[k];
	                    str[k]=temp;
	                }
	        }
	        cout<<str<<endl;
	    }
	}
	return 0;
}
