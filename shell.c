#include<stdio.h>
void shell(int*,int,int);
void main()
{
  int a[]={5,6,4,23,8,9,6};
  int n=sizeof(a)/sizeof(a[0]);
  int gap=(n-1)/2;
shell(a,n,gap);
for(int i=0;i<n;i++)
    {
     printf("%2d ",a[i]);
    }

}

void shell(int a[],int n,int gap)
{
   for(gap;gap>=1;gap=gap/2)
     {
       for(int j=gap;j<n;j++)
         {
           for(int i=j-gap;i>=0;i=i-gap)
             {
                if(a[i+gap]>a[i])
                  {
                    break;
                  }
                else
                {
                    int temp=a[i+gap];
                      a[i+gap]=a[i];
                      a[i]=temp;
                }
           }
       }
     }
} 