////�����������֣������С���Ӵ�С���
//#include<stdio.h>
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d",&a,&b,&c);//����ʱÿ�������ּ�ӿո�
//	if(a<b)//����a,b�Ĵ�С
//	{
//		int tmp=a;
//		a=b;
//		b=tmp;
//	}
//	if(a<c)//����a,c�Ĵ�С
//	{
//		int tmp=a;
//		a=c;
//		c=tmp;
//	}
//	if(b<c)//����b,c�Ĵ�С
//	{
//		int tmp=b;
//		b=c;
//		c=tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}


////��ӡ100����3�ı���
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


////�������������������������Լ�� 
//#include<stdio.h>
//int main()
//{
//	int m=0;
//	int n=0;
//	int r=0;
//	scanf("%d%d",&m,&n);
//	while(m%n)//"%"Ϊȡģ����Ϊm��n������
//	{
//		r=m%n;
//		m=n;
//		n=r;
//	}
//	printf("%d\n",n);
//	return 0;
//}


////��ӡ��Ԫ1000��-2000�������
//#include<stdio.h>
//int main()
//{
//	int year=0;
//	for(year=1000;year<=2000;year++)
//	{
//		//�ж�������
//		//1���ܱ�4�����������ܱ�100����
//		//2���ܱ�400����
//		if(year%4==0&&year%100!=0)//"&&"�߼��룬"!="������
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


////��һ��д��
//#include<stdio.h>
//int main()
//{
//	int year=0;
//	for(year=1000;year<=2000;year++)
//	{
//		if((year%4==0&&year%400!=0)||(year%400==0))//"||"�߼���
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}


////��ӡ100~200֮�������
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//		//�ж��������Գ���
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


//��һ�ֽⷨ

#include<math.h>//��ѧ�⺯��
int main()
{
	int i=0;
	int j=0;
	for(i=100;i<=200;i++)//�˴����Ը�Ϊ(i=101;i<=200;i+=2)����Ϊż��������Ϊ����
	{
		for(j=2;j<=sqrt(i);j++)//"sqrt"Ϊ��ƽ����ѧ�⺯��
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