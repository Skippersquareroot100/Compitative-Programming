#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long i=12345123451234;
  
    long long sum=0;
   long long  k=0; 
    while(i>0)
    {
        k=i%10;
        sum=sum+k;
        i=i/10;
    }   
    cout<<sum; 
}