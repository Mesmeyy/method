/*************************************************************************
	> File Name: 2-6.cpp
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月30日 星期二 16时49分55秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j;
    char ch[10];
    for(n = 123;n < 330;n++){
        sprintf(ch,"%d",n*1000000 + n*2*1000 + n*3);
        i = '1';
        for(j = 0;i <= '9';memchr(ch,i++,9) && j++){
        }
        if(j == 9)
        printf("%d %d %d \n",n,n*2,n*3);
    }
    return 0;
}
