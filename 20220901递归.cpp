//#include<stdio.h>
//void print(int n)
//{
//	if(n>9)//�ݹ��������Ҫ��������ֹջ�������1������������������������ʱ�ݹ鲻�ټ�����2��ÿ�εݹ���ú�Խ��Խ�ӽ���������
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


//��ŵ�����⣬������̨������