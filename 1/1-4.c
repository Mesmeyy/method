/*************************************************************************
	> File Name: 1-4.c
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月28日 星期日 19时15分06秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
    int n;
    printf("输入角度n:");
    scanf("%d",&n);

    printf("sin = %f\n",sin(n*PI/360));
    printf("cos = %f\n",cos(n*PI/360));
    return 0;
}
