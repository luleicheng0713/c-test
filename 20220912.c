#include<stdio.h>
//int main()
//{
//	创建一个数组存放10个整形
//	int arr[10]={1,2,3};//不完全初始化，剩下的元素为默认初始值
//	存放十个字符
//	char arr2[5]={'a','b'};
//	char arr3[5]="ab";
//	char arr4[]="abcdfe";//七个字符
//	printf("%d\n",sizeof(arr4));//所占空间大小
//	printf("%d\n",strlen(arr4));//求字符串长度，找到\0即只，且\0不计入长度
//	return 0;
//}

//1、strlen和sizeof没有什么关联
//2、strlen是求字符串长度的，只能针对字符串长度-库函数-使用时得引用头文件
//3、sizeof计算变量、数组、类型的大小单位是字节，属于操作符，不需要引用头文件


//int main()
//{
//	char arr1[]="abc";                //arr1   a,b,c,\0
//	char arr2[]={'a','b','c'};        //arr2   a,b,c
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));//显示字符串长度为随机值，因为找不到\0
//	return 0;
//}


//int main()
//{
//	char arr[]="abcdef";
//	//printf("%c\n",arr[3]);//打印第四个字符
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
//	int sz=sizeof(arr)/sizeof(arr[0]);//计算数组大小
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
//	int sz=sizeof(arr)/sizeof(arr[0]);//计算数组大小
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);//%p地址
//	}
//	return 0;
//}


//int main()
//{
//	//int arr[3][4]={{1,2,3},{4,5}};
//	int arr[][4]={{1,2,3,4},{5,6,7,8}};//二维数组可以省略行，不能省略列
//	return 0;
//}


//二维数组打印、取地址
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


//冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		//每一趟冒泡排序
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
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
//	bubble_sort(arr,sz);//冒泡排序函数
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


