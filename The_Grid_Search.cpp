#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,flag,a,b,c,d;
    cin >> t;
    
    for(int i=0;i<t;i++)
        {
        cin>>a>>b;
        char e[a][b];
        for(int j=0;j<a;j++)
            {
            cin>>e[j];
        }
        cin>>c>>d;
        char f[c][d];
        for(int j=0;j<c;j++)
            cin>>f[j];
        for(int j=0;j<a;j++)
            {
            for(int k=0;k<b;k++)
                { flag=0;
                if(e[j][k]==f[0][0])
                    {
                    for(int z=0;z<c&&(j+z)<a;z++)
                        {
                        for(int y=0;y<d&&(k+y)<b;y++)
                            {
                            if(e[j+z][k+y]==f[z][y])
                            {flag++; if(flag==(c*d))
                            {goto last;  }}
                            else 
                         goto las;
                        }
                        }
                    }las: ;
                }
            }last:
        if(flag==(c*d))
            cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        }
    
    return 0;
}

