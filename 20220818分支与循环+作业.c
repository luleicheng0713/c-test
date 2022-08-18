////输出1~100之间数字9的个数
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%10==9)
//			count++;
//	    if(i/10==9)
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//} 


////输出1-1/2+1/3-1/4+....+1/99-1/100的值
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	double sum=0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum += flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf\n",sum);//输出双精度浮点型使用lf
//	return 0;
//}

////另一种运算
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	double sum=0;
//	for(i=1;i<=100;i+=2)
//		sum+=1.0/i;
//	for(i=2;i<=100;i+=2)
//		sum-=1.0/i;
//	printf("%lf\n",sum);
//	return 0;
//}


////求十个数的最大值
//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max=arr[0];//不赋值为0，防止数组内最大值为负数
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//求数组大小
//	for(i=0;i<=sz;i++)
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	printf("%d\n",max);
//	return 0;
//}


//打印乘法口诀表
#include<stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=9;i++)
	{
		int j=1;
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d",i,j,i*j);//%2d表示输出的数字占两位，中间加"-"表示左对齐
		}
		printf("\n");
	}
	return 0;
}


//二分查找
//编写代码在一个整形有序数组中查找具体的某个数，找到打印数字所在下标，找不到则输出找不到