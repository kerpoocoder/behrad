#include<iostream>
using namespace std;
int main()
{
  int x='L',ans=0;
  while(x)
    {
      cout<<x%2;
      ans+=x%2;
      x/=2;
    }
  //cout<<ans<<endl;
}
/*
  {0,1,...,9}

  6*100000 + 8*10000 + ...+ 8*10 + 4

  {0,1,2}
  1 * 3^2 + 2 *3 + 0 =15
  (15)_10=(120)_3

  {0,1}

2*3^5+2*3^4+...+2
2*(3^0+...+3^5)
*/
