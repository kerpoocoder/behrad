#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define bignum vector<int>
bignum sum(bignum a,bignum b)
{
  int sz=max(a.size(),b.size())+1;
  a.resize(sz);
  b.resize(sz);
  //bignum sum
  if(a.back()==0)
    a.pop_back();
  return a;
}
bignum prd(bignum a,int k)
{
  a.resize(a.size()+10);
  //bignum product
  while(a.back()==0)
    a.pop_back();
  return a;
}
int digit_sum(bignum a)
{
  int ret=0;
  for(auto d:a)
    ret+=d;
  return ret;
}
bignum get_bignum()
{
  bignum ret;
  string s;
  cin>>s;
  for(int i=s.size()-1;i>=0;i--)
    ret.push_back(s[i]-'0');
  return ret;
}
void solve16()
{
  bignum ans={1};
  for(int i=0;i<1000;i++)
    ans=prd(ans,2);
  cout<<"16: "<<digit_sum(ans)<<endl;
}
int main()
{
  solve13();
  solve16();
  solve20();
  solve25();
  bignum ans={1};
  
  //for(int i=1;i<=100;i++)
  //  ans=prd(ans,i);
  //cout<<digit_sum(ans)<<endl;
  for(int i=0;i<100;i++)
    ans=sum(ans,get_bignum());
  
}
