/*************************************************************************
	> File Name: 1-6.c
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月28日 星期日 19时25分36秒
 ************************************************************************/

#include<stdio.h>
void sequence(int* a,int* b,int *c);
int triangle(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("输入三边长:");
    scanf("%d%d%d",&a,&b,&c);
    sequence(&a,&b,&c);

    if(!triangle(a,b,c)){
        printf("not a triangle\n");
    }
    else{
        if(c*c == a*a + b*b){
            printf("yes\n");
        }
        else{
            printf("no");
        }
    }
    
}

void sequence(int* a,int* b,int* c)
{
    /*保证*c最大*/
    if(*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*b > *c)
    {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
}

int triangle(int a,int b,int c)
{
    if(a+b > c) return 1;
    else return 0;
}
