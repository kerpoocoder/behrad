#include<iostream>
using namespace std;
long long F[100];
long long f(long long n)
{
  if(F[n]>0)
    return F[n];
  if(n==1 || n==2)
    F[n]=1;
  else
    F[n]=f(n-1)+f(n-2);
  return F[n];
}
int main()
{
  cout<<f(83)<<endl;
}
/*
  improved fobonacci

  T(30)= T(29)+1
  T(29)= T(28)+1
  T(28)= T(27)+1
  T(27)= T(26)+T(25)
  ...

  T(n)=T(n-1)+1 = n
 */
/*
  T(n): time of running f(n)

  T(1)=1
  T(2)=1
  T(3)=2
  T(4)=3
  T(5)=5
  T(6)=8
  T(7)=13
  ...
  T(n)=T(n-1)+T(n-2)

  time complexity of f(n): O(f(n))

  f(30):1 time called
  f(29):1 time called
  f(28):2 time called
  f(27):3 ...
  f(26):5
  f(25):8
 */

/*
  f: N -> Z
  f(1)=1
  f(2)=1
  f(n)=f(n-1)+f(n-2) n>2
  f(1),f(2),f(3),...

  f: R -> R
  g: R -> R
  g(x)=3x-4
  f(x)=x^2
  f(3)=f(-3)
  f(11)=121
  g(11)=29

  h: R->Z
  h(x)=[x]

  f(x,y)=x+y
 */
