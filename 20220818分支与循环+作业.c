////���1~100֮������9�ĸ���
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


////���1-1/2+1/3-1/4+....+1/99-1/100��ֵ
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
//	printf("%lf\n",sum);//���˫���ȸ�����ʹ��lf
//	return 0;
//}

////��һ������
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


////��ʮ���������ֵ
//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int max=arr[0];//����ֵΪ0����ֹ���������ֵΪ����
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//�������С
//	for(i=0;i<=sz;i++)
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	printf("%d\n",max);
//	return 0;
//}


//��ӡ�˷��ھ���
#include<stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=9;i++)
	{
		int j=1;
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d",i,j,i*j);//%2d��ʾ���������ռ��λ���м��"-"��ʾ�����
		}
		printf("\n");
	}
	return 0;
}


//���ֲ���
//��д������һ���������������в��Ҿ����ĳ�������ҵ���ӡ���������±꣬�Ҳ���������Ҳ���