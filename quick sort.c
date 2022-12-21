#include<stdio.h>
#include<conio.h>

int n;
void sort();
 main()
 {
    int a[10], i,l,r;
    printf("Enter no of Elements :");
    scanf("%d", &n);
    printf("\n Enter %d elements :", n);
    for(i=0;i<n; i++)
        scanf("%d", &a[i]);

        printf("\nElements of array : ");
        for(i=0; i<n; i++)
        printf("%d", a[i]);

            l = 0;
            r = n-1;

            sort (a,l,r);
        printf("\nAfter quick sort : ");
        printf("\n");
            for(i=0; i<n; i++)
            printf("%d", a[i]);
     getch();
 }
  void sort(b, left, right)
  int b[10], left, right;
  {
    int i,j,p, temp, k, flag;
    if(right>left)
    {
        i=left;
        j=right;
        p=b[left];
        flag=0;
        while(!flag)
        {
            do
            {
                i++;
            }
            while((b[i]<=p) && (i<=right));
            while((b[j]<=p) && (j>left))
            {
                -j;
            }
            if(j<i)
                flag=1;
            else
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
        temp= b[left];
        b[left] = b[j];
        b[j]=temp;
        sort(b, left, j-1);
        sort(b,i,right);
    }
  }
