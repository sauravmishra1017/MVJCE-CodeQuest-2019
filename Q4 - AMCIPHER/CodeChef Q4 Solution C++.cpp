#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,l,chr,ct;
    char r,am[6][6];
    cin>>n;
    while(n-->0)
    {
        chr=97;
        cin>>r;
        for(int i=1;i<6;i++)
        {
            for(int j=1;j<6;j++)
            {
                if(r==(char)chr)
                    chr++;
                am[i][j]=chr;
                //cout<<am[i][j]<<i<<j<<" ";
                chr++;
            }
        }
        cin>>l;
        while(l-->0)
        {
            cin>>ct;
            int row=ct/10;
            int column=ct%10;
            cout<<am[row][column];
        }
        cout<<endl;
    }
    return 0;
}
