#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,k;
        cin>>n>>p;
        vector<int> a(n+1,0);
        for(int i=0;i<p;i++)
        {
            cin>>k;
            int j=k;
            while(j<=n)
            {
                a[j]++;
                j=j+k;
            }
        }
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            if(i%7!=0 && i%7!=6 && a[i]!=0)
            {
                sum++;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
