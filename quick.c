#include<stdio.h>

void swap1(int *a,int *b)
 { 
   int temp=*a;
   *a=*b;
   *b=temp;
 
 }

int sort(int a[],int lb,int ub)
  {
    int l=lb,u=ub;
    int p=a[lb];
   while(l<u)
      {
        while(a[l]<=p && l<ub)
          {
            l++;
          }
           while(a[u]>p)
               {
                 u--;
               }
           if(l<u)
            {
               swap1(&a[l],&a[u]);
            }
       }
     swap1(&a[lb],&a[u]);

      return u;
}


void quicksort(int a[],int lb,int ub)
{
      if(lb<ub)
        {
          int loc=sort(a,lb,ub);
          quicksort(a,lb,loc-1);
          quicksort(a,loc+1,ub);
        }
}



void main()
{
   int a[]={4,7,8,0,2,1};
   int lb=0,ub=sizeof(a)/sizeof(a[0])-1;

     quicksort(a,lb,ub);
   printf("sorted array\n");
      for(int i=0;i<6;i++)
        {
           printf("%2d",a[i]);
        }

}