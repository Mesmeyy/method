/*************************************************************************
	> File Name: 2-1.c
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月29日 星期一 15时51分03秒
 ************************************************************************/

#include<stdio.h>
int flower(int n);
int main()
{
    int i = 100;
    for(;i < 1000;i++){
        if(flower(i))
            printf("%d是水仙花数\n",i);
    }
    return 0;
}
int flower(int n)
{
    int a,b,c;//百位　十位　个位
    a = n /100;
    b = n /10 % 10;
    c = n %10;

    if(n == (a*a*a + b*b*b + c*c*c))
        return 1;
    else 
        return 0;
}
