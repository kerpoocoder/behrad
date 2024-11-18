#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("input11.txt");
ofstream fout("output11.txt");
int a[100][100],ans;
int main()
{
  for(int i=11;i<=30;i++)
    for(int j=11;j<=30;j++)
      fin>>a[i][j];

  for(int i=11;i<=30;i++)
    for(int j=11;j<=30;j++)
      {
	ans=max(ans,a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]);
	ans=max(ans,a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]);
	ans=max(ans,a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]);
	ans=max(ans,a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3]);
      }
  fout<<"Problem 11: "<<ans<<endl;}
