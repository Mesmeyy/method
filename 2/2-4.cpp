/*************************************************************************
	> File Name: 2-4.cpp
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2018年01月29日 星期一 16时28分34秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double sum;
    long int n,m,i,k;

    k = 0;
    while(cin >>n >>m){
        k++;
        if((n == 0)&&(m == 0)) break;
        else{
            sum = 0;
            for(i = n;i <= m;i++){
                sum += 1.0/(i*i);
            }
            cout << "Case " << k <<":";
            printf("%.5lf\n",sum);
        }
    }
    return 0;
}
