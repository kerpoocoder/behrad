#include<iostream>
using namespace std;
int main()
{
  long long x=10;
  cout<<&x<<endl;
  long long a[100]={1,2,3,4};
  cout<<*(&x+1)<<" "<<a<<" "<<a+1<<" "<<*(a-1)<<endl;
  a[5]=6;
  //*(a+5)=6;
  cout<<a[5]<<endl;
  
}
