/*************************************************************************
	> File Name: 1-2.c
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月28日 星期日 19时10分31秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int f;
    float c;
    printf("请输入f值:");
    scanf("%d",&f);
    c = 5*(f-32)/9.0;
    printf("%.3f\n",c);
    return 0;

}