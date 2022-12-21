#include<stdio.h>
#include<conio.h>

main()
{
    int i,j,x,n,temp;
    int left, right, mid;

    int a[20];
    printf("Enter no of the Elements : ");
    scanf("%d", &n);

    printf("\n Enter %d values of array : ", n);
    for( i=0; i<n; i++)
    scanf("%d", &a[i]);

     // printing values ofarray a
    printf("\nElements of array a : \n");
    for( i=0; i<n; i++)
        printf("%d\t", a[i]);

        for( i=0; i<n; i++)
        {
            for( j=0; j<n; j++)
            {
                if(a[i]>a[j])
                {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                }
            }
        }
        //printing values of array a after sorting
        printf("\nSorted array a : \n");
        for(i=0; i<n; i++)
            printf("%d\t", a[i]);

        printf("Enter the value to be searched :");
        scanf("%d", &x);
        left = 0;
        right = n;
        while(left<=right)
        {
            mid = (left+right)/2;
            if( x<a[mid])
                right = mid-1;
            else if( x>a[mid])
                left = mid+1;
            else if (x == a[mid])
           {
                printf("%d is located at location %d", x, mid+1);
                break;
            }
        }
        getch();
    }

