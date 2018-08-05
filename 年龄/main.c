#include<stdio.h>
int age(int i)
{
    if(i==1)
        return 10;
    else
        return age(i-1)+2;
}
int main()

{

    int i;

    int age(int);

    scanf("%d",&i);

    printf("%d",age(i));

    return 0;

}
