#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
                {
                cin>>a[i];
            }
            sort(a,a+n);
            n=n/2;
            cout<<a[n];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

