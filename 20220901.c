//#include<stdio.h>
//#include"Add.h"
//int main()
//{
//	int a=6;
//	int b=9;
//	int sum=Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//} 


////求n的阶乘
//#include<stdio.h>
//
//int Fac1(int n)
//{
//	int i=0;
//	int ret=1;
//	for(i=1;i<=n;i++)
//	{
//		ret*=i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*Fac2(n-1);
//}
//
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=Fac1(n);//循环方式‘Fac1’‘Fac2’
//	printf("%d\n",ret);
//	return 0;
//}


////斐波那契数列
////1,1,2,3,5,8,13,21,34,55,89
//#include<stdio.h>//递归方式
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}


#include<stdio.h>//循环方式
int Fib(int n)
{
	int a=1;
	int b=1;
	int c=0;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
}
int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret=Fib(n);
	printf("ret=%d\n",ret);
	return 0;
}