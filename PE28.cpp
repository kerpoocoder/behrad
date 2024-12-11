#include<iostream>
#include <sys/resource.h>

using namespace std;
int n=1001,a[1004][1004],ans;
void go(int i,int j,int c)
{
  if(j>n)
    return;
  a[i][j]=c;
  if(i==j || i+j==n+1)
    ans+=c;
  if(i<j && i+j>n+1)
    go(i+1,j,c+1);
  else if(i>=j && i+j>n+1)
    go(i,j-1,c+1);
  else if(i>j && i+j<=n+1)
    go(i-1,j,c+1);
  else if(i<=j && i+j<=n+1)
    go(i,j+1,c+1);
}
int main()
{
  rlimit rlim;
  if (getrlimit(RLIMIT_STACK, &rlim)) return 1;
  rlim.rlim_cur = 1024*1024*1024;
  if (setrlimit(RLIMIT_STACK, &rlim)) return 2;
  go(n/2+1,n/2+1,1);
  /*for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
      cout<<a[i][j]<<" \n"[j==n];*/

  cout<<ans<<endl;
  
}
