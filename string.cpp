#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s="hello",t,w;
  cout<<s<<" "<<s.size()<<endl;
  cout<<s.substr(1,3);
  if(s.find("ell")!=string::npos)
    cout<<"found "<<s.find("ell")<<endl;
  else
    cout<<"Not found"<<endl;
  cin>>s>>t;
  getline(cin,w);
  cout<<s<<endl;
  cout<<t<<endl;
  cout<<w<<endl;
}
