#include <stdio.h>

struct student
{
    char name[21];
    int score;
};

int main()
{
    struct student a[100], t;
    int i, j, n;

    printf("Please input a integer number, which is the total numbers of students? ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf("Please input the %d th student's name and score: ",i);
        scanf("%s %d",&a[i].name,&a[i].score);
    }


    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j].score<a[j+1].score)
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    printf("The students' scores are:\n");
    for(i=1; i<=n; i++)
    {
        printf("%s %d\n",a[i].name,a[i].score);
    }
    getchar();getchar();

    return 0;
}

