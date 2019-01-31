#include<bits/stdc++.h>
using namespace std;
long a[1000000];
long merge(long start,long mid,long end);
long mergesort(long start,long end)
{
    long inv=0;
    if(start<end)
    {
        long mid=(start+end)/2;
        inv=mergesort(start,mid);
        inv+=mergesort(mid+1,end);
        inv+=merge(start,mid,end);
    }
    return inv;
}   
long merge(long start,long mid,long end)
{
    long p=start;
    long q=mid+1;
    long k=0;
    long inv=0;
    long arr[end-start+1];
    for(long i=start;i<=end;i++)
    {
       if(p>mid)
       {
         arr[k++]=a[q++];
       }
       else if(q>end)
       {
        arr[k++]=a[p++];
       }
       else if(a[p]>a[q])
       {
         arr[k++]=a[q++];
         inv=inv+mid-p+1;
       }
       else
       {
          arr[k++]=a[p++];
       }
    }
    long j=0;
    for(long i=start;i<=end;i++)
    {
        a[i]=arr[j++];
    }
    return inv;
}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,res;
        cin>>n;
        for(long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<endl;
        res=mergesort(0,n-1);
        cout<<res<<endl;
    }
}