#include<stdio.h>
//int main()
//{
//	����һ��������10������
//	int arr[10]={1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��ΪĬ�ϳ�ʼֵ
//	���ʮ���ַ�
//	char arr2[5]={'a','b'};
//	char arr3[5]="ab";
//	char arr4[]="abcdfe";//�߸��ַ�
//	printf("%d\n",sizeof(arr4));//��ռ�ռ��С
//	printf("%d\n",strlen(arr4));//���ַ������ȣ��ҵ�\0��ֻ����\0�����볤��
//	return 0;
//}

//1��strlen��sizeofû��ʲô����
//2��strlen�����ַ������ȵģ�ֻ������ַ�������-�⺯��-ʹ��ʱ������ͷ�ļ�
//3��sizeof������������顢���͵Ĵ�С��λ���ֽڣ����ڲ�����������Ҫ����ͷ�ļ�


//int main()
//{
//	char arr1[]="abc";                //arr1   a,b,c,\0
//	char arr2[]={'a','b','c'};        //arr2   a,b,c
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));//��ʾ�ַ�������Ϊ���ֵ����Ϊ�Ҳ���\0
//	return 0;
//}


//int main()
//{
//	char arr[]="abcdef";
//	//printf("%c\n",arr[3]);//��ӡ���ĸ��ַ�
//	int i=0;
//	int len=strlen(arr);
//	for(i=0;i<strlen(arr);i++)
//	{
//		printf("%c\n",arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);//���������С
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);//���������С
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);//%p��ַ
//	}
//	return 0;
//}


//int main()
//{
//	//int arr[3][4]={{1,2,3},{4,5}};
//	int arr[][4]={{1,2,3,4},{5,6,7,8}};//��ά�������ʡ���У�����ʡ����
//	return 0;
//}


//��ά�����ӡ��ȡ��ַ
//int main()
//{
//	int arr[3][4]={{1,2,3},{4,5}};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<4;j++)
//		{
//			//printf("%d ",arr[i][j]);
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ð������
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		//ÿһ��ð������
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ&arr[0]
//	bubble_sort(arr,sz);//ð��������
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


