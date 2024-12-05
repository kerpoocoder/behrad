#include<iostream>
using namespace std;
long long n=600851475143,ans;
int main()
{
  long long s=n;
  for(long long i=2;i*i<=s;i++){
    while(n%i==0)
      {
	ans=i;
	n/=i;
      }
  }
  cout<<max(ans,n)<<endl;
}
//n=p1*p2*...*pk-1*pk => p(k-1)<=sqrt(n)
