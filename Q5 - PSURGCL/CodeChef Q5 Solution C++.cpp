#include<bits/stdc++.h>
using namespace std;

int main() {
    int x,y,path=1,temp,grid[1000][1000],i,j,zcount=0,tcount=0;
    cin>>x>>y;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]==0)
                zcount++;
        }
    }
    i=1;j=1;
    while(i<=x && j<=y && tcount<zcount)
    {
        cout<<((i-1)*y)+j<<" ";
        if(i==x && j==y)
            break;
        if(grid[i][j]==0)
        {
            tcount++;
            if(grid[i][j+1]==0)
            {
                grid[i][j]=1;
                j=j+1;
            }
            else if(grid[i+1][j]==0)
            {
                grid[i][j]=1;
                i=i+1;
            }
            else if(grid[i][j-1]==0)
            {
                grid[i][j]=1;
                j=j-1;
            }
            else if(grid[i-1][j]==0)
            {
                grid[i][j]=1;
                i=i-1;
            }
        }
    }
    return 0;
}
