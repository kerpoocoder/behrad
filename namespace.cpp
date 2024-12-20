#include<iostream>
#include<vector>
//using namespace std;
namespace golabi{
  int a=10,b=11;
  namespace golabitar{
    int c=10;
  }
  int cout=2;
}
int main()
{
  using namespace golabi;
  std::cout<<golabitar::c<<std::endl;
  golabi::cout++;
  std::cout<<cout<<std::endl;
  //int vector;
  //vector=10;
  //vector<int>v;
  //std::vector<int>v;
}
