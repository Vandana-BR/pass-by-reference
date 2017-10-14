#include <stdio.h>
#include <stdlib.h>
void ref(int x[]);

int main()
{
    int x[5]={1,2,3,4,5},i;
    printf("\n value of array before:\n");
    for(i=0;i<5;i++)
        printf("%d\n",x[i]);
    ref(x);
     printf("\n value of array after:\n");
    for(i=0;i<5;i++)
        printf("%d\n",x[i]);

    return 0;
}
void ref(int x[])
{
    int i;
    for(i=0;i<5;i++)

        x[i]=x[i]+120;
         printf("\n value of array here:\n");
    for(i=0;i<5;i++)
        printf("%d\n",x[i]);
        printf("\n");

}
