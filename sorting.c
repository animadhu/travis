#include <stdio.h>
#include <stdlib.h>
int main()
{
int a=10;
int b=20;
printf("%d",a+b);
return 0;
}
/*int *myfunc();
int main()
{
        int *ptr;
        ptr=myfunc();
        for(int i=0;i<10;i++)
        {
            printf("%d ",*(ptr+i));
        }
    return 0;
}
int *myfunc()
{
    int *b;
     b=malloc(10*sizeof(int));
    printf("enter the 10 values");
    for(int i=0;i<10;i++)
    {
        scanf("%d",(b+i));
    }
    for(int i=0;i<10;i++)
    {
    for(int j=i+1;j<10;j++)
    {
        if(*(b+i)> *(b+j))
        {
          int t;
          t=*(b+i);
          *(b+i)=*(b+j);
          *(b+j)=t;

        }
    }
    }
    return b;
}*/
