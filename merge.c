#include <stdio.h>

void merge(int a[], int l, int mid, int u) 
   {
       int b[u - l + 1];
       int lb = l;      
       int ub = mid + 1;
       int k = 0;      
          while (lb <= mid && ub <= u) 
             {
                if (a[lb] <= a[ub]) 
                  {
                     b[k++] = a[lb++];
                  }
                else 
                 {
                  b[k++] = a[ub++];
                 }
             }
         while (lb <= mid) 
          {
           b[k++] = a[lb++];
          }
        while (ub <= u) 
         {
           b[k++] = a[ub++];
         }

    for (int i = 0; i < k; i++)
      {
        a[l + i] = b[i];
      }
}


void mergesort(int a[], int l, int u)
    {
       if (l < u)
           {
              int mid =(l+u)/2;
              mergesort(a, l, mid);     
              mergesort(a, mid + 1, u);
              merge(a, l, mid, u);   
          }
    }


void main()
   {
      int a[] = {1, 7, 4, 2, 0};
      int n = sizeof(a) / sizeof(a[0]);
    mergesort(a, 0, n - 1);

   
    for (int i = 0; i < n; i++)
     {
        printf("%d ", a[i]);
     }
  }
