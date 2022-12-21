#include<stdio.h>
#include<conio.h>

main()
{
    int i,j,x,n,temp;
    int a[20];
    printf("Enter the no of elements :");
    scanf("%d", &n);
    printf("\nEnter %d values :", n);
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    printf("\n Element of array a: \n");       // printing value of Array

    for(i=0; i<n; i++)
    printf("%d\t", a[i]);

    //for searching values should in sorted order//
    //here sorting in assending order//

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] =temp;
            }
        }
    }
    // printing values of array a after sorting//
    printf("\n sorted array a : \n");

        for(i = 0; i<n; i++)
        printf("%d\t", a[i]);

        printf("Enter the value to be sorted :");
        scanf("%d", &x);

        for( i=0; i<n; i++)
        {
            if( x ==a[i])
            printf("\n %d is located at location %d", x, i+1);
        }
        getch();
}
