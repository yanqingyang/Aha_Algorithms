#include <stdio.h>

int main()
{
    int book[1001], i, j, t, n;
    for (i=0; i<=1000; i++)
        book[i]=0;

    printf("Please input a integer number, which is the total numbers? ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf("Please input the %d th number: ",i);
        scanf("%d",&t);
        book[t]++;
    }


    printf("The numbers array is : ");
    //for(i=0; i<=10; i++)
    for(i=1000; i>=0; i--)
    {
        for(j=1; j<=book[i];j++)
            printf("%d ",i);
    }
    getchar();getchar();

    return 0;
}

