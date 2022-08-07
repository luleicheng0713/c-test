////输入三个数字，计算大小并从大到小输出
//#include<stdio.h>
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d",&a,&b,&c);//输入时每两个数字间加空格
//	if(a<b)//计算a,b的大小
//	{
//		int tmp=a;
//		a=b;
//		b=tmp;
//	}
//	if(a<c)//计算a,c的大小
//	{
//		int tmp=a;
//		a=c;
//		c=tmp;
//	}
//	if(b<c)//计算b,c的大小
//	{
//		int tmp=b;
//		b=c;
//		c=tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}


////打印100以内3的倍数
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%3==0)
//		printf("%d ",i);
//	}
//	return 0;
//}


////给定两个数，求两个数的最大公约数 
//#include<stdio.h>
//int main()
//{
//	int m=0;
//	int n=0;
//	int r=0;
//	scanf("%d%d",&m,&n);
//	while(m%n)//"%"为取模，即为m除n的余数
//	{
//		r=m%n;
//		m=n;
//		n=r;
//	}
//	printf("%d\n",n);
//	return 0;
//}


////打印公元1000年-2000年的闰年
//#include<stdio.h>
//int main()
//{
//	int year=0;
//	for(year=1000;year<=2000;year++)
//	{
//		//判断条件：
//		//1、能被4整除，但不能被100整除
//		//2、能被400整除
//		if(year%4==0&&year%100!=0)//"&&"逻辑与，"!="不等于
//		{
//			printf("%d ",year);
//		}
//		if(year%400==0)
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}


////另一种写法
//#include<stdio.h>
//int main()
//{
//	int year=0;
//	for(year=1000;year<=2000;year++)
//	{
//		if((year%4==0&&year%400!=0)||(year%400==0))//"||"逻辑或
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}


////打印100~200之间的素数
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//		//判断条件：试除法
//		int j=0;
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//
//		}
//		if(j==i)
//		printf("%d ",i);
//	}
//	return 0; 
//}


//另一种解法

#include<math.h>//数学库函数
int main()
{
	int i=0;
	int j=0;
	for(i=100;i<=200;i++)//此处可以改为(i=101;i<=200;i+=2)，因为偶数不可能为素数
	{
		for(j=2;j<=sqrt(i);j++)//"sqrt"为开平方数学库函数
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>sqrt(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
}