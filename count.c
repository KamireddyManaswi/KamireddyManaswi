#include<stdio.h>
void count(int *,int);

void main()
  {
     int a[]={1,7,5,3,2,8,0,7,5,1,0,7,4,3,8,9,9,3};
     int n=sizeof(a)/sizeof(a[0]);
   
   count(a,n);

   }

void count(int a[],int n)
{ 
 
     int k=a[0];
     int b[n];
        for(int i=1;i<n;i++)
           { 
             if(k<a[i])
                {
                  k=a[i];
                }
            }

      int count[k+1];

    for(int i=0;i<=k;i++)
       { 
         count[i]=0;
       }
    for(int i=0;i<n;i++)
       {
          b[i]=0;
       }

    for(int i=0;i<n;i++)
       {
          ++count[a[i]];
       }
     for(int i=1;i<=k;i++)
       {
         count[i]=count[i]+count[i-1];
       }

     for(int i=n-1;i>=0;i--)
      { 
         b[--count[a[i]]]=a[i];
      }
      for(int i=0;i<n;i++)
         {
           a[i]=b[i];
           printf("%2d",a[i]);
         }
  }