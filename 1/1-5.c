/*************************************************************************
	> File Name: 1-5.c
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月28日 星期日 19时19分49秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int min_dazhe = 300/95 + 1;
    int number;
    float pay_much;

    printf("输入衣服数量:");
    scanf("%d",&number);
    if(number >= min_dazhe){
        pay_much = number*95*0.85;
    }
    else{
        pay_much = number*95;  
    }

    printf("应该支付:%.3f\n",pay_much);

}
