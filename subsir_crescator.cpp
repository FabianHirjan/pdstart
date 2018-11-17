// Subsir crescator
#include<iostream>
using namespace std;
int n;
int a[100];
int l[100], poz[100];
int main()
{
cout<<"n=";cin>>n;
for(int i = 0; i<n;i++)
{
    cin>>a[i];
}
int j;
l[n] = 1; poz[n] = -1;
for(int i = n-1; i>0; i--)
    for(l[i] = 1, poz[i] = -1, j=i+1;j<=n;j++)
        if(a[i] <= a[j] && l[i] < i+l[j])
    {
        l[i] = 1+l[j]; poz[i] = j;
    }

     int max= l[1], pozmax = 1;
     for(int i = 2; i<=n;i++)
     {
         if(max < l[i]) {max = l[i]; pozmax = i;}
     }
     cout << "Cel mai lung subsir = " << max;
     cout << endl;
     for(int i = pozmax; i!=-1; i=poz[i]) cout << a[i] << " ";
}
