#include <iostream>
using namespace std;

int main() {
	int m,c,p1=0,p2=0,i=0,ate;
	cin>>m>>c;
	int slice=(m/c)*6;
	while(slice>0)
	{
	    cin>>ate;
	    if(i%2==0)
	        p1+=ate;
	    else
	        p2+=ate;
	    slice-=ate;
        i++;
	}
	if(p1>p2)
		cout<<"Arjun";
	else
		cout<<"Sara";
	return 0;
}
