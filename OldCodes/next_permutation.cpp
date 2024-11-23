#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a[10]={5,2,2,2,1};
  int x;
  cout<<a[3]<<endl;
  do{
    for(int i=0;i<5;i++)
      cout<<a[i]<<" ";
    cout<<endl;
  }while(prev_permutation(a+1,a+5));
  //for(int i=0;i<5;i++)cout<<a[i]<<" ";
}
