//#include<stdio.h>
//void print(int n)
//{
//	if(n>9)//递归的两个必要条件（防止栈溢出）：1、存在限制条件，满足条件时递归不再继续；2、每次递归调用后越来越接近限制条件
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	unsigned int num=0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}


#include<stdio.h>
int my_strlen(char *str)
{
	if(*str!='\0')
		return 1+my_strlen(str+1);
	else
		return 0;
}
int main()
{
	char arr[]="bit";
	int len=my_strlen(arr);
	printf("len=%d\n",len);
	return 0;
}


//汉诺塔问题，青蛙跳台阶问题