#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int n;
            cin>>n;
            int a[n],b[n-1];
            for(int i=0;i<n;i++)
                {
                cin>>a[i];
            }
            sort(a,a+n);int min=10000001;
            for(int i=0;i<n-1;i++)
                {
                b[i]=a[i+1]-a[i];
                if(min>b[i])
                    min=b[i];
            }
          
           
            for(int i=0;i<n-1;i++)
                {
                if(b[i]==min)
                {cout<<a[i]<<" "<<a[i+1]<<" ";
            }
            }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

