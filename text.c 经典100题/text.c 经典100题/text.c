#define _CRT_SECURE_NO_WARNINGS





//（一）题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
////程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	int k;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			for (k = 1; k < 5; k++)
//			{
//				if (i != j && j != k && i != k)
//				{
//					printf("%d,%d,%d", i, j, k);
//					printf("\n");
//				}
//			}
//		}
//	}
//	return 0;
//}
//改编：有1，2，3，4，5 五个数字，能组成互不相同的四位数，都是多少？
//int main()
//{
//	int i, j, k, l;
//	for (i = 1; i < 6; i++)
//	{
//		for (j = 1; j < 6; j++)
//		{
//			for (k = 1; k < 6; k++)
//			{
//				for (l = 1; l < 6; l++)
//				{
//					if (i != j && j != k && k != l && l != i&&i!=k&&j!=l)
//					{
//						printf("%d,%d,%d,%d", i, j, k, l);
//						printf("\n");
//					}
//					
//				}
//			}
//		}
//	}
//	return 0;
//}



////2)：企业发放的奖金根据利润提成。
//
//利润(I)低于或等于10万元时，奖金可提10% ；
//利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可提成7.5 % ；
//20万到40万之间时，高于20万元的部分，可提成5 % ；
//40万到60万之间时高于40万元的部分，可提成3 % ；
//60万到100万之间时，高于60万元的部分，可提成1.5 % ；
//高于100万元时，超过100万元的部分按1 % 提成。
//从键盘输入当月利润I，求应发放奖金总数？
//
//程序分析：1请利用数轴来分界，定位。2注意定义时需把奖金定义成双精度浮点(double)型。
//int main()
//{
//	double n = 0;
//	double  lr2, lr3, lr4, lr5, reword;
//	printf("净利润是：\n");
//	scanf("%lf", &n);
//	lr2 = 100000 * 0.1 + (n - 100000) * 0.075;
//	lr3 = lr2 + (n - 200000) * 0.05;
//	lr4 = lr3 + (n - 400000) * 0.03;
//	lr5 = lr4 + (n - 600000) * 0.15;//以上均为初始化步骤
//	if (n <= 100000)
//	{
//		 
//		reword = n * 0.1;
//	}
//	else if(n<=200000)//else if(n>100000&&n<=200000)也可以这么写但是有点多此一举了 hhh...
//	{
//		
//		reword = 100000 * 0.1 + (n - 100000) * 0.075;
//	}
//	else if(n<=400000)
//	{
//		
//		reword = lr2 + (n - 200000) * 0.05;
//
//	}
//	else if(n<=600000)
//	{
//		
//		reword = lr3 + (n - 400000) * 0.03;
//	}
//	else if(n<=1000000)
//	{
//		
//		reword = lr4 + (n - 600000) * 0.15;
//	}
//	else
//	{
//		reword = lr5 + (n - 1000000) * 0.01;
//	}
//	printf("reword=%lf", reword);
//
//	return 0;
//}


//答案;
//#include<stdio.h>
//int main()
//{
//	double i;
//	double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//	printf("你的净利润是：\n");
//	scanf("%lf", &i);
//	bonus1 = 100000 * 0.1;
//	bonus2 = bonus1 + 100000 * 0.075;
//	bonus4 = bonus2 + 200000 * 0.05;
//	bonus6 = bonus4 + 200000 * 0.03;
//	bonus10 = bonus6 + 400000 * 0.015;
//	if (i <= 100000)
//	{
//		bonus = i * 0.1;
//	}
//	else if (i <= 200000)
//	{
//		bonus = bonus1 + (i - 100000) * 0.075;
//	}
//	else if (i <= 400000) 
//	{
//		bonus = bonus2 + (i - 200000) * 0.05;
//	}
//	else if (i <= 600000) 
//	{
//		bonus = bonus4 + (i - 400000) * 0.03;
//	}
//	else if (i <= 1000000) 
//	{
//		bonus = bonus6 + (i - 600000) * 0.015;
//	}
//	else if (i > 1000000) 
//	{
//		bonus = bonus10 + (i - 1000000) * 0.01;
//	}
//	printf("提成为：bonus=%lf", bonus);
//
//	printf("\n");
//}









////三)题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//
//程序分析：
//
//假设该数为 x。
//
//1、则：x + 100 = n2, x + 100 + 168 = m2
//
//2、计算等式：m2 - n2 = (m + n)(m - n) = 168
//
//3、设置： m + n = i，m - n = j，i * j = 168，i 和 j 至少一个是偶数
//
//4、可得： m = (i + j) / 2， n = (i - j) / 2，i 和 j 要么都是偶数，要么都是奇数。
//
//5、从 3 和 4 推导可知道，i 与 j 均是大于等于 2 的偶数。
//
//6、由于 i * j = 168， j >= 2，则 1 < i < 168 / 2 + 1。
//
//	7、接下来将 i 的所有数字循环计算即可。
//
//	具体实现如下："求x正常求解（三个未知数但只有两个方程）解不出—>将m n表达式来表达x ——>表达式变量多且复杂用i j 来代替并找i j间的关系和范围——>最后反推回去算出x"

//int main()
//{
//	int x, m, n, i, j;
//	for (i = 1; i <168/2+1; i++)
//	{
//		if (168 % i == 0)
//		{
//			j = 168 / i;
//			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//			{
//				m = (i + j) / 2;
//				n = (i - j) / 2;
//				x = n * n - 100;
//				printf("%d + 100 = %d * %d\n", x, n, n);
//				printf("%d + 268 = %d * %d\n", x, m, m);
//			}
//		}
//		
//	}
//	return 0;
//}





//int main()
//{
//	int x, m, n, i, j;
//	for (i = 1; i <= 84; i++)
//	{
//		if (168 % i == 0)
//		{
//			j = 168 / i;
//			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//			{
//				n = (i + j) / 2;
//				m = (i - j) / 2;
//				x = m * m - 100;
//				printf("%d+100=%d*%d\n",x,m,m);
//				printf("%d+268=%d*%d\n",x,n,n);
//
//			}
//		}
//	}
//	return 0;
//
// 
// }
////// 企业发放的奖金根据利润提成。
////
////利润(I)低于或等于10万元时，奖金可提10% ；
////利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可提成7.5 % ；t1
////20万到40万之间时，高于20万元的部分，可提成5 % ；t2
////40万到60万之间时高于40万元的部分，可提成3 % ；t3
////60万到100万之间时，高于60万元的部分，可提成1.5 % t4；
////高于100万元时，超过100万元的部分按1 % 提成。t5
////从键盘输入当月利润I，求应发放奖金总数？}
//
//
//
//
//#include <stdio.h>
//
//int main()
//{
//	float  i = 0;
//	scanf("%f", &i);
//	float sum, t1, t2, t3, t4, t5;
//	t1 = 100000 * 0.1 + (i - 100000) * 0.075;
//	t2 = t1 + (i - 200000) * 0.005;
//	t3 = t2 + (i - 400000) * 0.003;
//	t4 = t3 + (i - 600000) * 0.015;
//	t5 = t4 + (i - 1000000) * 0.001;
//	if (i <= 100000)
//	{
//		sum = i * 0.1;
//	}
//	else if (i <= 200000)
//	{
//		sum =100000*0.1+(i-100000)*0.075;
//	}
//	printf("%f", sum);
//	return 0;
//}



////四）  输入某年某月某日，判断这一天是这一年的第几天？
////
////程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
//#include<stdio.h >
//int main()
//{
//	int i = 0;
//	const int dayinmonths[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//	int sum = 0;
//	int year = 0;
//	int day = 0;
//	int month = 0;
//	printf("请输入年月日\n");
//	if (scanf("%d %d %d", &year, &month, &day) != 3 || month<1 || month > 12 || day < 1 || day>31)
//	{
//		printf("输入错误\n");
//		return 1;
//	}
//	sum = 0;
//	for(i=0;i<month-1;i++)
//	{
//		sum += dayinmonths[i];
//	}
//	sum += day;
//	int leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
//	if (leap && month > 2)
//	{
//		sum++;
//	}
//	printf("这是一年的第%d天\n", sum);
//	return 0;
//}






//输入三个整数 x、y、z，请把这三个数由大到小输出。
//#include<stdio.h>
//
//int main()
//{
//	int x, y, z, t;
//	printf("\n请输入三个数字\n");
//	scanf("%d %d %d", &x, &y, &z);
//	if (x < y)
//	{
//		t = x ;
//		x = y;
//		y = t;
//	}
//	if (x < z)
//	{
//		t = x;
//		x = z;
//		z = t;
//	}
//	if (y < z)
//	{
//		t = y;
//		y = z;
//		z = t;
//	}
//	printf("%d %d %d\n", x, y, z);
//	return 0;
//}
//#include<stdio.h>
//void chang(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf("%d%d%d", &x, &y, &z);
//	if (x < y)
//	{
//		chang(&x, &y);
//	}
//	if (x < z)
//	{
//		chang(&x, &z);
//	}
//	if (y < z)
//	{
//		chang(&y, &z);
//	}
//	printf("%d %d %d", x, y, z);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int x, y, z, t;
//    printf("\n请输入三个数字:\n");
//    scanf("%d%d%d", &x, &y, &z);
//
//    if (x > y) {
//        /*交换x,y的值*/
//        t = x; x = y; y = t;
//    }
//
//    if (x > z) {
//        /*交换x,z的值*/
//        t = z; z = x; x = t;
//    }
//
//    if (y > z) {
//        /*交换z,y的值*/
//        t = y; y = z; z = t;
//    }
//
//    printf("从小到大排序: %d %d %d\n", x, y, z);
//}




//(i == 0 && j != 0) || (i == n - 1 && j != 0) || (j == 0 && i < n - 1 && i>0))



//if (n <= 2)
//{
//	printf("输入错误\n");
//	break;
//
//}

//六）用*号输出字母C的图案。
//动态版：
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1&&n>2)
//	{
//		
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if ((i == 0 && j != 0) || (i == n - 1 && j != 0)|| (j == 0 && i < n - 1 && i>0))
//				{
//					printf("*");
//					
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//
//		}
//		
//	}
//	return 0;
//}
//
//
//硬打版（低级）
//#include "stdio.h"
//int main()
//{
//    printf("用 * 号输出字母 C!\n");
//    printf(" ****\n");
//    printf(" *\n");
//    printf(" * \n");
//    printf(" ****\n");
//}

//七）输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("X");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("X");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}printf("\n");
//		}
//	}
//	return 0;
//}



//答案
//#include<stdio.h>
//int main()
//{
//    char a = 176, b = 219;
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", a, a, b, a, a);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//    return 0;
//}


//八）输出 9*9 口诀
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 1;
//		int j = 1;
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= n; j++)
//			{
//				int sum = i * j;
//				printf("%d*%d=%d", i, j, sum);
//				printf("   ");
//
//			}
//			printf("\n");
//		}
//
//	}
//	
//	return 0;
//}

//答案
//#include <stdio.h>
//
//int main() {
//    int i, j, result;
//    printf("\n");
//    for (i = 1; i < 10; i++) {
//        for (j = 1; j <= i; j++) {
//            result = i * j;
//            printf("%d*%d=%-3d", i, j, result); /* -3d表示左对齐，占3位 */
//        }
//        printf("\n"); /* 每一行后换行 */
//    }
//    return 0;
//}



//九）要求输出国际象棋棋盘。
//
//程序分析：国际象棋棋盘由64个黑白相间的格子组成，分为8行 * 8列。用i控制行，j来控制列，根据i + j的和的变化来控制输出黑方格，还是白方格。
//
//如果出现乱码情况请参考本博客【C 练习实例7】的解决方法。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if ((i + j) % 2 != 0)
//			{
//				printf(" ");
//			}
//			else
//			{
//				printf("#");
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//答案：
//#include<stdio.h>
//int main()
//{
//    int i, j;
//    for (i = 0; i < 8; i++)
//    {
//        for (j = 0; j < 8; j++)
//            if ((i + j) % 2 == 0)
//                printf("%c%c", 219, 219);
//            else printf("  ");
//        printf("\n");
//    }
//    return 0;
//}


//十）题目：打印楼梯，同时在楼梯上方打印两个笑脸。
//
//程序分析：用 ASCII 1 来输出笑脸；用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数。
//
//如果出现乱码情况请参考【C 练习实例7】的解决方法。
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("\n");
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <=i; j++)
//			{
//				
//				if (i == j && i == 0 && j == 0)
//				{
//					printf("^^__");
//				}
//				else
//				{
//					printf("____ ");
//				}
//				
//
//				
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int i, j;
//    printf("\1\1\n"); /*输出两个笑脸*/
//    for (i = 1; i < 11; i++)
//    {
//        for (j = 1; j <= i; j++)
//            printf("%c%c", 219, 219);
//        printf("\n");
//    }
//    return 0;
//}


//十一）古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
//
//程序分析：兔子的规律为数列1, 1, 2, 3, 5, 8, 13, 21....，即下个月是上两个月之和（从第三个月开始）。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//    int i = 1;
//	int arr[100000] = { 0 };
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (i == 1 || i == 2)
//		{
//			arr[i] = 1;
//			printf("%d", arr[i]);
//			
//		}
//		else if(i>2)
//		{
//			arr[i] = arr[i - 2] + arr[i - 1];
//			printf("%d",arr[i]);
//		}
//		printf("  ");
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//    int i = 1;
//	int arr[100000] = { 0 };
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (i == 1 || i == 2)
//		{
//			arr[i] = 1;
//			
//			
//		}
//		else if(i>2)
//		{
//			arr[i] = arr[i - 2] + arr[i - 1];
//			
//		}
//		printf("%d", arr[i]);
//		printf("  ");
//	}
//	
//
//	return 0;
//}

//答案：
#include <stdio.h>

//int main()
//{
//    int a = 1, b = 1, temp, i;
//    printf("%12d%12d", a, b); // 输出前两项
//
//    for (i = 3; i <= 20; i += 2)
//    {
//        temp = a + b; // 计算下一项
//        printf("%12d", temp); // 输出下一项
//
//        a = b; // 更新a
//        b = temp; // 更新b
//
//        temp = a + b; // 再计算下一项
//        printf("%12d\n", temp); // 输出并换行
//
//        a = b; // 更新a
//        b = temp; // 更新b
//    }
//
//    return 0;
//}


//十二）判断 101 到 200 之间的素数。
//
//程序分析：判断素数的方法：用一个数分别去除 2 到 sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数(素数是除了1和自己本身以外，在他们之间没有一个数能整除这个数；所以限制条件是J在2到它本身之间)。
//#include<stdio.h>
//int main()
//{
//	int i = 101;
//	int j = 2;
//	for (i = 101; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j ==0)
//			{
//				break;
//			}
//			
//			else
//			{
//				printf("%d", i);
//				printf("   ");
//				break;
//			}
//		}
//	}
//	return 0;
//}

//答案：
//#include <stdio.h>
//int main()
//{
//    int i, j;
//    int count = 0;
//
//    for (i = 101; i <= 200; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            // 如果 j 能被 i 整除再跳出循环
//            if (i % j == 0)
//                break;
//        }
//        // 判断循环是否提前跳出，如果 j<i 说明在 2~j 之间,i 有可整除的数
//        if (j >= i)
//        {
//            count++;
//            printf("%d ", i);
//            // 换行，用 count 计数，每五个数换行
//            if (count % 5 == 0)
//                printf("\n");
//        }
//    }
//    return 0;
//}

//十三）题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153 = 1的三次方＋5的三次方＋3的三次方。
//
//程序分析：利用for循环控制100 - 999个数，每个数分解出个位，十位，百位。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		int a, b, c;
//		a = i % 10;
//		b = (i / 10) % 10;
//		c = ((i / 10) / 10) % 10;
//		if (i == ((a * a * a) + (b * b * b) + (c * c * c)))
//		{
//			printf("%d", i);
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int i, x, y, z;
//
//    // 遍历 100 到 999 的数字
//    for (i = 100; i < 1000; i++) {
//        // 计算各位数字
//        x = i % 10;             // 个位
//        y = (i / 10) % 10;      // 十位
//        z = (i / 100) % 10;     // 百位
//
//        // 计算立方和
//        int sum = x * x * x + y * y * y + z * z * z;
//
//        // 判断是否为水仙花数
//        if (i == sum) {
//            printf("%d\n", i);
//        }
//    }
//
//    return 0;
//}


//十四） 题目：将一个正整数分解质因数。例如：输入 90, 打印出 90 = 2 * 3 * 3 * 5。
//
//程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：
//
//(1)如果这个质数恰等于（小于的时候，继续执行循环）n，则说明分解质因数的过程已经结束，另外 打印出即可。
//(2)但n能被k整除，则应打印出k的值，并用n除以k的商, 作为新的正整数n.重复执行第二步。
//(3)如果n不能被k整除，则用k + 1作为k的值, 重复执行第一步。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入数字\n");
//	scanf("%d", &n);
//	printf("%d=", n);
//	for (i = 2; i <= n; i++)
//	{
//		while (n % i == 0)
//		{
//			printf("%d", i);
//			n /= i;
//			if (n != 1)
//		    {
//			printf("*");
//		    }
//		}
//		
//	}
//	return 0;
//}



//十五）利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	char gread = 0;
//	printf("请输入分数\n");
//	scanf("%d", &n);
//	gread = (n >= 90)?'A':((n >= 60)?'B':'C');
//	printf("%c", gread);
//	
//	return 0;
//}


//十六）输入两个正整数m和n，求其最大公约数和最小公倍数。//辗转相除
#include<stdio.h>
//int main()
//{
//	int n = 0; 
//	int m = 0;
//	int b = 0;
//	scanf("%d%d", &n, &m);
//	b = m * n;
//	while (n%m)
//	{
//		int s = n % m;
//		n = m;
//		m = s;
//		
//	}
//	printf("最大公因数为：%d", m);
//	printf("最小公倍数为:%d", b/m);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int a, b, t, r, n;
//    printf("请输入两个数字：\n");
//    scanf("%d %d", &a, &b);
//    if (a < b)
//    {
//        t = b; b = a; a = t;
//    }
//    r = a % b;
//    n = a * b;
//    while (r != 0)
//    {
//        a = b;
//        b = r;
//        r = a % b;
//    }
//    printf("这两个数的最大公约数是%d，最小公倍数是%d\n", b, n / b);
//
//    return 0;
//}


//十七）：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

//程序分析：利用while语句, 条件为输入的字符不为'\n'。
//#include<stdio.h>
//int main()
//{
//	char arr;
//	
//	int add1 = 0;
//	int add2 = 0;
//	int add3 = 0;
//	int add4 = 0;
//	while((arr=getchar())!='\n')
//	{
//		if (arr == 32)
//		{
//			 add1++;
//	    }
//		else if ((arr >= 33 && arr <= 47) || (arr >= 58 && arr <= 64) || (arr >= 91 && arr <= 96) || (arr >= 123 && arr <= 126))
//		{
//			add2++;
//		}
//		else if (arr >= 48 && arr <= 57)
//		{
//            add3++;
//		}
//		else if (arr >= 65 && arr <= 122)
//		{
//			add4++;
//
//		}
//
//	}
//
//	printf("空格的个数是：%d\n", add1);
//	printf("其他符号个数:%d\n", add2);
//	printf("数字个数：%d\n", add3);
//	printf("字母个数：%d\n", add4);
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    char c;
//    int letterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;
//
//    printf("请输入一些字符：\n");
//
//    while ((c = getchar()) != '\n')
//    {
//        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//            letterCount++;
//        }
//        else if (c >= '0' && c <= '9') {
//            digitCount++;
//        }
//        else if (c == ' ') {
//            spaceCount++;
//        }
//        else {
//            otherCount++;
//        }
//    }
//
//    printf("字母 = %d, 数字 = %d, 空格 = %d, 其他 = %d\n", letterCount, digitCount, spaceCount, otherCount);
//    return 0;
//}









//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h> // 用于isspace函数
//
//#define MAX_RANGE 65535
//
//int main() {
//    char s[MAX_RANGE];
//    size_t i = 0;
//
//    // 定义四个变量分别作为对应的计数器
//    unsigned int count_Num = 0;
//    unsigned int count_Char = 0;
//    unsigned int count_Space = 0;
//    unsigned int count_Other = 0;
//
//    printf("请输入一个长度不大于%d的字符串\n", MAX_RANGE);
//    if (fgets(s, sizeof(s), stdin) == NULL) {
//        fprintf(stderr, "读取输入失败。\n");
//        return 1;
//    }
//
//    // 去除fgets读取的换行符
//    s[strcspn(s, "\n")] = 0;
//
//    for (i = 0; s[i] != '\0'; i++) {
//        if (isdigit((unsigned char)s[i])) {
//            count_Num++;
//        }
//        else if (isalpha((unsigned char)s[i])) {
//            count_Char++;
//        }
//        else if (isspace((unsigned char)s[i])) {
//            count_Space++;
//        }
//        else {
//            count_Other++;
//        }
//    }
//
//    printf("空格符:%u个  英文字符:%u个  数字:%u个  其它字符:%u个\n", count_Space, count_Char, count_Num, count_Other);
//
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












//十八）题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

//程序分析：关键是计算出每一项的值。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d%d", &i, &n);
//	int j = 0;
//	int sum = 0;
//	int k = 0;
//	for (j = 0; j < n; j++)
//	{
//		k = (k * 10) + i;
//		sum += k; 
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int s = 0, a, n, t;
//    printf("请输入 a 和 n：\n");
//    scanf("%d%d", &a, &n);
//    t = a;
//    while (n > 0)
//    {
//        s += t;
//        a = a * 10;
//        t += a;
//        n--;
//    }
//    printf("a+aa+...=%d\n", s);
//    return 0;
//}

//十九）题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"，例如 6=1＋2＋3 ，请编程找出 1000 以内的所有完数。
//#include<stdio.h>
//int panduan(int m)
//{
//	int m = 0;
//	int sum = 0;
//	for (n = 1; n <m; n++)
//	{
//		if (m % n == 0)
//		{
//			sum += n;
//		}
//
//	}
//	if (m == sum)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int panduan(int m);
//	for (i = 1; i <= 1000; i++)
//	{
//		if (panduan(i))
//		{
//				printf("%d", i);
//				printf("\n");
//		}
//		
//	}
//	return 0;
//}




//int main()
//{ 
//	int i = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//			if (i == sum&&j==i-1)//j==i-1保证它加到最后一位，防止加到中途有的和与i相等eg 24这个特殊的数
//			{
//				printf("%d", i);
//				printf("\n");
//				sum = 0;
//			}
//		}
//	}
//	return 0;
//}
// 
// 
// 
// 
// 
// 
// 
// 
// 
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 1000
//
//// 函数：找到一个数的所有因数并计算其和
//int findDivisors(int num, int** divisors) {
//    int sum = 1; // 初始化因数和为1（1是所有数的因数）
//    int count = 1; // 初始化因数计数
//    *divisors = (int*)malloc(num * sizeof(int)); // 动态分配内存存储因数
//    (*divisors)[0] = 1; // 第一个因数是1
//
//    // 遍历从2到num/2的所有数，寻找因数
//    for (int j = 2; j <= num / 2; ++j) {
//        if (num % j == 0) { // 如果j是num的因数
//            sum += j; // 加到因数和中
//            (*divisors)[count++] = j; // 存储因数
//        }
//    }
//
//    return sum; // 返回因数和
//}
//
//int main() {
//    // 遍历从2到N的所有数，寻找完美数
//    for (int i = 2; i <= N; ++i) {
//        int* divisors; // 指针用于存储因数数组
//        int sum = findDivisors(i, &divisors); // 获取因数和
//
//        // 如果当前数是完美数（因数和等于数本身）
//        if (i == sum) {
//            printf("%d = %d", i, divisors[0]);
//            for (int n = 1; divisors[n] != 0; ++n) { // 输出所有因数
//                printf(" + %d", divisors[n]);
//            }
//            printf("\n");
//        }
//
//        free(divisors); // 释放动态分配的内存
//    }
//
//    return 0; // 返回0表示程序成功结束
//}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




//二十）题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
//#include<stdio.h>
//int main()
//{
//	while (1) 
//	{double back = 0;
//	int n = 0;
//	printf("请输入原始高度，反弹次数\n");
//	scanf("%lf%d",&back,&n);
//	double sum = 0;
//	sum = back;
//	back = back / 2;//第一次反弹高度
//	
//	if (n==1)
//	{
//		printf("第%d次开始弹起时经过%lf米，将反弹%lf米",n, sum, back);
//	}
//	else if (n >=2) 
//	{
//		 int i = 0;
//		 for (i = 2; i <= n; i++)
//	     {
//		  sum = sum + back * 2;
//		  back /= 2;
//	     }
//	    printf("第%d次开始弹起时经过%lf米，将反弹高度为%lf米", n,sum,back);
//
//	}
//	else
//	{
//		printf("输入错误\n");
//	}
//	
//
//	}
//	
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    float h, s;
//    h = s = 100;
//    h = h / 2; //第一次反弹高度
//    for (int i = 2; i <= 10; i++)
//    {
//        s = s + 2 * h;
//        h = h / 2;
//    }
//    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n", s, h);
//    return 0;
//}

//二十一）题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
//的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
//x后=x前/2-1——>可以转换为x前=（x后+1）*2然后循环下去得结果
//#include<stdio.h>
//int main()
//{
//	int xq = 0;
//	int xh = 0;
//	int i = 0;
//	xh = 1;//第十天时剩下一个桃子
//	for (i = 1; i < 10; i++)//往前推
//	{
//		
//		xq = ((xh+1)*2);
//		xh = xq;
//	}
//	printf("%d", xq);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int day, x1 = 0, x2;
//    day = 9;
//    x2 = 1;
//    while (day > 0) {
//        x1 = (x2 + 1) * 2;  // 第一天的桃子数是第2天桃子数加1后的2倍
//        x2 = x1;
//        day--;
//    }
//    printf("总数为 %d\n", x1);
//
//    return 0;
//}


//二十二）题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
//#include<stdio.h>//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 'x'; i <= 'z'; i++)
//	{
//		for (j = 'x'; j <= 'z'; j++)
//		{
//			for (k = 'x'; k <= 'z'; k++)
//			{
//				if (i != 'x' && k != 'x' && k != 'z' && i != j && i != k && j != k)
//				{
//					printf("a--%c\nb--%c\nc--%c\n", i, j, k);
//				}
//			}
//		}
//	}
//	
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	char i, j, k;
//	for (i = 'x'; i <= 'z'; i++) {
//		for (j = 'x'; j <= 'z'; j++) {
//			if (i != j) {
//				for (k = 'x'; k <= 'z'; k++) {
//					if (i != k && j != k) {
//						if (i != 'x' && k != 'x' && k != 'z') {
//							printf("顺序为：a--%c\tb--%c\tc--%c\n", i, j, k);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//二十三）打印出如下图案（菱形）
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	//上半部分
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 2 * i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = n - 1; i > 0; i--)
//	{
//		for (j = n -i; j > 0; j--)
//		{
//			printf(" ");
//		}
//		for (k = 2 * i - 1; k > 0; k--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int i, j, k;
//    for (i = 0; i <= 3; i++) {
//        for (j = 0; j <= 2 - i; j++) {
//            printf(" ");
//        }
//        for (k = 0; k <= 2 * i; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (i = 0; i <= 2; i++) {
//        for (j = 0; j <= i; j++) {
//            printf(" ");
//        }
//        for (k = 0; k <= 4 - 2 * i; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//}


////二十四）题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
//
//程序分析：请抓住分子与分母的变化规律。
//#include<stdio.h>
//int main()
//{
//	float sum = 0;
//	float fz = 0;
//	float fm = 0;
//	int i = 0;
//	float n = 0;
//	fz = 2;
//	fm = 1;
//	for (i = 0; i < 20; i++)
//	{
//		sum += (fz / fm);
//	    n = fz + fm;
//		fm = fz;
//		fz = n;;
//	}
//	printf("%lf", sum);
//	return 0;
//}


//二十五）题目：求 1 + 2! + 3! + ... + 20! 的和。

////程序分析：此程序只是把累加变成了累乘。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	double ret = 0.0;
//	double sum = 0.0;
//        for (i = 1; i <= 20; i++)
//		{
//			ret = 1;
//			for (j = 1; j <= i; j++)
//			{
//				ret = ret * j;
//				if (i == j)
//				{
//					sum += ret;
//				}
//			}
//		}
//	printf("1到20阶乘的总和为：%lf", sum);
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i, j;
//	double c;
//	double sum = 0.0;
//	for (i = 1; i <= 20; i++)
//	{
//		c = 1;
//		for (j = 1; j <= i; j++)
//		{
//			c *= j;
//		}
//		sum += c;
//	}
//	printf("1+2!+3!+...+20!的和为：%lf\n", sum);
//	// system("pause");
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	long long ret = 0.0;
//	long long sum = 0.0;
//	for (i = 1; i <= 20; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//			if (i == j)
//			{
//				sum += ret;
//			}
//		}
//	}
//	printf("1到20阶乘的总和为：%lld", sum);
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0; 
//	double ret = 0.0;
//	double sum = 0.0;
//	while (scanf("%d", &n) ==1)
//	{
//		sum=0;
//	  for (i = 1; i <= n; i++)
//	  {
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//			if (i == j)
//			{
//				sum += ret;
//			}
//		}
//	  }
//     printf("1到20阶乘的总和为：%lf", sum);
//	}
//	return 0;
//}

//int main() {
//	int i, t, n;
//	long long sum, temp;
//	while (scanf("%d", &n) != EOF) {
//		sum = 0;
//		if (n == 0 || n == 1) {
//			printf("1\n");
//		}
//		else {
//			for (i = 1; i <= n; i++) {
//				temp = 1;
//				t = i;
//				while (t) {
//					temp = temp * t;
//					t--;
//				}
//				sum += temp;
//			}
//		}
//		printf("%lld\n", sum);
//	}
//	return 0;
//}


//二十六）题目：利用递归方法求5!。
//#include<stdio.h>
//int jiecheng(int x)
//{
//	int ret = 0;
//	if(x>1)
//	{
//		ret = x * (jiecheng(x - 1));//关键递归！！！！
//	}
//	else if(x==0||x==1)
//	{
//		ret = 1;
//	}
//	else
//	{
//		printf("输入错误,请重新输入:>");
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要求阶乘的数:>");
//	
//	while (scanf("%d", &n) == 1)
//	{
//		
//		jiecheng(n);
//		if (n >= 0)
//		{
//			printf("%d!=%d\n", n, jiecheng(n));
//			printf("请输入要求阶乘的数:>");
//
//		}
//	    
//	}
//	
//	return 0;
//}

//答案：
//#include <stdio.h>
//
//int main()
//{
//    int i;
//    int fact(int);
//    for (i = 0; i < 6; i++) {
//        printf("%d!=%d\n", i, fact(i));
//    }
//}
//int fact(int j)
//{
//    int sum;
//    if (j == 0) {
//        sum = 1;
//    }
//    else {
//        sum = j * fact(j - 1);
//    }
//    return sum;
//}


//二十七）题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
//#include<stdio.h>
//char* changedd(char *zf, int k, int z)//k代表左边 z代表右边
//{
//	if (k<z)
//	{
//			char t = zf[k];
//			zf[k] = zf[z-1];//这里的z-1是让追右边指向正序字符的最后一个字符，如果z不-1追右边指向正序字符的最后一个字符则为'\0'
//			zf[z-1] = t;//这里的z-1是让追右边指向正序字符的最后一个字符，如果z不-1追右边指向正序字符的最后一个字符则为'\0'
//			changedd(zf, k+1,z-1);//这里的z-1是使其进入递归
//			
//	}
//	return zf;
//}
//int main()
//{
//	char arr[7] = { 0 };//留多一个字符空间来放’\0'防止栈溢出导致出错！！！！！！；其中[]内的数根据需要打印的字符个数改动，不能一下子放个过大的数（他不像动态内存可以灵活变化，你打完字符后剩下的空间都会初始化成0）
//	printf("请输入6个字母进行倒叙排列:>");
//	scanf("%s", &arr);
//	int sz = (sizeof(arr)/sizeof(arr[0])) - 1;//数组下标从0开始计，所以要-1
//	int n = 0;
//    changedd(arr, n, sz);
//	printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//char* changedd(char* zf, int k, int z)
//{
//	if (k < z)
//	{
//		char t = zf[k];
//		zf[k] = zf[z];
//		zf[z] = t;
//		changedd(zf, k + 1, z - 1);
//
//	}
//	return zf;
//}
//int main()
//{
//	
//	int n = 0;
//	char arr[] = "abcdef";
//	int sz = strlen(arr)-1;//strlen是专门数字符的不会把‘\0'算进去
//	changedd(arr, n, sz);
//	printf("%s", arr);
//	return 0;
//}


// 
// 
// 
// 
////普通的逆序字符串
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	scanf("%s", &arr);
//	int sz = strlen(arr) - 1;
//	int right = 0;
//	int left = 0;
//	right = sz;
//	left = 0;
//	while(left<right)
//	{
//		int t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//		
//	}
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>
//void changeddd(char*zf,int n)
//{
//	if (n >= 1)
//	{
//		printf("%c", zf[n - 1]);
//		changeddd(zf, n - 1);
//	}
//}
//int main()
//{
//	char arr[2000] = { 0 };
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	changeddd(arr,sz);
//	return 0;
//}


//二十八）题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。
// 问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
// 程序分析：利用递归的方法，递归分为回推和递推两个阶段。要想知道第五个人岁数，需知道第四人的岁数，依次类推，推到第一人（10岁），再往回推。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int age = 0;
//	age = 10;//第一个人年龄
//	for (i = 1; i < 5; i++)//从第二个人开问，问4次知道第五个人
//	{
//		age += 2;
//	}
//	printf("%d", age);
//	return 0;
//}
// 

//#include<stdio.h>
//int suan(int old,int num)
//{
//	if ((num - 1) > 0)
//	{
//		old = suan(old, num - 1) + 2;//递归有递推和递回两步；先用suan(old,num-1）递推到最后一个（也就是第一个人的年龄）；后来递回就与递推反着来，那就从第一个开始加2，加回到要求的第N个人（反着来所以用+2，而不是-2）
//		//拆开来：当num=5------------进入时old=10;num=4
//		//------//当num=4时------------------------进入old=10;num=3
//		//...
//		//当num=2----------------------------------------------------------old=10;num=1(最底下）过后开始返回（开始从10加上2）
//	}
//	return old;//返回的old就是上面追左边的old（也就是要求的）
//}
//int main()
//{
//	int age = 0;
//	int n = 0;
//	printf("请输入第一个人的年龄和要求的第几个人:>");
//	scanf("%d%d", &age, &n);
//	int agen =0;
//	agen = suan(age,n);
//	printf("第%d个人的年龄为：%d", n, agen);
//	return 0;
//}

//#include<stdio.h>
//int suan(int old, int num)
//{
//	int latter = 0;
//	int i = 0;
//	for (i = num; i - 1 > 0; i--)
//	{
//		latter = old + 2;
//		old = latter;
//	}
//	return latter;
//}
//int main()
//{
//	int age = 0;
//	int n = 0;
//	printf("请输入第一个人的年龄和要求的第几个人:>");
//	scanf("%d%d", &age, &n);
//	int agen = 0;
//	agen = suan(age, n);
//	printf("第%d个人的年龄为：%d", n, agen);
//	return 0;
//}


//#include <stdio.h>
//
//int age(n)
//int n;
//{
//    int c;
//    if (n == 1) c = 10;
//    else c = age(n - 1) + 2;
//    return(c);
//}
//int main()
//{
//    printf("%d\n", age(5));
//}


//二十九）题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &n);
//	int shu = 0;
//	shu = n;
//	int wei = 0;
//	int count = 0;
//	while (n > 0)
//	{
//		wei = n % 10;
//		count++;
//		n = n / 10;
//         printf("%d  ", wei);
//	}
//	printf("为%d位数的逆序\n", count);
//	printf("%d是一个%d位数", shu, count);
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//    long a, b, c, d, e, x;
//    printf("请输入 5 位数字：");
//    scanf("%ld", &x);
//    a = x / 10000;        /*分解出万位*/
//    b = x % 10000 / 1000;   /*分解出千位*/
//    c = x % 1000 / 100;     /*分解出百位*/
//    d = x % 100 / 10;       /*分解出十位*/
//    e = x % 10;           /*分解出个位*/
//    if (a != 0) {
//        printf("为 5 位数,逆序为： %ld %ld %ld %ld %ld\n", e, d, c, b, a);
//    }
//    else if (b != 0) {
//        printf("为 4 位数,逆序为： %ld %ld %ld %ld\n", e, d, c, b);
//    }
//    else if (c != 0) {
//        printf("为 3 位数,逆序为：%ld %ld %ld\n", e, d, c);
//    }
//    else if (d != 0) {
//        printf("为 2 位数,逆序为： %ld %ld\n", e, d);
//    }
//    else if (e != 0) {
//        printf("为 1 位数,逆序为：%ld\n", e);
//    }
//}


//三十）题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
//程序分析：学会分解出每一位数。
//#include<stdio.h>
//int main()
//{
//	printf("请输入一个数字:>");
//	char arr[7] = { 0 };//--------------------------------弊端：要输入回文数时要先确定char arr[]中[]内大小，防止栈溢出，且[]中的空间为回文数位数+1（确保可以放多一个'\0'
//	scanf("%s", &arr);
//	int sz = sizeof(arr) / sizeof(arr[0]) - 2;//--------------------sizeof算的是数组大小，打不够的会自动在后补0；补满为止
//	int left = 0;
//	int right = 0;
//	right = sz; 
//	while (left < right)
//	{
//		if (arr[left] == arr[right])
//		{
//			left++;
//			right--;
//			if (left == right)
//			{
//				printf("%s该数是回文数\n", arr);
//				break;
//			}
//		}
//		else
//		{
//			printf("不是回文数\n");
//			break;
//		}
//		if (left > right)//如果回文数是偶数位时，在上个if语句中left++;right--;使得left>right(left!=right),因此跳到此处进入再次判断
//		{
//			if (arr[left] == arr[right])
//			{
//				printf("%s该数是回文数\n", arr);
//				break;
//			}
//
//		}
//		
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("请输入一个数字:>");
//	char arr[10000] = { 0 };//没有上面的弊端，因为用了strlen（专门数字符且不数'\0'）
//	scanf("%s", &arr);
//	int sz = strlen(arr) - 1;
//	int left = 0;
//	int right = 0;
//	right = sz;
//	while (left < right)
//	{
//		if (arr[left] == arr[right])//判断回文数是奇数位时
//		{
//			left++;
//			right--;
//			if (left == right)
//			{
//				printf("%s该数是回文数\n", arr);
//				break;
//			}
//		}
//		else
//		{
//			printf("不是回文数\n");
//			break;
//		}
//		if (left > right)//如果回文数是偶数位时，在上个if语句中left++;right--;使得left>right(left!=right),因此跳到此处进入再次判断
//		{
//			if (arr[left] == arr[right])
//			{
//             printf("%s该数是回文数\n", arr);
//			 break;
//			}
//			
//		}
//
//	}
//	return 0;
//}


////普通：
//#include <stdio.h>
//int main()
//{
//    long ge, shi, qian, wan, x;
//    printf("请输入 5 位数字：");
//    scanf("%ld", &x);
//    wan = x / 10000;        /*分解出万位*/
//    qian = x % 10000 / 1000;  /*分解出千位*/
//    shi = x % 100 / 10;       /*分解出十位*/
//    ge = x % 10;            /*分解出个位*/
//    if (ge == wan && shi == qian) { /*个位等于万位并且十位等于千位*/
//        printf("这是回文数\n");
//    }
//    else {
//        printf("这不是回文数\n");
//    }
//}

//三十一）题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
//
//程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。
//#include<stdio.h>
//int main()
//{
//	char i = 0;
//	char j = 0;
//	printf("请输入星期几的首字母:>");
//	scanf("%c", &i);
//	getchar();
//	switch (i)
//	{
//		case'm':
//			printf("这是星期一:Monday\n");
//			break;
//		case'w':
//			printf("这是星期三：Wednesday\n");
//			break;
//		case'f':
//			printf("这是星期五：Friday\n");
//			break;
//		case't':
//			printf("请输入下一个字母:>");
//			scanf("%c", &j);
//			if (j == 'u')
//			{
//				printf("这是星期二：Tuesday\n");
//				break;
//			}
//			if (j == 'h');
//			{
//				printf("这是星期四：Thursday\n");
//				break;
//			}
//		case's':
//			printf("请输入下一个字母:>");
//			scanf("%c", &j);
//			if (j == 'a')
//			{
//				printf("这是星期六：Saturday\n");
//				break;
//			}
//			if (j == 'u')
//			{
//				printf("这是星期天：Sunday\n");
//				break;
//			}
//		default:
//			printf("输入错误");
//				break;
// }
//		
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char i = 0;
//	char j = 0;
//	printf("请输入星期几的首字母:>");
//	while (scanf("%c", &i) == 1)
//	{
//		
//
//		getchar();
//		switch (i)
//		{
//		case'm':
//			printf("这是星期一:Monday\n");
//			break;
//		case'w':
//			printf("这是星期三：Wednesday\n");
//			break;
//		case'f':
//			printf("这是星期五：Friday\n");
//			break;
//		case't':
//			printf("请输入下一个字母:>");
//			scanf("%c", &j);
//			if (j == 'u')
//			{
//				printf("这是星期二：Tuesday\n");
//				break;
//			}
//			if (j == 'h');
//			{
//				printf("这是星期四：Thursday\n");
//				break;
//			}
//		case's':
//			printf("请输入下一个字母:>");
//			scanf("%c", &j);
//			if (j == 'a')
//			{
//				printf("这是星期六：Saturday\n");
//				break;
//			}
//			if (j == 'u')
//			{
//				printf("这是星期天：Sunday\n");
//				break;
//			}
//		default:
//			printf("输入错误");
//			break;
//
//			
//		}
//		printf("请输入星期几的首字母:>");
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char i = 0;
//	char j = 0;
//	printf("请输入星期几的首字母:>");
//	scanf("%c", &i);
//	getchar;//那周输入字母后面自动添加的\0
//	switch (i)
//	{
//		case'm':
//			printf("这是星期一:Monday\n");
//			break;
//		case'w':
//			printf("这是星期三：Wednesday\n");
//			break;
//		case'f':
//			printf("这是星期五：Friday\n");
//			break;
//		case't':
//			printf("请输入下一个字母:>");
//			scanf("%c", &j);
//			if (j == 'u')
//			{
//				printf("这是星期二：Tuesday\n");
//				break;
//			}
//			if (j == 'h');
//			{
//				printf("这是星期四：Thursday\n");
//				break;
//			}
//		case's':
//			printf("请输入下一个字母:>");
//			scanf("%c", &j);
//			if (j == 'a')
//			{
//				printf("这是星期六：Saturday\n");
//				break;
//			}
//			if (j == 'u')
//			{
//				printf("这是星期天：Sunday\n");
//				break;
//			}
//		default:
//			printf("输入错误");
//				break;
// }
//		
//
//
//	return 0;
//}

//三十二）题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	printf("请输入一串字母:>");
//	int i = 0;
//	scanf("%s", &arr);
//	int z = strlen(arr);
//	printf("请输入上面字符串中要删除的字母:>");
//	getchar();//拿掉'\n'
//	char san = getchar();
//	i = 0;
//	while (i!=z)
//	{
//		if (arr[i]!=san)
//		{
//			i++;
//		}
//		else if(arr[i]==san)
//		{
//			arr[i] = ' ';
//			i++;
//		}
//	}
//	printf("%s", arr);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	printf("请输入一串字母:>");
//	int i = 0; int j = 0;
//	scanf("%s", &arr);
//	char san =0;
//	int z = strlen(arr);
//	printf("请输入上面字符串中要删除的字母:>");
//	getchar();//拿掉'\n',不然&san='\n'了，就删不了东西；
//	scanf("%c", &san);
//	i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		if (arr[i] == san)
//		{
//			for (j = i; j < strlen(arr); j++)
//			{
//				arr[j] = arr[j + 1];
//				
//			}
//			i--;//避免要删除的字母连续而删不到；
//		}
//	}
//	printf("%s", arr);
//
//	return 0;
//}
//
//
//

//三十三）改：题目：打印一个数前的所有质数
//int main()
//{
//	int n = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i == 1||i==2)
//		{
//			printf("%d\n", i);
//		}
//		else
//		{
//			int j = 0;
//			for (j = 2; j <i; j++)
//			{
//				if (i % j == 0)
//				{
//					break;
//				}
//				else if (j == i - 1 && i % j != 0)
//				{
//					printf("%d\n", i);
//				}
//			}
//		}
//	}
//	return 0;
//}

//三十三）题目：判断一个数字是否为质数。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("请输入一个要判断的数:>");
//	scanf("%d", &n);
//	int i = 0;
//	if (n == 2)
//	{
//		printf("%d是质数", n);
//	}
//	else
//	{
//		for (i = 2; i <= n; i++)
//		{
//			if (n % i == 0)
//			{
//				printf("%d不是质数", n);
//				break;
//			}
//			else if (i == n - 1 && n % i != 0)
//			{
//				printf("%d是质数", n);
//			}
//		}
//	}
//	return 0;
//}


//循环：
//int main()
//{
//	int n = 0;
//	printf("请输入一个要判断的数:>");
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				printf("%d不是质数\n", n);
//				break;
//			}
//			else if (i == n - 1 && n % i != 0)
//			{
//				printf("%d是质数\n", n);
//			}
//		}
//		printf("请输入一个要判断的数:>");
//	}
//	return 0;
//}







//三十四）题目：练习函数调用。
// #include<stdio.h>
//void helloworld()
//{
//	printf("hello world!\n");
//}
//void xunhuang()
//{
//	int x = 0;
//	for (x = 0; x < 3; x++)
//	{
//		helloworld();
//	}
//}
//int main()
//{
//	xunhuang();
//	return 0;
//}



//题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
//#include<stdio.h>
//int main()
//{
//	int right = 0;
//	int left = 0;
//	char arr[] = "www.runoob.com";
//	right = 0;
//	left = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (right < left)
//	{
//		int temp = 0;
//		temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		right++;
//		left--;
//	}
//	printf("字符串www.runoob.com反转为:");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//升级：
//#include<stdio.h>
//int main()
//{
//	int right = 0;
//	int left = 0;
//	char arr[11] = {0};//要输入字符串要数字符长度+1（'\0'）;
//	printf("请输入一串字符:>");
//	scanf("%s", &arr);
//	
//	right = 0;
//	left = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (right < left)
//	{
//		int temp = 0;
//		temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		right++;
//		left--;
//	}
//	printf("字符串反转为:");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



//三十六）题目：求100之内的素数。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int five = 0;
//	printf("100以内的素数有:\n");
//	for (i = 1; i <= 100; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0&&i!=j)
//			{
//				break;
//			}
//			else if (i%j != 0 && j == i - 1||i==2)//特殊情况i=2
//			{
//				printf("%d ", i);
//				five++;
//			}
//		}
//		if (five % 5 == 0 && five == 5)
//		{
//			printf("\n");
//			five = 0;
//		}
//
//	}
//	return 0;
//}




//(37)对10个数进行排序。
//#include<stdio.h>
//void compere(int arr[])
//{
//	int i, j;
//	i = 0; j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int temp = 0;
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("请随意输入十个数字:>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	compere(arr);
//	printf("这10个数从小到大排列顺序为:>");
//	for (i = 0; i < 10; i++)
//	{
//		if (i != 9)
//		{
//         printf("%d < ", arr[i]);
//		}
//		else
//		{
//			printf("%d  ", arr[i]);
//		}
//	}
//	return 0;
//}

//选择排序，更快
//#include<stdio.h>
//void compere(int arr[])
//{
//	int i, j, k;
//	i = 0; j = 0,k=0;
//	for (i = 0; i < 10; i++)
//	{
//		k = i;
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[k] > arr[j])
//			{
//				k = j;
//			}
//		}
//		if (k != i)
//		{
//			/*int temp = 0;
//			temp = arr[k];
//			arr[k] = arr[i];
//			arr[i] = temp;*/
//			int temp = 0;
//			temp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = temp;//都可以
//		}
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("请随意输入十个数字:>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	compere(arr);
//	printf("这10个数从小到大排列顺序为:>\n");
//	for (i = 0; i < 10; i++)
//	{
//		if (i != 9)
//		{
//			printf("%d < ", arr[i]);
//		}
//		else
//		{
//			printf("%d  ", arr[i]);
//		}
//	}
//	return 0;
//}
//




//(38)题目：求一个3*3矩阵对角线元素之和
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	int arr[3][3];
//	printf("请往3*3矩阵里输入对应数值:>\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i == j)
//			{
//				sum1 += arr[i][j];
//			}
//			if (i + j == 2)
//			{
//				sum2 += arr[i][j];
//			}
//		}
//	}
//	printf("3*3矩阵内‘\\’方向的对角线和为%d\n", sum1);
//	printf("3*3矩阵内‘/’方向的对角线和为%d\n", sum2);
//	return 0;
//}




//(39)题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
//#include<stdio.h>
//void Add(int arr[], int x, int y,int z)
//{
//	int i = 0;
//	int temp = 0;
//	for (i=x;i>y;i--)
//	{
//		if (i == y+1 )
//		{
//			temp = arr[i];//加了个temp存住原来arr[4]的值
//			arr[i] = z;//用要插入的数替换原来这个位置的数
//			arr[i + 1] = temp;//而前面的循环已经将原要插入位置后面的数都后移一位，现在在插入位置后还空着一个位，正好将原来的后移一位
//		}
//		else
//		{
//			arr[i + 1] = arr[i];
//		}
//	}
//}
//int main()
//{
//	int i = 0; int j = 0; int c = 0;
//	int n = 0;
//	int arr[11] = { 1,2,3,4,6,7,8,9,10 };
//	printf("原数组为:>\n");
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("请输入要在第几个后插入一个你想插入的数:>");
//	scanf("%d %d", &j, &n);
//	c = sizeof(arr) / sizeof(arr[0]) - 1-1;//c=8，第一个-1是数组下标从零开始，第二个-1是减去还没插入的原数组后面自动补的0后给将要插入的数空的位，否则会溢出
//	Add(arr,c, j-1, n);
//	printf("插入后数组排序为:>\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//40)题目：将一个数组逆序输出。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int right, left;
//	int arr[100];
//	printf("请输入要录入几个数进入该数组:>");
//	scanf("%d", &n);
//	right = 0; left = n - 1;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("原数组为:>");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	while (left > right)
//	{
//		int temp = 0;
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left--;
//		right++;
//	}
//	printf("逆序后的数组为:>");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}


//  (41)  题目：学习 static 定义静态变量的用法。
//在 C 语言中，static 关键字用于声明静态变量。静态变量与普通变量不同，它们的生存期和作用域是不同的。
//静态变量在声明时被初始化，只被初始化一次，而且在整个程序的生命周期内都保持存在。在函数内声明的静态变量只能在该函数内访问，而在函数外声明的静态变量则只能在该文件内访问。
// static函数在局部变量时出了函数后局部变量本该销毁，但由于static修饰过后变量不销毁，再次调用该函数时该变量将继续上次的值进行，而全局变量和函数被static修饰时则不可被
// 不同窗口调用，只能在本窗口进行调用
//int Add(int* i)
//{
//	static a = 3;
//	a += *i;
//	return a;
//}
//int main()
//{
//	int i = 1;
//	for (int j = 0; j <= 1; j++)
//	{
//		i = Add(&i);
//	}
//	printf("%d", i);
//	return 0;
//}

//（42）题目：学习使用auto定义变量的用法。auto常用于储存变量（储存到内置模块中，自动）
//#include <stdio.h>
//int main()
//{
//    int i, num;
//    num = 2;
//    for (i = 0; i < 3; i++)
//    {
//        printf("num 变量为 %d \n", num);
//        num++;
//        {
//            auto int num = 1;//auto修饰num则在进入{ }时num被创建，出去后num被销毁，不与{ }外的产生联系和影响
//            printf("内置模块 num 变量为 %d \n", num);
//            num++;
//        }
//    }
//    return 0;
//}



//（43）学习使用static的另一用法
//#include <stdio.h>
//int main()
//{
//    int i, num;
//    num = 2;
//    for (i = 0; i < 3; i++)
//    {
//        printf("num 变量为 %d \n", num);
//        num++;
//        {
//            static int num = 1;
//            printf("内置模块 num 变量为 %d\n", num);
//            num++;
//        }
//    }
//    return 0;
//}



////(44)题目：学习使用如何调用外部函数。
//#include <stdio.h>
//int a, b, c;
//void add()
//{
//    int a;
//    a = 3;
//    c = a + b;
//}
//int main()
//{
//    a = b = 4;
//    add();
//    printf("c 的值为 %d\n", c);
//    return 0;
//}



//(45)题目：学习使用register定义变量的方法
/*一、register的作用
如果一个变量用register来修饰，则意味着该变量会作为一个寄存器变量，让该变量的访问速度达到最快。
例如，一个程序逻辑中有一个很大的循环，循环中有几个变量要频繁进行操作，这些变量可以声明为register类型。

寄存器变量是指一个变量直接引用寄存器，也就是对变量名的操作的结果是直接对寄存器进行访问。
C语言允许使用寄存器保存变量的值，很明显这样能大大提高程序的执行速度。
但是，寄存器的个数是有限的，X86也就是十几个，AMR最多才37个，我们不可能将全部的变量都声明为寄存器变量，因为其他代码也需要使用寄存器，
同样，我们声明的寄存器变量也不一定直接保存在寄存器中，因为寄存器可能全部都被其他代码占用。编译器只能尽量把变量安排在寄存器中。
在使用寄存器变量时，请注意：
（1）待声明为寄存器变量的类型应该是CPU寄存器所能接受的类型，寄存器变量是单个变量，变量长度应该小于等于寄存器长度。
（2）不能对寄存器变量使用取地址符“&”，因为该变量没有内存地址。
（3）尽量在大量、频繁操作时使用寄存器变量，且声明的变量个数应该尽量少。*/
//#include <stdio.h>
//int main()
//{
//    register int i;
//    int tmp = 0;
//    for (i = 1; i <= 100; i++)
//        tmp += i;
//    printf("总和为 %d\n", tmp);
//    return 0;
//}

//(46)题目：宏#define命令练习。
//#include<stdio.h>
//#define TRUE 1
//#define FALSE 0
//#define SQ(x) (x)*(x)
//int main()
//{
//    int num;
//    int again = 1;
//    printf("如果结果值小于 50 程序将终止。\n");
//    while (again)
//    {
//        printf("\n请输入数字：");
//        scanf("%d", &num);
//        printf("该数字的平方为 %d \n", SQ(num));
//        if (SQ(num) >= 50)
//            again = TRUE;
//        else
//            again = FALSE;
//    }
//    return 0;
//}

//(47)题目：宏#define命令练习2。
//#include<stdio.h>
//#define exchange(a,b) { int t;t=a;a=b;b=t;}//注意放在一行里
//int main()
//{
//    int x = 10;
//    int y = 20;
//    printf("x=%d; y=%d\n", x, y);
//    exchange(x, y);
//    printf("x=%d; y=%d\n", x, y);
//    return 0;
//}


//(48)宏#define命令练习3。
//#define LAG >
//#define SMA <
//#define EQ ==
//#include <stdio.h>
//int main()
//{
//    int i, j;
//    printf("请输入两个数字：\n");
//    scanf("%d %d", &i, &j);
//    if (i LAG j)
//        printf("%d 大于 %d \n", i, j);
//    else if (i EQ j)
//        printf("%d 等于 %d \n", i, j);
//    else if (i SMA j)
//        printf("%d 小于 %d \n", i, j);
//    else
//        printf("没有值。\n");
//    return 0;
//}




//(49)#if #ifdef和#ifndef
//#if 、 #ifdef 和 #ifndef 都是C / C++ 等编程语言中的预处理指令。
// #endif 是和 #if 、 #ifdef 、 #ifndef 这些预处理指令配合使用的。它用于标记条件编译指令块的结束。
//#if 用于条件编译。它后面跟一个常量表达式，根据表达式的值来决定是否编译代码块。例如：
//
//#define DEBUG 1
//#if DEBUG
//printf("调试信息");
//#endif
//
//
//当 DEBUG 定义为非零值时， printf 语句所在的代码块会被编译。
//
//#ifdef 用于判断某个标识符是否已经被定义。如果已定义，就编译后面紧跟的代码块。例如：
//
//#define PI 3.14
//#ifdef PI
//double area = PI * 10 * 10;
//#endif
//
//
//这里因为 PI 被定义了，所以用于计算面积的代码会被编译。
//
//#ifndef 与 #ifdef 相反，它判断某个标识符是否未被定义。如果未定义，就编译后面的代码块。例如：
//
//#ifndef MAX_LENGTH
//#define MAX_LENGTH 100
//#endif
//
//
//如果 MAX_LENGTH 没有被定义，就会定义它为 100 。这样的指令通常用于防止头文件被重复包含。

//#include<stdio.h>
//#define MAX
//#define MAXIMUM(x,y)(x>y)?x:y
//#define MINIMUM(x,y) (x>y)?y:x
//int main()
//{
//    int a = 10, b = 20;
//#ifdef MAX
//    printf("更大的数字是 %d\n", MAXIMUM(a, b));
//#else
//    printf("更小的数字是 %d\n", MINIMUM(a, b));
//#endif
//#ifndef MIN
//    printf("更小的数字是 %d\n", MINIMUM(a, b));
//#else
//    printf("更大的数字是 %d\n", MAXIMUM(a, b));
//#endif
//#undef MAX
//#ifdef MAX
//    printf("更大的数字是 %d\n", MAXIMUM(a, b));
//#else
//    printf("更小的数字是 %d\n", MINIMUM(a, b));
//#endif
//#define MIN
//#ifndef MIN
//    printf("更小的数字是 %d\n", MINIMUM(a, b));
//#else
//    printf("更大的数字是 %d\n", MAXIMUM(a, b));
//#endif
//    return 0;
//}


//(50)题目：#include 的应用练习。
//#include<stdio.h>
//#include"text.h"
//int main()
//{
//    int i = 10;
//    int j = 20;
//    if (i LAG j)
//        printf("%d 大于 %d \n", i, j);
//    else if (i EQ j)
//        printf("%d 等于 %d \n", i, j);
//    else if (i SMA j)
//        printf("%d 小于 %d \n", i, j);
//    else
//        printf("没有值。\n");
//    return 0;
//}


//(51)题目：学习使用按位与 &。
/*在这段C语言代码中，主要涉及八进制数的表示以及按位与运算符  &  的运算，下面详细介绍其运算过程：
 
八进制数赋值：
 
- 代码中  a = 077;  这行，在C语言里，以  0  开头的数字表示八进制数，八进制的  077  转换为十进制的计算方法是：7*8^1 + 7*8^0 = 56 + 7 = 63，
所以此时变量  a  的十进制值为  63 。
第一次按位与运算（ b = a & 3; ）：
 
- 按位与运算符  &  的运算规则是：将两个操作数的二进制位逐位进行比较，只有当两个对应的二进制位都为  1  时，结果位才为  1 ，否则为  0 。
- 先将  a （十进制  63 ）和  3  转换为二进制：
-  63  的二进制表示为  00111111 （为了便于按位比较，这里写为8位）。
-  3  的二进制表示为  00000011 。
- 然后进行按位与运算：
 
  00111111
& 00000011
-----------
  00000011
 
 
- 得到的结果  00000011  转换为十进制就是  3 ，并将其赋值给变量  b 。
 
第二次按位与运算（ b &= 7; ，等价于  b = b & 7; ）：
- 此时  b  的值为  3 ， 7  的二进制表示为  00000111 。
- 对  b （ 3 ，二进制  00000011 ）和  7  进行按位与运算：
 
  00000011
& 00000111
-----------
  00000011
 
 
- 结果  00000011  转换为十进制还是  3 ，并将其重新赋值给变量  b 。
 
所以，经过这两次按位与运算，最终变量  b  的值为  3  。*/
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    a = 077;
//    b = a & 3;
//    printf("a & b(decimal) 为 %d \n", b);
//    b &= 7;
//    printf("a & b(decimal) 为 %d \n", b);
//    return 0;
//}


//(52)题目：学习使用按位或 "|"
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    a = 077;
//    b = a | 3;
//    printf("a | b(decimal) 为 %d \n", b);
//    b |= 7;
//    printf("a | b(decimal) 为 %d \n", b);
//    return 0;
//}


//(53)题目：学习使用按位异或 ^
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    a = 077;
//    b = a ^ 3;
//    printf("b 的值为 %d \n", b);
//    b ^= 7;
//    printf("b 的值为 %d \n", b);
//    return 0;
//}

////(54)题目：取一个整数 a 从右端开始的 4～7 位。
//#include <stdio.h>
//int main()
//{
//    unsigned a, b, c, d;
//    printf("请输入整数：\n");
//    scanf("%d", &a);
//    b = a >> 3;
//    c = ~(~0 << 4);
//    d = b & c;
//    printf("%o\n%o\n", a, d);
//    return 0;
//}
///*右移运算符（ >> ）
//- 功能：将一个数的二进制位向右移动指定的位数。对于无符号数，高位补0；对于有符号数，若为正数高位补0，若为负数高位补1（取决于编译器和系统的实现，有的也可能补0）。
//- 示例： unsigned int a = 10; // 二进制为0000 1010 ， a >> 2 的结果是 0000 0010 ，即十进制的2。
//有符号数 int b = -10; // 补码形式存储为1111 0110 ， b >> 2 可能得到 1111 1101 ，即十进制的-3。
//左移运算符（ << ） 
//- 功能：将一个数的二进制位向左移动指定的位数，低位补0。
//- 示例： unsigned int c = 5; // 二进制为0000 0101 ， c << 3 的结果是 0010 1000 ，即十进制的40。*/


////(55)题目：学习使用按位取反~。
////程序分析：~0 = -1; ~1 = -2;
//#include <stdio.h>
//
//int main() {
//    int num = 5;  // 二进制表示为0000 0000 0000 0101
//    int result = ~num;  // 按位取反后为1111 1111 1111 1010
//    // 有符号数，以补码形式存储，结果为-6
//    printf("按位取反结果：%d\n", result);
//
//    unsigned int num2 = 5;  // 二进制表示为0000 0000 0000 0101
//    unsigned int result2 = ~num2;  // 按位取反后为1111 1111 1111 1010
//    // 无符号数，结果为4294967290
//    printf("按位取反结果：%u\n", result2);
//
//    return 0;
//}
///*无符号整数的按位取反原理：
//- 在C语言中， unsigned int 通常是32位（不同编译器和系统可能有差异，但常见为32位）。
//- 当 unsigned int num2 = 5 时，它的二进制表示为 0000 0000 0000 0000 0000 0000 0000 0101 （假设32位系统）。
//- 对 num2 进行按位取反操作 ~num2 ，得到 1111 1111 1111 1111 1111 1111 1111 1010 。
//将二进制转换为十进制：
//- 计算无符号整数的十进制值时，使用公式：a_{n}2^{n}+a_{n - 1}2^{n - 1}+\cdots+a_{1}2^{1}+a_{0}2^{0}，其中a_{i}是二进制位的值。
//- 对于二进制数 1111 1111 1111 1111 1111 1111 1111 1010 ，计算如下：
//- 它可以写成2^{31}+2^{30}+2^{29}+2^{28}+2^{27}+2^{26}+2^{25}+2^{24}+2^{23}+2^{22}+2^{21}+2^{20}+2^{19}+2^{18}+2^{17}+2^{16}+2^{15}+2^{14}+2^{13}+2^{12}+2^{11}+2^{10}+2^{9}+2^{8}+2^{7}+2^{6}+2^{5}+2^{4}+2^{3}+2^{1}。
//- 计算结果为4294967290。
//- 也可以通过另一种思路，32位无符号整数的最大值是2^{32}-1 = 4294967295。
//- 原数 num2 为5，取反后的数就是4294967295 - 5 = 4294967290。
// 
//以下是验证代码：
// 
//#include <stdio.h>
//
//int main() {
//    unsigned int num2 = 5;
//    unsigned int result2 = ~num2;
//    printf("按位取反结果：%u\n", result2);
//    return 0;
//}
// 
// 
//在上述代码中，定义了无符号整数 num2 并初始化为5，对其进行按位取反操作后，将结果以无符号整数的格式输出，结果为4294967290。*/


//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//////(56)题目：画图，学用circle画圆形。
////#include <graphics.h> //VC6.0中是不能运行的，要在Turbo2.0/3.0中  
////int main()
////{
////    int driver, mode, i;
////    float j = 1, k = 1;
////    driver = VGA;
////    mode = VGAHI;
////    initgraph(&driver, &mode, "");
////    setbkcolor(YELLOW);
////    for (i = 0; i <= 25; i++)
////    {
////        setcolor(8);
////        circle(310, 250, k);
////        k = k + j;
////        j = j + 0.3;
////    }
////    return 0;
////}

//////(57)题目：画图，学用line画直线（在TC中实现）。
////#include "graphics.h"
////int main()
////{
////    int driver, mode, i;
////    float x0, y0, y1, x1;
////    float j = 12, k;
////    driver = VGA; mode = VGAHI;
////    initgraph(&driver, &mode, "");
////    setbkcolor(GREEN);
////    x0 = 263; y0 = 263; y1 = 275; x1 = 275;
////    for (i = 0; i <= 18; i++)
////    {
////        setcolor(5);
////        line(x0, y0, x0, y1);
////        x0 = x0 - 5;
////        y0 = y0 - 5;
////        x1 = x1 + 5;
////        y1 = y1 + 5;
////        j = j + 10;
////    }
////}

//////(58)题目：学用矩形画方形。（在TC中实现）。
////#include "graphics.h"
////int main()
////{
////    int x0, y0, y1, x1, driver, mode, i;
////    driver = VGA; mode = VGAHI;
////    initgraph(&driver, &mode, "");
////    setbkcolor(YELLOW);
////    x0 = 263; y0 = 263; y1 = 275; x1 = 275;
////    for (i = 0; i <= 18; i++)
////    {
////        setcolor(1);
////        rectangle(x0, y0, x1, y1);
////        x0 = x0 - 5;
////        y0 = y0 - 5;
////        x1 = x1 + 5;
////        y1 = y1 + 5;
////    }
////    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
////    outtextxy(150, 40, "How beautiful it is!");
////    line(130, 60, 480, 60);
////    setcolor(2);
////    circle(269, 269, 137);
////}

//////(59)题目：画图，综合例子。（在TC中实现）。
////# define PAI 3.1415926
////# define B 0.809
////# include "graphics.h"
////#include "math.h"
////int main()
////{
////    int i, j, k, x0, y0, x, y, driver, mode;
////    float a;
////    driver = CGA; mode = CGAC0;
////    initgraph(&driver, &mode, "");
////    setcolor(3);
////    setbkcolor(GREEN);
////    x0 = 150; y0 = 100;
////    circle(x0, y0, 10);
////    circle(x0, y0, 20);
////    circle(x0, y0, 50);
////    for (i = 0; i < 16; i++)
////    {
////        a = (2 * PAI / 16) * i;
////        x = ceil(x0 + 48 * cos(a));
////        y = ceil(y0 + 48 * sin(a) * B);
////        setcolor(2); line(x0, y0, x, y);
////    }
////    setcolor(3); circle(x0, y0, 60);
////    /* Make 0 time normal size letters */
////    settextstyle(DEFAULT_FONT, HORIZ_DIR, 0);
////    outtextxy(10, 170, "press a key");
////    getch();
////    setfillstyle(HATCH_FILL, YELLOW);
////    floodfill(202, 100, WHITE);
////    getch();
////    for (k = 0; k <= 500; k++)
////    {
////        setcolor(3);
////        for (i = 0; i <= 16; i++)
////        {
////            a = (2 * PAI / 16) * i + (2 * PAI / 180) * k;
////            x = ceil(x0 + 48 * cos(a));
////            y = ceil(y0 + 48 + sin(a) * B);
////            setcolor(2); line(x0, y0, x, y);
////        }
////        for (j = 1; j <= 50; j++)
////        {
////            a = (2 * PAI / 16) * i + (2 * PAI / 180) * k - 1;
////            x = ceil(x0 + 48 * cos(a));
////            y = ceil(y0 + 48 * sin(a) * B);
////            line(x0, y0, x, y);
////        }
////    }
////    restorecrtmode();
////}

//////(60)题目：画图，综合例子2。（在TC中实现）。
////#include "graphics.h"
////#define LEFT 0
////#define TOP 0
////#define RIGHT 639
////#define BOTTOM 479
////#define LINES 400
////#define MAXCOLOR 15
////int main()
////{
////    int driver, mode, error;
////    int x1, y1;
////    int x2, y2;
////    int dx1, dy1, dx2, dy2, i = 1;
////    int count = 0;
////    int color = 0;
////    driver = VGA;
////    mode = VGAHI;
////    initgraph(&driver, &mode, "");
////    x1 = x2 = y1 = y2 = 10;
////    dx1 = dy1 = 2;
////    dx2 = dy2 = 3;
////    while (!kbhit())
////    {
////        line(x1, y1, x2, y2);
////        x1 += dx1; y1 += dy1;
////        x2 += dx2; y2 + dy2;
////        if (x1 <= LEFT || x1 >= RIGHT)
////            dx1 = -dx1;
////        if (y1 <= TOP || y1 >= BOTTOM)
////            dy1 = -dy1;
////        if (x2 <= LEFT || x2 >= RIGHT)
////            dx2 = -dx2;
////        if (y2 <= TOP || y2 >= BOTTOM)
////            dy2 = -dy2;
////        if (++count > LINES)
////        {
////            setcolor(color);
////            color = (color >= MAXCOLOR) ? 0 : ++color;
////        }
////    }
////    closegraph();
////}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

//(61)题目：打印出杨辉三角形（要求打印出10行）。
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int arr[10][10];
//	for (i = 0; i < 10; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//62)题目：学习putpixel画点，（在TC中实现）。
/*include "stdio.h"
#include "graphics.h"
int main()
{
    int i, j, driver = VGA, mode = VGAHI;
    initgraph(&driver, &mode, "");
    setbkcolor(YELLOW);
    for (i = 50; i <= 230; i += 20)
        for (j = 50; j <= 230; j++)
            putpixel(i, j, 1);
    for (j = 50; j <= 230; j += 20)
        for (i = 50; i <= 230; i++)
            putpixel(i, j, 1);
}*/

////63)题目：画椭圆ellipse（在TC中实现）。
//#include "stdio.h"
//#include "graphics.h"
//#include "conio.h"
//int main()
//{
//    int x = 360, y = 160, driver = VGA, mode = VGAHI;
//    int num = 20, i;
//    int top, bottom;
//    initgraph(&driver, &mode, "");
//    top = y - 30;
//    bottom = y - 30;
//    for (i = 0; i < num; i++)
//    {
//        ellipse(250, 250, 0, 360, top, bottom);
//        top -= 5;
//        bottom += 5;
//    }
//    getch();
//}


////64)题目：利用ellipse and rectangle 画图（在TC中实现）。
//#include "stdio.h"
//#include "graphics.h"
//#include "conio.h"
//main()
//{
//    int driver = VGA, mode = VGAHI;
//    int i, num = 15, top = 50;
//    int left = 20, right = 50;
//    initgraph(&driver, &mode, "");
//    for (i = 0; i < num; i++)
//    {
//        ellipse(250, 250, 0, 360, right, left);
//        ellipse(250, 250, 0, 360, 20, top);
//        rectangle(20 - 2 * i, 20 - 2 * i, 10 * (i + 2), 10 * (i + 2));
//        right += 5;
//        left += 5;
//        top += 10;
//    }
//    getch();
//}

//65)题目：一个最优美的图案（在TC中实现）
//#include  “graphics.h”
// #include “math.h” 
// #include “dos.h” 
// #include “conio.h”  
// #include “stdlib.h” 
// #include “stdio.h” 
// #include “stdarg.h” 
// #define MAXPTS 15 #define   PI 3.1415926 
// struct PTS { int x，y; }; 
// double AspectRatio=0.85;   
// void LineToDemo（void） 
// { struct viewporttype vp;  
// 结构体 PTS 点 [MAXPTS]; 
// 整数 i、j、h、w、xcenter、ycenter; 
// int radius， 角度， step; 
// 双 rads; printf（“MoveTo / LineTo 演示” ）; 
// getViewSettings（ &vp ）; h = vp 的底部 - VP。
// 顶部;w = vp 的 vp 值。右 - 副总裁。左;xcenter = w / 2; /* 确定圆心 */ ycenter = h / 2; 半径 = （h - 30） / （纵横比 * 2）; 步长 = 360 / MAXPTS; /* 确定增量 # */ angle = 0; /* 从零度开始 */ for（ i=0 ; i<MAXPTS ; ++i ）{ /* 确定圆截距 */ rads = （double）angle * PI / 180.0; /* 将角度转换为弧度 */ points[i]。x = xcenter + （int）（ cos（rads） * radius ）; 点[i]。y = ycenter - （int）（ sin（rads） * radius * AspectRatio ）; 角度 += 步长; /* 移动到下一个增量 */ } circle（ xcenter， ycenter， radius ）; /* 绘制边界圆 */ for（ i=0 ; i<MAXPTS ; ++i ）{ /* 将绳子画到圆圈上 */ for（ j=i ; j<MAXPTS ; ++j ）{ /* 对于每个剩余的相交 */ moveto（points[i].x，点 [i]。y）; /* 移动到线的开头 */ lineto（points[j].x，点[j]。y）; /* 画线 */ } } } int main（） { int driver，mode; 驱动程序=CGA;模式=CGAC0; initgraph（&driver，&mode，“”））; setcolor（3）的; setbkcolor（绿色））; LineToDemo 演示();
//}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

//66)题目：输入3个数a,b,c，按大小顺序输出。
//#include<stdio.h>
//void campere(int a, int b, int c)
//{
//    if (a < b)
//    {
//        if (a < c)
//        {
//            if (b < c)
//            {
//                printf("%d>%d>%d",c, b, a);
//            }
//            else {
//                printf("%d>%d>%d", b, c, a);
//            }
//        }
//        else {
//            printf("%d>%d>%d",b, a, c);
//        }
//    }
//    else {
//        if (a > c)
//        {
//            if (b > c)
//            {
//                printf("%d>%d>%d", a, b, c);
//            }
//            else {
//                printf("%d>%d>%d", a, c, b);
//            }
//        }
//        else {
//            printf("%d>%d>%d", c, a, b);
//        }
//    }
//}
//int main()
//{
//    int a, b, c;
//    printf("请输入三个数来比大小:>");
//    scanf("%d %d %d", &a, &b, &c);
//    campere(a, b, c);
//    return 0;
//}

//利用指针方法
//#include<stdio.h>
//void swap(int* x, int* y)
//{
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//int main()
//
//{
//    int a, b, c;
//    printf("请输入三个数来比大小:>");
//    scanf("%d %d %d", &a, &b, &c);
//    if (a > b)
//    {
//        swap(&a, &b);
//    }
//    if (a > c)
//    {
//        swap(&a, &c); 
//    }
//    if (b > c)
//    {
//        swap(&b, &c);
//    }
//    printf("%d>%d>%d", c, b, a);
//    return 0;
//}


//67)题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组
//#include<stdio.h>
//#include<stdlib.h>
//
//void fun(int* s, int n)
//{
//    int i;
//    int max = s[0];
//    int a = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (s[i] > max)
//        {
//            max = s[i];
//            a = i;
//        }
//    }
//    s[a] = s[0];
//    s[0] = max;
//    int j;
//    int min = s[n - 1];
//    int b = n - 1;
//    for (j = 0; j < n; j++)
//    {
//        if (s[j] < min)
//        {
//            min = s[j];
//            b = j;
//        }
//    }
//    s[b] = s[n - 1];
//    s[n - 1] = min;
//}
//
//void printfs(int* s, int n)
//{
//    int i;
//    for (i = 0; i < n; i++)
//        printf("%d ", s[i]);
//    printf("\n");
//}
//
//int main()
//{
//    int s[20];
//    int i, n;
//    printf("设置数组长度(<20):");
//    scanf("%d", &n);
//    printf("输入 %d 个元素:\n", n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &s[i]);
//    fun(s, n);
//    printfs(s, n);
//    return 0;
//}



//#include<stdio.h>
//void change(int* s, int n)
//{
//    int max = s[0];
//    int a = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (s[i] > max)
//        {
//            max = s[i];
//            a = i;
//        }
//    }
//    s[a] = s[0];
//    s[0] = max;
//
//    int min = s[n - 1];
//    int b = n - 1;
//    for (int j = 0; j < n; j++)
//    {
//        if (s[j] < min)
//        {
//            min = s[j];
//            b = j;
//        }
//
//    }
//    s[b] = s[n - 1];
//    s[n - 1] = min;
//}
//
//void my_printf(int* arr, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d  ", arr[i]);
//    }
//}
//int main()
//{
//    int n;
//    int arr[20];
//    printf("请输入数组长度（<20）:>");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    change(arr, n);
//    my_printf(arr,n);
//    return 0;
//}



//68)题目：有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
//程序分析：可以使用一个辅助数组来保存需要移动的元素，然后再将元素按照要求移动到正确的位置。
//#include<stdio.h>
//void shiftArray(int arr[], int n, int m)
//{
//    int temp[100];
//    //先把原来的拷贝
//    int i,j;
//    for (i = n - m, j = 0; i<n;i++, j++)
//    {
//        temp[j] = arr[i];
//    }
//    //再从第一位依次往后移动m位
//    for (i = n-m-1; i >=0; i--)
//    {
//        arr[i + m] = arr[i];
//    }
//    //再把存起来的放在前面
//    for (i = 0; i < m; i++)
//    {
//        arr[i] = temp[i];
//    }
//}
//void my_printf(int arr[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//int main() {
//
//    int n;
//    int m;
//    int arr[100];
//    printf("亲输入该数组有多少个数(<100):>");
//    scanf("%d", &n);
//    printf("输入要往后移动m位:>");
//    scanf("%d", &m);
//    printf("请输入该数组:>");
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    printf("移动前的数组是:>");
//    my_printf(arr,n);
//
//    shiftArray(arr, n, m);
//    printf("移动后的数组为:>");
//    my_printf(arr,n);
//    return 0;
//}


//69)题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
//#include<stdio.h>
//int main()
//{
//    int n;
//    int i,k,m,j;
//    int* q;
//    int arr[100];
//    q = arr;
//    printf("请输入该圈由多少个人围成（<100):>");
//    scanf("%d", &n);
//    //标号
//    for (int num = 0; num < n; num++)
//    {
//        *(q + num) = num + 1;
//    }
//    i = 0;
//    k = 0;
//    m = 0;
//    while (m < n - 1)
//    {
//        if (*(q + i) != 0)
//        {
//            k++;
//        }
//        if (k==3)
//        {
//            k = 0;
//            *(q + i) = 0;
//            m++;
//        }
//        i++;
//        if (i == n)
//        {
//            i = 0;
//        }
//    }
//    printf("最后留下的是:>");
//    for (j = 0; j < n; j++)
//    {
//        if (arr[j] != 0)
//        {
//            printf("%2d号", arr[j]);
//        }
//    }
//    return 0;
//}


//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

//#include <stdio.h>
//void main()
//{
//    int num[50], n, * p, j, loop, i, m, k;
//    printf("请输入这一圈人的数量:\n");
//    scanf("%d", &n);
//    p = num;
//    //开始给这些人编号
//    for (j = 0; j < n; j++)
//    {
//        *(p + j) = j + 1;
//    }
//    i = 0;//i用于计数,即让指针后移
//    m = 0;//m记录退出圈子的人数
//    k = 0;//k报数1,2,3
//    while (m < n - 1)//当退出的人数不大于总人数时，即留下的人数至少是一个人
//        //这句不能写成m<n,因为假设有8人，当退出了6人时，此时还是进行人数退出，即m++，
//        //这时是7<8，剩下的一个人自己喊1，2,3那么他也就退出了，将不会有输出
//    {
//        if (*(p + i) != 0)//如果这个人的头上编号不是0就开始报数加1，这里采用的方法是报数为3的人头上编号重置为0
//        {
//            k++;
//        }
//        if (k == 3)
//        {
//            k = 0;    //报数清零，即下一个人从1开始报数
//            *(p + i) = 0;//将报数为3的人编号重置为0
//            m++;    //退出人数加1
//        }
//        i++;      //指针后移
//        if (i == n)//这句很关键，如果到了队尾，就要使指针重新指向对头
//            //并且它只能放在i++后面，因为只有i++了才有可能i==n
//        {
//            i = 0;
//        }
//
//
//    }
//    printf("现在剩下的人是:");
//    for (loop = 0; loop < n; loop++)
//    {
//        if (num[loop] != 0)
//        {
//            printf("%2d号\n", num[loop]);
//        }
//    }
//
//}

//70)题目：写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
//法一:这里不能有空格，不然算不到后面的
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int length;
//    char arr[100];
//    printf("请输入字符串:>");
//    scanf("%s", &arr);
//    length = strlen(arr);
//    printf("该字符串长度为：%d", length);
//    return 0;
//}

//法二：这个也不能有空格 
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int length(char* s);
//
//int main() {
//    char str[100]; // 可以根据实际情况增大数组长度
//    printf("请输入字符串:\n");
//    scanf("%s", str);
//
//    int len = length(str); // 调用 length 函数计算字符串长度
//
//    printf("字符串有 %d 个字符。\n", len);
//    return EXIT_SUCCESS;
//}
//
////求字符串长度  
//int length(char* s) {
//    int i = 0;
//    while (*s != '\0') {
//        i++;
//        s++;
//    }
//    return i;
//}

//71)题目：编写input()和output()函数输入，输出5个学生的数据记录。
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct {
//    char name[20];
//    char sex[5];
//    int age;
//}internation;
//
//void my_input(internation* stu)
//{
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%s %s %d", &stu[i].name, &stu[i].sex, &stu[i].age);
//    }
//}
//void my_output(internation* stu)
//{
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%s %s %d", stu[i].name, stu[i].sex, stu[i].age);
//        printf("\n");
//    }
//}
//int main()
//{
//    internation stu[5];
//    printf("请分别输入5名学生的：姓名，性别，年龄\n");
//    my_input(stu);
//    printf("输出录入的5名学生信息:> 姓名，性别，年龄\n");
//    my_output(stu);
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//typedef struct {
//    char name[20];
//    char sex[5];
//    int  age;
//}Stu;
//void input(Stu* stu);
//void output(Stu* stu);
//int main()
//{
//    Stu stu[5];
//    printf("请输入5个学生的信息：姓名 性别 年龄:\n");
//    input(stu);
//    printf("5个学生的信息如下：\n姓名  性别  年龄\n");
//    output(stu);
//
//    system("pause");
//    return 0;
//}
//void input(Stu* stu)
//{
//    int i;
//    for (i = 0; i < 5; i++)
//        scanf("%s%s%d", stu[i].name, stu[i].sex, &(stu[i].age));
//}
//void output(Stu* stu)
//{
//    int i;
//    for (i = 0; i < 5; i++)
//        printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
//}

//72)题目：创建一个链表。见sjjg

//73）题目：反向输出一个链表。见SJJG

//74）题目：连接两个链表。

//75）题目：输入一个整数，并将其反转后输出。
//#include<stdio.h>
//int main()
//{
//    int n;
//    int m = 0;
//    int b;
//    printf("请输入一个整数:>");
//    scanf("%d", &n);
//    while (n != 0)
//    {
//        b = n % 10;
//        m = m * 10 + b;
//        n /= 10;
//    }
//    printf("逆向输出的整数为:>%d", m);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n, reversedNumber = 0, remainder;
//
//    printf("输入一个整数: ");
//    scanf("%d", &n);
//
//    while (n != 0)
//    {
//        remainder = n % 10;
//        reversedNumber = reversedNumber * 10 + remainder;
//        n /= 10;
//    }
//
//    printf("反转后的整数: %d", reversedNumber);
//
//    return 0;
//}


//76)题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n，当输入n为奇数时，调用函数1/1+1/3+...+1/n（利用指针函数）。
//#include<stdio.h>
//void add1(float* sum, int n)
//{
//    float fz = 1;
//    float fm = 0;
//    for (int i = 1; i <= n; i += 2)
//    {
//        fm = i;
//        *sum += fz / fm;
//    }
//}
//void add2(float* sum, int n)
//{
//    float fz = 1;
//    float fm = 0;
//    for (int i = 2; i <= n; i += 2)
//    {
//        fm = i;
//        *sum += fz / fm;
//    }
//}
//int main()
//{
//    int  n;
//    float sum = 0;
//    printf("请输入一个数:>");
//    scanf("%d", &n);
//    if (n % 2 == 0)
//    {
//        add2(&sum,n);
//    }
//    else {
//        add1(&sum,n);
//    }
//    printf("计算结果为：%f", sum);
//    return 0;
//}


//77)题目：练习指向指针的指针（使用多级指针遍历字符串数组）。
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    // 定义一个字符指针数组，存储字符串常量
//    const char* s[] = { "man", "woman", "girl", "boy", "sister" };
//    // 定义一个指向字符指针的指针变量
//    const char** q;
//    int k;
//
//    // 遍历数组，并通过指向指针的指针输出每个字符串
//    for (k = 0; k < 5; k++) {
//        q = &s[k]; // 让指针 q 指向字符指针数组中第 k 个元素的地址
//        printf("%s\n", *q); // 解引用 q，输出对应的字符串
//    }
//
//    return 0;
//}


//78)题目：找到年龄最大的人，并输出。请找出程序中有什么问题。
//#include <stdio.h>
//#include <stdlib.h>
//
//// 定义结构体类型，用于存储人员的姓名和年龄
//struct man {
//    char name[20];
//    int age;
//} person[3] = { {"li", 18}, {"wang", 25}, {"sun", 22} }; // 初始化数组
//
//int main() {
//    struct man* q = NULL; // 用于指向年龄最大的人员
//    struct man* p = person; // 指向数组的起始地址
//    int i;
//    int max_age = 0; // 存储最大年龄
//
//    // 遍历数组，找到年龄最大的人员
//    for (i = 0; i < 3; i++) {
//        if (p->age > max_age) { // 如果当前年龄大于 max_age
//            max_age = p->age; // 更新 max_age
//            q = p; // 将 q 指向当前人员
//        }
//        p++; // 移动到下一个人员
//    }
//    //重置指针P，使其重新指向数组的起始位置
//    p = person;
//
//    // 输出年龄最大的人员的姓名和年龄
//    if (q != NULL) {
//        printf("%s %d\n", q->name, q->age);
//    }
//    else {
//        printf("没有找到人员信息。\n");
//    }
//
//
//    return 0;
//}

//79)题目：字符串排序。
//#include<stdio.h>
//#include<string.h>
//#define Max 100
//void swap(char* strx, char* stry)
//{
//    char temp[Max];
//    strcpy(temp, strx);
//    strcpy(strx, stry);
//    strcpy(stry, temp);
//}
//int main()
//{
//    char str1[Max];
//    char str2[Max];
//    char str3[Max];
//    printf("请分别输入三组字符串，且每组字符串以回车键结尾：\n");
//    scanf("%s", &str1);
//    scanf("%s", &str2);
//    scanf("%s", &str3);
//    if (strcmp(str1,str2)>0)
//    {
//        swap(str1, str2);
//    }
//    if (strcmp(str1, str3) > 0)
//    {
//        swap(str1, str3);
//    }
//    if (strcmp(str2, str3) > 0)
//    {
//        swap(str2, str3);
//    }
//    printf("%s < %s < %s", str1, str2, str3);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_LEN 20 // 定义常量表示字符串的最大长度
//
//// 函数声明：用于交换两个字符串
//void swap(char* str1, char* str2);
//
//int main() {
//    char str1[MAX_LEN], str2[MAX_LEN], str3[MAX_LEN];
//
//    // 提示用户输入字符串
//    printf("请输入3个字符串，每个字符串以回车结束:\n");
//
//    // 使用 fgets 读取输入并去除换行符
//    fgets(str1, sizeof(str1), stdin);
//    str1[strcspn(str1, "\n")] = '\0'; // 去除换行符
//
//    fgets(str2, sizeof(str2), stdin);
//    str2[strcspn(str2, "\n")] = '\0'; // 去除换行符
//
//    fgets(str3, sizeof(str3), stdin);
//    str3[strcspn(str3, "\n")] = '\0'; // 去除换行符
//
//    // 对字符串进行排序
//    if (strcmp(str1, str2) > 0) swap(str1, str2);
//    if (strcmp(str2, str3) > 0) swap(str2, str3);
//    if (strcmp(str1, str2) > 0) swap(str1, str2);
//
//    // 输出排序后的结果
//    printf("排序后的结果为：\n");
//    printf("%s\n%s\n%s\n", str1, str2, str3);
//
//    return 0;
//}
//
//// 交换两个字符串的内容
//void swap(char* str1, char* str2) {
//    char temp[MAX_LEN];
//    strcpy(temp, str1); // 将 str1 复制到临时字符串 temp
//    strcpy(str1, str2); // 将 str2 复制到 str1
//    strcpy(str2, temp); // 将 temp 复制到 str2
//}

//80)题目：海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了一个，这只 猴子把多的一个扔入海中，拿走了一份。
// 第二只猴子把剩下的桃子又平均分成五份，又多了 一个，它同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴子都是这样做的， 问海滩上原来最少有多少个桃子？
//#include<stdio.h>
//int main()
//{
//    int n=0;//设置原来桃子数目
//    int count;//模拟分桃过程
//    int found = 0;//标记
//    int i = 0;
//    while (!found)
//    {
//        n += 1;//从1开始试，直到满足条件为止
//        count = n;
//        for (i = 0; i < 5; i++)
//        {
//            if ((count-1) % 5 == 0)
//            {
//                count = (count - 1) / 5 * 4;
//
//            }
//            else {
//                break;
//            }
//            
//        }
//        if (i == 5)
//        {
//            found = 1;
//        }
//    }
//    printf("桃子至少有%d个", n);
//    return 0;
//}

//81)题目：809*??=800*??+9*?? 其中??代表的两位数, 809*??为四位数，8*??的结果为两位数，9*??的结果为3位数。求??代表的两位数，及809*??后的结果。
//#include<stdio.h>
//int main()
//{
//    int i;
//    int a = 809;
//    int b;
//    for (i = 10; i < 100; i++)
//    {
//        b = a * i;
//        if (b >= 1000 && b < 10000 && 8 * i < 100 && 9 * i >= 100)
//        {
//            printf("??的值为%d", i); 
//            printf("\n");
//            printf("809*%d=%d", i, b);
//        }
//    }
//    return 0;
//}

//82)题目：八进制转换为十进制
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int change(char* eight)
//{
//    int i;
//    int ten=0;
//    int length = strlen(eight);
//
//    for (i = 0; i < length; i++)
//    {
//        int wei = eight[i] - '0';
//        ten += wei * pow(8, length - i - 1);
//    }
//    return ten;
//}
//int main()
//{
//    char eight[100];
//    printf("请输入一串八进制字符:>");
//    scanf("%s", &eight);
//
//    int ten = change(eight);
//    printf("八进制%s转换为十进制%d", eight, ten);
//    return 0;
//}


//83)题目：求0—7所能组成的奇数个数。
//
//程序分析：
//
//这个问题其实是一个排列组合的问题，设这个数为 sun = a1a2a3a4a5a6a7a8, a1 - a8 表示这个数的某位的数值，当一个数的最后一位为奇数时，那么这个数一定为奇数，不管前面几位是什么数字。如果最后一位数为偶数，则这个数一定为偶数。
//
//a1 - a8可以取 0 - 7 这个八个数字，首位数字不为 0。
//
//从该数为一位数到该数为8位数开始统计奇数的个数：
//
//1.当只有一位数时也就是该数的最后一位，奇数个数为4
//2.当该数为两位数时，奇数个数为4 * 7 = 28
//3.当该数为三位数时，奇数个数为：4 * 8 * 7 = 224
//...
//8.当该数为八位数时，奇数个数为：4 * 8 * 8 * 8 * 8 * 8 * 8 * 7(依次为最后一位到第一位)

//#include<stdio.h>
//int main()
//{
//    int sum = 4;
//    int n = 4;
//    int j = 0;
//    for (j = 2; j <= 8; j++)
//    {
//        printf("%d位数为奇数的个数%d\n", j - 1, n);
//        if (j <= 2)
//        {
//            n *= 7;
//        }
//        else {
//            n *= 8;
//        }
//        sum += n;
//    }
//    printf("%d位数为奇数的个数%d\n", j - 1, n);//第八位打印
//    printf("奇数的总个数为：%ld\n", sum);
//    return 0;
//}

//84)题目：一个偶数总能表示为两个素数之和。
//#include<stdio.h>
//#include<math.h>
////判断是否为素数
//int Isprimer(unsigned int n)
//{
//    int i;
//    if (n < 4)
//        return 1;//素数小于4都是
//    else if (n % 2 == 0)
//        return 0;//- 如果  n  是偶数（ n % 2 == 0 ），则返回  0 ，因为大于  2  的偶数不是素数。
//    else {
//        for (i = 3; i < sqrt(n) + 1; i++) {
//            if (n % i == 0)
//                return 0;
//        }
//    }//循环条件： i < sqrt(n) + 1  是循环继续执行的条件。 sqrt(n)  是计算  n  的平方根（ sqrt  函数来自  <math.h>  头文件，计算结果为  double  类型，这里会隐式转换为  int  参与比较）。之所以检查到  sqrt(n)  就可以判断一个数是否为素数，是因为如果  n  有一个大于  sqrt(n)  的因数  a ，那么必然存在一个小于  sqrt(n)  的因数  b ，使得  n = a * b 。所以检查到  sqrt(n)  就可以确定  n  是否能被除  1  和它本身以外的数整除。加上  1  是为了让循环条件包含  sqrt(n)  这个边界值（实际中  +1  有无影响不大，因为一般检查到不大于  sqrt(n)  就足够）。
//    return 1;
//}
//int main()
//{
//    int n,i;
//    do {    
//        printf("请输入一个偶数:>");
//        scanf("%d", &n);
//    } while (n % 2 != 0);
//    for ( i = 1; i < n; i++)//1到n-1
//    {
//        if (Isprimer(i) && Isprimer(n - i))
//        {
//            break;
//        }
//    }
//    printf("%d是由%d和%d两个素数相加而来", n, i, n - i);
//    return 0;
//}


//85)题目：判断一个素数能被几个9组成的数整除
//#include<stdio.h>
//#include<math.h>
//int Isprimer(unsigned int n)
//{
//    int i;
//    if (n < 4)
//        return 1;//素数小于4都是
//    else if (n % 2 == 0)
//        return 0;//- 如果  n  是偶数（ n % 2 == 0 ），则返回  0 ，因为大于  2  的偶数不是素数。
//    else {
//        for (i = 3; i < sqrt(n) + 1; i++) {
//            if (n % i == 0)
//                return 0;
//        }
//    }//循环条件： i < sqrt(n) + 1  是循环继续执行的条件。 sqrt(n)  是计算  n  的平方根（ sqrt  函数来自  <math.h>  头文件，计算结果为  double  类型，这里会隐式转换为  int  参与比较）。之所以检查到  sqrt(n)  就可以判断一个数是否为素数，是因为如果  n  有一个大于  sqrt(n)  的因数  a ，那么必然存在一个小于  sqrt(n)  的因数  b ，使得  n = a * b 。所以检查到  sqrt(n)  就可以确定  n  是否能被除  1  和它本身以外的数整除。加上  1  是为了让循环条件包含  sqrt(n)  这个边界值（实际中  +1  有无影响不大，因为一般检查到不大于  sqrt(n)  就足够）。
//    return 1;
//}
//int main()
//{
//    int n, i;
//    int sum = 9;
//    do {
//        printf("请输入一个素数:>");
//        scanf("%d", &n);
//    } while (!Isprimer(n));
//    for (i = 1;; i++)
//    {
//        if (sum % n == 0)
//        {
//            break;
//        }
//        else {
//            sum = sum * 10 + 9;
//        }
//    }
//    printf("%d这个素数能被%d个9的数整除，即：%d", n, i, sum);
//    return 0;
//}

//86)题目：两个字符串连接程序 。
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define Max 20
//char* strconnext(char* str1, char* str2)
//{
//    char* str3 = (char*)malloc(strlen(str1) + strlen(str2)+1);//要多一个空间存'\0'
//    str3[0] = '\0';
//    strcat(str3, str1);
//    strcat(str3, str2);//连接字符串函数
//    return str3;
//
//}
//int main()
//{
//    char str1[Max];
//    char str2[Max];
//    printf("请输入两个字符串，回车隔开\n");
//    scanf("%s %s", str1, str2);
//    char* str3=strconnext(str1, str2);
//    printf("连接后为:>%s", str3);
//    free(str3);
//    return 0;
//}



//87)题目：回答结果（结构体变量传递）。
//#include<stdio.h>
//
//struct student
//{
//    int x;
//    char c;
//} a;
//
//int main()
//{
//    a.x = 3;
//    a.c = 'a';
//    f(a);
//    printf("%d,%c", a.x, a.c);
//}
//f(struct student b)
//{
//    b.x = 20;
//    b.c = 'y';
//}

//88)题目：读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的 ＊
//#include<stdio.h>
//int main()
//{
//    int i, j;
//    int arr[7];
//    printf("请输入7个数的数值(1-50):>\n");
//    for (i = 0; i < 7; i++)
//    {
//        while (1)
//        {
//            scanf("%d", &arr[i]);
//            if (arr[i] >= 1 && arr[i] <= 50)
//            {
//                break;
//            }
//            else {
//                printf("请重新输入!");
//            }
//        }
//    }
//    for (i = 0; i < 7; i++)
//    {
//        for (j = 0; j < arr[i]; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}



//89)题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下：
// 每位数字都加上5, 然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
//#include<stdio.h>
//void swap(int* x, int* y)
//{
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//int main()
//{
//    int n;
//    int i = 0;
//    int arr[5];
//    printf("亲输入要传递的数据(四位数字):>");
//    scanf("%d", &n);
//    for (i = 3; i >= 0; i--)
//    {
//        if (n == 0)
//        {
//            break;
//        }
//        int b = n % 10;
//        b = (b + 5) % 10;
//        arr[i] = b;
//        n = n / 10;
//    }
//    swap(&arr[0], &arr[3]);
//    swap(&arr[1], &arr[2]);
//    printf("加密后的数字为:>");
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d", arr[i]);
//    }
//
//    return 0;
//}

//90)题目：专升本一题，读结果。
//#include<stdio.h>
//#include<stdlib.h>
//
//#define M 5
//int main()
//{
//    int a[M] = { 1,2,3,4,5 };
//    int i, j, t;
//    i = 0; j = M - 1;
//    while (i < j)
//    {
//        t = *(a + i);
//        *(a + i) = *(a + j);
//        *(a + j) = t;
//        i++; j--;
//    }
//    for (i = 0; i < M; i++) {
//        printf("%d\n", *(a + i));
//    }
//
//}//结果：5.4.3.2.1


//91)题目：时间函数举例1
//#include <stdio.h>
//#include <time.h>
//
//int main()
//{
//    time_t rawtime;//time_t是一个用于储存时间的类型,rawtime用途储存从1970年1月1日00:00:00到当前时间的秒数
//    struct tm* timeinfo;//struct tm是一个结构体，用于储存分解后的时间信息（年，月，日，时，分，秒等），timeinto是一个指向sturct tm结构体的指针
//
//    time(&rawtime);//time函数将获取当前时间的秒数并将其存储在rawtime中
//    timeinfo = localtime(&rawtime);//localtime函数将rawtime中存储的秒数转换为本地时间格式，并返回一个指向strcut tm结构体的指针，将其存储到timeinto中
//    //输出当前本地时间
//    printf("当前本地时间为: %s", asctime(timeinfo));//asctime函数将timeinto指向的结构体中的时间信息转换为字符串格式，然后输出
//
//    return 0;
//}


//92）题目：时间函数举例2
//#include <stdio.h>
//#include <time.h>
//
//int main()
//{
//    time_t start, end;
//    int i;
//    start = time(NULL);//使用  time  函数获取当前时间，并将其存储在  start  变量中。 time(NULL)  表示获取从1970年1月1日00:00:00到当前时间的秒数。
//    for (i = 0; i < 300000; i++)
//    {
//        printf("\n");  // 返回两个time_t型变量之间的时间间隔
//    }
//    end = time(NULL);// 使用  time  函数获取循环结束后的当前时间，并将其存储在  end  变量中。
//
//    // 输出执行时间
//    printf("时间间隔为 %6.3f\n", difftime(end, start));//difftime  是C语言中  <time.h>  头文件里的一个函数， difftime(end, start)  语句的作用是计算并返回两个  time_t  类型时间值（ end  和  start ）之间的差值，单位是秒。
//}

//93）题目：时间函数举例2
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//    long i = 10000000L;
//    clock_t start, finish;
//    double TheTimes;
//    printf("做%ld次空循环需要的时间为", i);
//    start = clock();//使用  clock  函数获取当前的时钟滴答数，并将其存储在  start  变量中，作为循环开始的时间点。
//    while (i--);
//    finish = clock();//使用  clock  函数获取循环结束后的时钟滴答数，并将其存储在  finish  变量中。
//    TheTimes = (double)(finish - start) / CLOCKS_PER_SEC;//计算  finish  和  start  之间的差值，得到循环执行期间经过的时钟滴答数，然后将其转换为秒数。
//    //CLOCKS_PER_SEC  是一个宏，表示每秒钟的时钟滴答数，通过除以它来将滴答数转换为秒。
//    printf("%f秒。\n", TheTimes);
//    return 0;
//}


//94）题目：猜谜游戏。
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//// 处理是否继续游戏的逻辑
//int ask_to_play_again() {
//    char begin;
//    printf("需要挑战最高级别不？Y/N \n");
//    scanf(" %c", &begin);  // 注意前面有个空格，确保跳过上次输入的换行符
//    if (begin == 'Y' || begin == 'y') {
//        return 1;  // 用户选择继续游戏
//    }
//    printf("谢谢，再见!\n");
//    return 0;  // 用户选择退出游戏
//}
//
//// 游戏的主体逻辑
//void caizi(void) {
//    int n;
//    int count = 1;
//    srand((unsigned int)time(NULL));  // 更严谨地处理随机数种子
//    int m = (rand() % 100) + 1;
//
//    printf("游戏开始，请输入数字:\n");
//
//    while (1) {
//        scanf("%d", &n);
//
//        if (n == m) {
//            printf("猜中了，使用了 %d 次！\n", count);
//
//            // 根据猜测次数，给出不同的评价
//            if (count == 1) {
//                printf("你是神级人物了！膜拜\n");
//            }
//            else if (count <= 5) {
//                printf("你是王级人物了！非常赞\n");
//            }
//            else if (count <= 10) {
//                printf("你是大师级人物了！狂赞\n");
//            }
//            else if (count <= 15) {
//                printf("你是钻石级人物了！怒赞\n");
//            }
//            else {
//                printf("你的技术还有待提高哦！\n");
//            }
//
//            // 询问是否继续游戏
//            if (ask_to_play_again()) {
//                caizi();  // 重新开始游戏
//            }
//            break;
//        }
//        else if (n < m) {
//            puts("太小了!");
//            puts("重新输入:");
//        }
//        else {
//            puts("太大了!");
//            puts("重新输入:");
//        }
//
//        count++;  // 计数器
//    }
//}
//
//int main(void) {
//    caizi();
//    return 0;
//}

//第一行代码  srand((unsigned int)time(NULL)); ：
// 
//-srand  是C语言标准库中的函数，作用是设置随机数生成器的种子。随机数生成器在生成随机数时，需要一个初始值（种子），如果种子相同，每次生成的随机数序列就是一样的。
//
//- time(NULL)  调用  time  函数获取当前时间（从1970年1月1日00 : 00 : 00到当前的秒数）， NULL  是传递给  time  函数的参数，表示不需要将时间存储到某个指针指向的位置。
//
//- (unsigned int)是类型转换操作符，将  time  函数返回的  time_t  类型的值转换为  unsigned int  类型，因为  srand  函数要求传入的参数是  unsigned int  类型。通过使用当前时间作为种子，每次程序运行时种子都不一样，这样就能生成不同的随机数序列，所以说 “更严谨地处理随机数种子”。
//
//第二行代码  int m = (rand() % 100) + 1; ：
//
//- rand  是C语言标准库中的函数，用于生成一个范围在  0  到  RAND_MAX （ RAND_MAX  是一个在  <stdlib.h>  中定义的常量，通常是一个较大的整数）之间的伪随机整数。
//
//- rand() % 100  使用取模运算符 % ，将  rand  生成的随机数对  100  取模，得到的结果范围是  0  到  99 。
//
//- +1  则是将取模后的结果加上  1 ，这样最终变量  m  的值范围就是  1  到  100  之间的整数了。
//
//总的来说，这两行代码配合使用，先设置了随机数种子，然后生成了一个  1  到  100  之间的随机整数。


//95）题目：简单的结构体应用实例。
//#include <stdio.h>
//
//struct programming
//{
//    float constant;
//    char* pointer;
//};
//
//int main()
//{
//    struct programming variable;
//    char string[] = "菜鸟教程：https://www.runoob.com";
//
//    variable.constant = 1.23;
//    variable.pointer = string;
//
//    printf("%f\n", variable.constant);
//    printf("%s\n", variable.pointer);
//
//    return 0;
//}

//96）题目：计算字符串中子串出现的次数 。

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    int i, j, k, TLen, PLen, count = 0;
//    char T[50], P[10];
//    printf("请输入两个字符串，以回车隔开，母串在前，子串在后：\n");
//    gets(T);
//    gets(P);
//    TLen = strlen(T);//使用  strlen  函数分别获取母字符串  T  和子字符串  P  的长度，并存储到  TLen  和  PLen  变量中。
//    PLen = strlen(P);//然后使用  gets  函数分别获取用户输入的母字符串和子字符串，并存储到  T  和  P  数组中。
//    for (i = 0; i <= TLen - PLen; i++)//要在母字符串  T  中查找子字符串  P ，子字符串  P  能够完整匹配的起始位置是有限的。因为子字符串  P  必须完全包含在母字符串  T  中，所以从母字符串  T  的末尾往前数，至少要留出长度为  PLen  的空间，才能容纳子字符串  P 。
//    {
//        for (j = 0, k = i; j < PLen && P[j] == T[k]; j++, k++);//内层循环  for(j=0,k=i;j<PLen&&P[j]==T[k];j++,k++) ;  用于逐个字符比较子字符串  P  和母字符串  T  中从当前起始位置开始的字符。如果子字符串的所有字符都与母字符串中对应位置的字符相等，则说明找到了一个匹配的子字符串。
//        //内层循环结束后，通过  if (j == PLen)  判断  j  是否等于子字符串的长度  PLen ，如果相等，则说明找到了一个匹配的子字符串，将  count  加  1 。
//        if (j == PLen)
//            count++;
//    }
//    printf("%d\n", count);
//    system("pause");
//    return 0;
//}


///97）题目：从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    FILE* fp = NULL;
//    char filename[25];
//    char ch;//fp  是一个指向  FILE  类型的指针，用于表示文件指针，初始化为  NULL 。
//    /*filename  是一个字符数组，用于存储用户输入的文件名，大小为  25  个字符。
//        ch  是一个字符变量，用于存储用户输入的字符。*/
//    printf("输入你要保存到的文件的名称：\n");
//    gets(filename);
//    if ((fp = fopen(filename, "w")) == NULL)
//    {
//        printf("error: cannot open file!\n");
//        exit(0);
//    }//使用  fopen  函数以写入模式（ "w" ）打开用户指定的文件。如果文件打开失败， fopen  函数会返回  NULL 。
//    //如果文件打开失败，使用  printf  函数输出错误信息，并调用  exit  函数终止程序执行。
//    printf("现在你可以输入你要保存的一些字符，以#结束：\n");
//    getchar();
//    while ((ch = getchar()) != '#') {
//        fputc(ch, fp);
//    }//在循环中，使用  fputc  函数将读取到的字符写入到打开的文件中。
//    fclose(fp);//使用  fclose  函数关闭打开的文件，释放相关资源。
//    system("pause");
//    return 0;
//}

//98）题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。 输入的字符串以！结束。
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//    FILE* fp = NULL;
//    char str[50];
//    int i, len;
//    printf("输入一个字符串：\n");
//    gets(str);
//    len = strlen(str);
//    for (i = 0; i < len; i++)
//    {
//        if (str[i] <= 'z' && str[i] >= 'a')
//            str[i] -= 32;
//    }
//    if ((fp = fopen("test", "w")) == NULL)
//    {
//        printf("error: cannot open file!\n");
//        exit(0);
//    }
//    fprintf(fp, "%s", str);//****
//    fclose(fp);
//
//    system("pause");
//    return 0;
//}


//99）题目：有两个磁盘文件A和B, 各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件C中。
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    FILE* fa, * fb, * fc;
//    int i, j, k;
//    char str[100], str1[100];
//    char tem;
//    if ((fa = fopen("A.txt", "r")) == NULL) // A.txt 文件需要存在
//    {
//        printf("error: cannot open A file!\n");
//        exit(0);
//    }
//    fgets(str, 99, fa);
//    fclose(fa);
//    if ((fb = fopen("B.txt", "r")) == NULL)  // B.txt 文件需要存在
//    {
//        printf("error: cannot open B file!\n");
//        exit(0);
//    }
//    fgets(str1, 99, fb);//fgets  函数的作用是从指定的文件流中读取一行字符（包括换行符），并将其存储到指定的字符数组中。
//    //能保证有足够的空间存储字符串结束符  '\0' ，避免缓冲区溢出和字符串操作错误的风险。（99，100之间）
//    fclose(fb);
//    strcat(str, str1);
//    for (i = strlen(str) - 1; i > 1; i--)
//        for (j = 0; j < i; j++)
//            if (str[j] > str[j + 1])
//            {
//                tem = str[j];
//                str[j] = str[j + 1];//冒泡排序
//                str[j + 1] = tem;
//            }
//
//    if ((fc = fopen("C.txt", "w")) == NULL)  // 合并为 C.txt
//    {
//        printf("error: cannot open C file!\n");
//        exit(0);
//    }
//    fputs(str, fc);
//    fclose(fc);
//    system("pause");
//    return 0;
//}

//100)题目：有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），计算出平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中。
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct {
//    int ID;
//    int math;
//    int English;
//    int C;
//    int avargrade;
//    char name[20];
//}Stu;
//int main()
//{
//    FILE* fp;
//    Stu stu[5];
//    int i, avargrade = 0;
//    printf("请输入5个同学的信息：学生号，姓名，3门成绩:\n");
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d %s %d %d %d", &(stu[i].ID), stu[i].name, &(stu[i].math), &(stu[i].English), &(stu[i].C));
//        stu[i].avargrade = (stu[i].math + stu[i].English + stu[i].C) / 3;
//    }
//
//    if ((fp = fopen("stud", "w")) == NULL)
//    {
//        printf("error :cannot open file!\n");
//        exit(0);
//    }
//    for (i = 0; i < 5; i++)
//        fprintf(fp, "%d %s %d %d %d %d\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English,
//            stu[i].C, stu[i].avargrade);
//
//    fclose(fp);
//    // system("pause");
//    return 0;
//}












