/*烟台大学计算机学院
Description
   汉诺塔（又称河内塔）问题是印度的一个古老的传说。
开天辟地的神勃拉玛在一个庙里留下了三根金刚石的棒A、B和C，A上面套着n个圆的金片，
最大的一个在底下，其余一个比一个小，依次叠上去，庙里的众僧不倦地把它们一个个地从A棒搬到C棒上，
规定可利用中间的一根B棒作为帮助，但每次只能搬一个，而且大的不能放在小的上面。僧侣们搬得汗流满面，
可惜当n很大时这辈子恐怕就很搬了 聪明的你还有计算机帮你完成，你能写一个程序帮助僧侣们完成这辈子的夙愿吗？
Input
   输入金片的个数n。这里的n<=10。
Output
   输出搬动金片的全过程。
作者：景怡乐
完成时间：2016年11月21日
*/
#include <stdio.h>
void move(int n, char A, char B,char C)
{
    if(n==1)
        printf("Move disk %d from %c to %c\n", n, A, C);//如果是一个盘子，直接从AZ柱子移动到C柱子。
    else
    {
        move(n-1, A, C, B);//先将A柱子上的n-1个盘子借助于C从A移动到B
        printf("Move disk %d from %c to %c\n", n, A, C);//直接将A柱子上的盘子从A移动到C
		move(n-1, B, A, C);//最后将B柱子上的n-1个盘子借助于A从B移动到C
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    move(n,'A','B','C');
    return 0;
}
