//1��������ʲô
//�����Ǵ��ͳ����е�ĳ���ִ��룬��һ������������ɣ��������ĳ�ֹ��ܣ�����һ��������
//2���⺯��
//3���Զ��庯��
//4����������
//5����������
//6��������Ƕ�׵��ú���ʽ����
//7�������������Ͷ���
//8�������ݹ�


//�ӷ�����
//#include<stdio.h>
//	int Add(int x,int y)
//	{
//		int z=0;
//		z=x+y;
//		return z;
//	}
//	int main()
//	{
//		int a=5;
//		int b=4;
//		int sum=Add(a,b);
//		printf("%d\n",sum);
//		return 0;
//	}
//

//����
//#include<stdio.h>
//	int main()
//	{
//		char arr1[]="hello world";
//		char arr2[20]="hi";
//		strcpy(arr2,arr1);
//		printf("%s\n",arr2);
//		return 0;
//	}


//memset
//#include<stdio.h>
//int main()
//{
//	char arr[]="hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	return 0;
//}


////�Զ��庯��
//#include<stdio.h>
//int get_max(int x,int y)//�Զ��������ֵ����
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a=10;
//	int b=45;
//	int max=get_max(a,b);
//	printf("max=%d\n",max);
//	max=get_max(34,89);
//	printf("max=%d\n",max);
//	return 0;
//}


////����a,b��ֵ
//#include<stdio.h>
//int main()
//{
//	int a=8;
//	int b=4;
//	int tmp=0;
//	printf("a=%d,b=%d\n",a,b);
//	tmp=a;
//	a=b;
//	b=tmp;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}

////�Զ��庯���ⷨ
//#include<stdio.h>
//void Swap2(int* pa,int*pb)
//{
//	int tmp=0;
//	tmp=*pa;
//	*pa=*pb;
//	*pb=tmp;
//}
//int main()
//{
//	int a=9;
//	int b=4;
//	printf("a=%d b=%d\n",a,b);
//	Swap2(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}


//ʵ�Ρ��βΡ���ֵ���á���ַ����
//ʹ���Զ��巽�̴�ӡ100-200֮�������
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int j=0;
	for(j=2;j<=sqrt(n);j++)
	{
		if(n%j==0)
		return 0;
	}
	return 1;
}
int main()
{
	int i=0;
	for(i=100;i<=200;i++)
	{
		if(is_prime(i)==1)
			printf("%d ",i);
	}
	return 0;
}