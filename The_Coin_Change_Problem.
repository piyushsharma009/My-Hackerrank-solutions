#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m,n;
    cin>>m>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
 unsigned long  int v[n][m+1];
    for(int i=0;i<n;i++)
        v[i][0]=1;
       for(int i=0;i<n;i++)
        {
         for(int j=1;j<=m;j++)
             {
             if(a[i]<=j)
                 {
                 if(i==0)
                     {if(j%a[i]==0)
                     v[i][j]=1;
                      else
                          v[i][j]=0;
                     }
                  
                 else
                     {
                     v[i][j]=v[i][j-a[i]]+v[i-1][j];
                 }
                     
             }
             else
                 if(i==0)
                  v[i][j]=0;
                 else
                 v[i][j]=v[i-1][j];
         }
       
    }
    
        cout<<v[n-1][m];
         
       
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

