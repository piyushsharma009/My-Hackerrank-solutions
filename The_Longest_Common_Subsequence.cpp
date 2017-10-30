#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int n,m;
            cin>>n>>m;
       vector<int> a(n),b(m);
            for(int i=0;i<n;i++)
            cin>>a[i];
            for(int i=0;i<m;i++)
                cin>>b[i];
            int c[m+1][n+1];
            for(int i=0;i<n+1;i++)
                c[0][i]=0;
            for(int i=1;i<m+1;i++)
                c[i][0]=0;
            for(int i=1;i<m+1;i++)
                {
                for(int j=1;j<n+1;j++)
                    {
                    if(a[j-1]==b[i-1])
                        c[i][j]=c[i-1][j-1]+1;
                    else
                        c[i][j]=max(c[i-1][j],c[i][j-1]);             
                }
            }
           
            
            vector<int> v;
            int k=c[m][n];int x=m,y=n;
            while(k!=0)
                {
                if((c[x-1][y]==c[x][y])||(c[x][y-1]==c[x][y]))
                    {
                    if(c[x-1][y]==c[x][y])
                        {
                        x=x-1;
                        
                        }
                     else
                         {
                         y=y-1;
                         }
                }
                else
                    {
                    v.push_back(b[x-1]);
                    x=x-1;
                    y=y-1;k--;
                }
            }
            for(int i=v.size()-1;i>=0;i--)
                cout<<v[i]<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

