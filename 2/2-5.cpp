/*************************************************************************
	> File Name: 2-5.cpp
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月29日 星期一 16时42分43秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long int a,b;
    int c;
    int k = 0;
    while(cin >>a >> b>> c){
        k++;
        if((a == 0)&&(b == 0)&&(c == 0)) break;
        cout << "Case "<<k << ":";
        printf("%.*f\n",c,a/(1.0*b));
    }
    return 0;

}
