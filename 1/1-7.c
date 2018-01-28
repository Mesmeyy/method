/*************************************************************************
	> File Name: 1-7.c
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月28日 星期日 19时39分36秒
 ************************************************************************/

#include<stdio.h>
int run(int n);
int main()
{
    int n;
    printf("输入年份:");
    scanf("%d",&n);
    if(run(n)) printf("yes\n");
    else{
        printf("no\n");
    }
    return 0;
}
int run(int n)
{
    if(((n%4 == 0)&&(n%100 != 0))||(n%400 == 0)) return 1;
    else return 0;
}
