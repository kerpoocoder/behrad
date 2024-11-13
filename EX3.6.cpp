#include<iostream>
using namespace std;
int dd=-1,dx=2;
void print_char(int d,char c)
{
  while(d--)
    cout<<c;
}
void print_line(int d,int x)
{
  print_char(d,'.');
  print_char(x,'x');
  print_char(d,'.');
  cout<<endl;
}
int main()
{
  int n;
  cin>>n;
  for(int i=1,d=n/2,x=1;i<=n;i++,d+=dd,x+=dx)
    {
      print_line(d,x);
      if(i==n/2+1)
	dd*=-1,dx*=-1;
    }
}
