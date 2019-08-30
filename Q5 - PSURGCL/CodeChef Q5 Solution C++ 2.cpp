#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,l,chr,ct;
    char r,am[6][6];
    cin>>n;
    while(n-->0)
    {
        cin>>r>>l;
        while(l-->0)
        {
            cin>>ct;
            int row=ct/10;
            int column=ct%10;
            cout<<(char)(97+((row-1)*5)+column);
        }
        cout<<endl;
    }
    return 0;
}
