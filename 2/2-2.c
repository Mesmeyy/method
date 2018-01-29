/*************************************************************************
	> File Name: 2-2.c
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月29日 星期一 16时04分08秒
 ************************************************************************/

#include<stdio.h>
int hanxin(int a,int b,int c);
int main()
{
    int a,b,c;
    int ret;;
    scanf("%d%d%d",&a,&b,&c);
    
    ret = hanxin(a,b,c);

    if(ret) printf("%d\n",ret);
    else printf("No answer\n");
}
int hanxin(int a,int b,int c)
{
    int i = 10;
    for(;i <= 100;i++){
        if((i%3 == a)&&(i%5 == b)&&(i%7 == c)) return i;
    }
    return 0;
}

