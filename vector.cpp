#include<iostream>
#include<vector>
using namespace std;

int main()
{
  //vector<int> v(10); set size to 10
  //vector<int> v(10,3); set size to 10 and fill by 3
  vector<int> v={2,3,9,3,1,0,-5};
  cout<<v.size()<<endl;
  v.push_back(10);
  cout<<v.size()<<" "<<v[0]<<endl;
  for(int i=2;i<20;i+=3)
    v.push_back(i);
  v.pop_back();
  v.back()=3;//v[v.size()-1]=3;
  v.resize(14);//v.resize(14,6) fill extra cells by 6
  cout<<v.size()<<" "<<v[3]<<" "<<v.back()<<endl;
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
  cout<<endl;
  for(auto x:v)
    cout<<x<<" ";
  cout<<endl;
  v.clear();
  cout<<v.size()<<endl;
}
