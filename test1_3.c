#include <stdio.h>

int main()
{
    int a[100], i, j, t, n;

    printf("Please input a integer number, which is the total numbers? ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf("Please input the %d th number: ",i);
        scanf("%d",&a[i]);
    }


    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=a[j];
            }
        }
    }

    printf("The numbers array is : ");
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
    getchar();getchar();

    return 0;
}

