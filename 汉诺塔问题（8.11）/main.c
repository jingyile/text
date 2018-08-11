/*汉诺塔（又称河内塔）问题是印度的一个古老的传说。
开天辟地的神勃拉玛在一个庙里留下了三根金刚石的棒A、B和C，A上面套着n个圆的金片，
最大的一个在底下，其余一个比一个小，依次叠上去。
庙里的众僧不倦地把它们一个个地从A棒搬到C棒上，规定可利用中间的一根B棒作为帮助，
但每次只能搬一个，而且大的不能放在小的上面。僧侣们搬得汗流满面，
可惜当n很大时这辈子恐怕就很搬了 聪明的你还有计算机帮你完成，
你能写一个程序帮助僧侣们完成这辈子的夙愿吗？
*/
#include <stdio.h>
void move(int n,char a,char b)
{
    printf("Move disk %d from %c to %c\n",n,a,b);
}
int hanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        move(n,a,c);//直接将最小的从A移到C
    }
    else
    {
    hanoi(n-1,a,c,b);//让第n-1个人借助C将前n-1个盘子从A移到B上
    move(n,a,c);//自己将第n个盘子从A移到C
    hanoi(n-1,b,a,c);//让第n-1个人借助A将前n-1个盘子从B移到C上
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    printf("%d",cnt);
    return 0;
}
