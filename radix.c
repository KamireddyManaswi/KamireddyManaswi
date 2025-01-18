#include<stdio.h>

void radix(int a[],int n,int psn)
   {
     int count[10]={0};
     int b[n];
        for(int i=0;i<n;i++)
          {  
            ++count[(a[i]/psn)%10];
           }

       for(int i=1;i<10;i++)   
          {
             count[i]=count[i]+count[i-1];
           }
      for(int i=n-1;i>=0;i--)
         {
             b[--count[(a[i]/psn)%10]]=a[i];
         }
       for(int i=0;i<n;i++)
        {
          a[i]=b[i];
         }
}

void main()
 {
    int a[]={1,44,5555,66,7,356,78,23};
    int n=sizeof(a)/sizeof(a[0]);
    int k=a[0];
      for(int i=1;i<n;i++)
         {
           if(k<a[i])
              {
                k=a[i];
              }
         }
     for(int psn=1;k/psn>0;psn*=10)
        {
          radix(a,n,psn);
        }
      for(int i=0;i<n;i++)
         {
           printf("%2d ",a[i]);
         }
  }