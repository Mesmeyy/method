/*************************************************************************
	> File Name: 2-3.c
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月29日 星期一 16时15分04秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int i;
    for(i = 0;i < n;i++){
        int j = 0;
        for(;j < i;j++) printf(" ");
        for(j = 0;j < 2*n-1-2*i;j++) printf("#");
        printf("\n");
    }
    return 0;
}
