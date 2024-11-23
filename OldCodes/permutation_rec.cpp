#include<iostream>
using namespace std;
int n,p[20];
bool mark[20];
void perm(int i)
{
  if(i==n+1)
    {
      for(int i=1;i<=n;i++)
	cout<<p[i]<<" ";
      cout<<endl;
      return;
    }
  for(int x=1;x<=n;x++)
    if(!mark[x])
      {
	p[i]=x;
	mark[x]=true;
	perm(i+1);
	mark[x]=false;
      }	
}
int main()
{
  cin>>n;
  perm(1);
}
/*
  1,2,3,4

  3241
  1432
  4321
  ...

  []

  T(i) : time perm(i)
  T(1)=n*(n-1)*(n-2)*(n-3)*T(5) = n!
  T(2)=(n-1)*T(3)
  T(3)=(n-2)*T(4)

  
 */
