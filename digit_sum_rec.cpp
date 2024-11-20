#include<iostream>
using namespace std;
int digit_sum(int n)
{
  if(n==0)
    return 0;
  return digit_sum(n/10) + n%10;
}
int main()
{
  cout<<digit_sum(4985673)<<endl;
  
}
/*
  4985673 / 10 = 498567
  f(4985673)= f(498567) + 4985673%10
  
  f(n) = f(n/10) + n%10

  f(n) = f(n/2) + 1 when n is even
  f(n) = f(3n+1) + 1 when n is odd

  f(40) = f(20) + 1

  f(i,j) : best path from cell(i,j) to bottom of the table

  f(i,j) should obtain from f(i+1,j) f(i+1,j+1)
 */
