#include<iostream>
#include<set>
#include<vector>
using namespace std;
set<vector<string> >v;
set<int>s;
int main()
{
  for(int i=1;i<100;i+=4)
    s.insert(i);
  cout<<s.size()<<endl;
  s.erase(21);
  cout<<s.size()<<endl;
  if(s.find(25)==s.end())
    cout<<"Nist"<<endl;
  else
    cout<<"Hast"<<endl;
  s.erase(1);
  cout<<*s.begin()<<" "<<*s.rbegin()<<endl;
  for(auto x:s)
    cout<<x<<" ";
}
