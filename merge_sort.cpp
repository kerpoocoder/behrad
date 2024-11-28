#include<iostream>
using namespace std;
int a[100],b[100],n;
void merge_sort(int l,int r)
{
  if(l==r)
    return;
  int mid=(l+r)/2;
  merge_sort(l,mid);//left side
  merge_sort(mid+1,r);//right side
  //merge
  int p=l,q=mid+1;
  for(int i=l;i<=r;i++)
    {
      if(q>r)
	b[i]=a[p++];
      else if(p>mid)
	b[i]=a[q++];
      else if(a[p]>a[q])
	b[i]=a[q++];
      else
	b[i]=a[p++];
    }
  for(int i=l;i<=r;i++)
    a[i]=b[i];
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  merge_sort(1,n);
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
