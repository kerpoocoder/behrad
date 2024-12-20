#include<iostream>
#include<algorithm>
using namespace std;
struct student{
  int height,weight;
  bool s;
  string name;
  student(int h=0,int w=0,string nm="",bool ss=false)
  {
    height=h;
    weight=w;
    name=nm;
    s=ss;
  }
  string get_s()
  {
    if(s)
      return "boy";
    else
      return "girl";
  }
};
bool comp(student a,student b)
{
  //true if a<b and false o.w
  if(a.height<b.height)
    return true;
  else if(a.height>b.height)
    return false;
  if(a.weight<b.weight)
    return true;
  if(a.weight>b.weight)
    return false;
  return a.name<b.name;
}
int main()
{
  student a[10];
  a[0]=student(2,1,"c",false);
  a[1]=student(3,2,"a",true);
  a[2]=student(4,7,"b",false);
  a[4]=student(3,9,"d",false);
  a[3]=student(2,6,"e",true);

  sort(a,a+5,comp);
  for(int i=0;i<5;i++)
    cout<<a[i].name<<endl;
}
