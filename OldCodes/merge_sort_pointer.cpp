#include<iostream>
#include<vector>
using namespace std;
int b[100];

template<typename T>
void merge_sort(T l,T r)
{
  if(l==r)
    return;
  T mid=l+(r-l)/2;
  merge_sort(l,mid);//left side
  merge_sort(mid+1,r);//right side
  //merge
  T p=l;
  T q=mid+1;
  for(int i=0;i<=r-l;i++)
    {
      if(q>r)
	b[i]=*(p++);
      else if(p>mid)
	b[i]=*(q++);
      else if(*p>*q)
	b[i]=*(q++);
      else
	b[i]=*(p++);
    }
  for(int i=0;i<=r-l;i++)
    *(l+i)=b[i];
}
int main()
{
  long long n;
  vector<int>a(100);
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  //int *l=&(*(a.begin()));
  //int *r=&(*(a.end()-1));
  merge_sort(a.begin()+1,a.begin()+n);
  for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
  cout<<endl;
}

/*
[1 , 2 , 2 , 3 , 3 , 4 , 5 , 7]
[1 , 2 , 4 , 5] [2 , 3 , 3 , 7]
[2 , 4] [1 , 5] [3 , 3] [7 , 2]
[4] [2] [5] [1] [3] [3] [7] [2]

k*n

n -> n/2 -> n/4 -> n/8 -> ... ->n/n=1
n/2^k=1
2^k=n
k=log(n)

n*log(n)

t(1,n)=t(1,n/2)+t(n/2+1,n)+n=
t(1,n/4)+t(n/4+1,n/2)+t(n/2+1,3n/4)+t(3n/4+1,n)+2n=
+3n=...=t(1,1)+t(2,2)+...+t(n,n)+n*log(n)=n+nlog(n)
~ O(nlog(n))

 */
