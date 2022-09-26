#include<stdio.h>
//int main()
//{
//	int a = 5 / 2;//商2余1
//	printf("a=%d\n", a);
//	return 0;
//}


//int main()
//{
//	double a = 5 / 2.0;//输入double类型数字，且除数或被除数有一个带有小数点，则可输出被除数
//	printf("a=%lf\n", a);//%lf为输出浮点型数字的固定格式
//	return 0;
//}


//int main()
//{
//	int a = 16;
//	//>>右移位操作符
//	//移动的是二进制位
//	//00000000000000000000000000010000
//	int b = a >> 1;
//	printf("b=%d\n", b);
//	return 0;
//}
//右移操作符分两种：
//1、算术右移-右边丢弃，左边补原符号位，这里为算术右移
//2、逻辑右移-右边丢弃，左边补0


//int main()
//{
//	int a = -1;
//	//整数的二进制表示有原码/反码/补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001-原码(数字为负，首位为1)
//	//11111111111111111111111111111110-反码(符号位不变，其他位取反)
//	//11111111111111111111111111111111-补码(反码加一为补码)
//	int b = a >> 1;//右移操作符，补码右侧舍弃，左侧补原符号位
//	printf("%d\n",b);
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//0000000000000000000000101-原码
//	//左移操作符，左边丢弃，右边补0
//	printf("%d\n", b);
//	return 0;
//}

//对于移位操作符，不可以移位负数，这是未定义的操作


//按位与
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	//000000000000000000000011
//	//000000000000000000000101
//	//对应的二进制位，只要有一个为0则为0；两个同时为1则为1
//	//000000000000000000000001
//	printf("c=%d\n", c);
//	return 0;
//}

//按位或
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a|b;
//	//000000000000000000000011
//	//000000000000000000000101
//	//对应的二进制位，只要有一个为1则为1，同时为零则为0
//	//000000000000000000000111
//	printf("c=%d\n", c);
//	return 0;
//}


//按位异或
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a^b;
//
//	//000000000000000000000011
//	//000000000000000000000101
//	//对应的二进制位，相同为0，相异为1
//	//000000000000000000000110
//	printf("c=%d\n", c);
//	return 0;
//}


//交换a,b的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("before:a=%d b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}


//交换a,b的值，不引入第三变量
//加减法-可能会移除
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;//a=8
//	b = a - b;//b=3
//	a = a - b;
//	printf("after:a=%d b=%d", a, b);
//	return 0;
//}


//异或的方法
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//a=000000000000000000000011
//	//b=000000000000000000000101
//	a = a^b;
//	//a=000000000000000000000110=6
//	b = a^b;
//	//b=000000000000000000000011=3
//	a = a^b;
//	//a=000000000000000000000101=5
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);//3
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			//3=00000000000000000000000000000011
//			//1=00000000000000000000000000000001
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//赋值操作符
//int a = 0;
//a = 1;


//复合赋值符
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;//效果一样
//
//	a = a >> 1;
//	a >>= 1;
//
//	a = a & 1;
//	a &= 1;
//
//	return 0;
//}


//单目操作符
//！逻辑反操作
//-负值
//+正值
//&取地址
//sizeof操作数的类型长度（按字节为单位）
//~对一个数的二进制按位取反
//--前置、后置--
//++前置、后置++
//*间接访问操作符
//int main()
//{
//	int a = 10;
//	int*p = &a;//取地址操作符
//	*p = 20;//解引用操作符
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char*p = &c;
//	int arr[10] = { 0 };
//	//sizeof计算的变量所占内存空间的大小，单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//00000000000000000000000000000000-a的原码
//	//11111111111111111111111111111111-a的反码，b的补码
//	//11111111111111111111111111111110-补码减1为反码
//	printf("%d\n", b);
//	return 0;
//}


//将2进制位的第三位的0变成1
//int main()
//{
//	int a = 11;
//	//00000000000000000000000000001011-原码
//	//00000000000000000000000000000100-或上此数则得到目标数
//	a = a | (1 << 2);
//		printf("%d\n", a);
//	return 0;
//}


//将2进制位的第三位的1变成0
//int main()
//{
//	int a = 15;
//	//00000000000000000000000000001111-原码
//	//00000000000000000000000000000100
//	//11111111111111111111111111111011-与上此数得到目标数
//	a = a & ~(1 << 2);
//	printf("%d\n", a);
//	return 0;
//}


//++、--
//int main()
//{
//	int i = 5;
//	printf("%d\n", i++);
//	printf("%d\n", i);
//	return 0;
//}


//强制类型转换--(类型)
//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);//数组名传参，传送的是首项的地址
//	test2(ch);
//	return 0;
//}


//&&逻辑与、||逻辑或
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;//左边为0，右边则不再运算
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++||++b||d++;//左面为真，后面不再运算
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//左面为真，后面不再运算
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//条件操作符（双目操作符）
//exp1?exp2:exp3   若exp1为真，则exp2要算，exp2的结果为整个表达式的结果；若exp1为假，则exp3要算，exp3的表达式的结果为整个表达式的结果
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	max = (a > b ? a : b);//与被注释部分效果相同
//	printf("max=%d\n", max);
//	return 0;
//}


//逗号表达式--从左向右依次算，整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//c=b=a+1
//	printf("c=%d\n", c);
//	return 0;
//}
//
//
//if (a=b+1,c=a/2,d>0)//起到判断作用的是d>0


//下标引用操作符[]
//一个数组名+一个索引值
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//	1 + 2;
//	return 0;
//}


//函数调用操作符()
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//结构体成员.
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "张三",20,"20220921" };//使用struct Stu这个类型创建了一个学生对象s1,并初始化
//	struct Stu*ps = &s1;
//	printf("%s\n",ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	//printf("姓名 %s\n", s1.name);
//	//printf("年龄 %d\n", s1.age);
//	//printf("学号 %s\n", s1.id);
//	return 0;
//}


//整形提升-值都被提升为普通整形（32位），然后再执行加法运算，得到的结果将被截断，再被存入
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	//00000000000000000000000000000011
//	//字符类型，存放1个字节，8个bit
//	//00000011
//	//+
//	//00000000000000000000000001111111
//	//00111111
//	//=
//	//10000010
//	//11111111111111111111111110000010-补码
//	//11111111111111111111111110000001-反码
//	//10000000000000000000000001111110-原码
//	//-126
//	printf("c=%d\n", c);
//	return 0;
//}


//int main()
//{
//	char a = 0×b6;
//	short b = 0×b600;
//	int c = 0×b6000000;
//	if (a == 0×b6)
//		printf("a");
//	if (b == 0×b600)
//		printf("b");
//	if (c == 0×b6000000)
//		printf("c");
//	return 0;
//}


int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));//c只要参与表达式，就会发生整形提升，+c、-c都会发生整形提升，所以字节长度位4
	printf("%u\n", sizeof(!c));
	return 0;
}


//算数转换-如果某个操作符的各个操作数属于不同的类型，那么除非其中一个操作数转换位另一个操作数的类型，否则操作无法进行
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int


