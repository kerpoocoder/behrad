#include<iostream>
#include<map>
using namespace std;
map<string,int>m;
int main()
{
  m["behrad"]=14;//m.insert(make_pair("behrad",14))
  m["behrad"]=15;//log(n)
  cout<<m.size()<<endl;
  if(m.find("ali")!=m.end())
    cout<<m["ali"]<<endl;
  //m.erase("behrad");
  m.insert(make_pair("ali",12));//m["ali"]=12
  m["maryam"]=11;
  cout<<m.size()<<endl;
  for(auto p:m)
    cout<<p.first<<" "<<p.second<<endl;
}
