#include <stdio.h>
#include <string.h>

//int count;//全局变量不设定时自动为零
//int main(void)
//{
//
//	printf("the count = %d\n", count);
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	while (i < 5) {
//		i++;
//		printf("%d\n",i);
//		if (i == 3) {
//			goto function;
//		function: {printf("i : %d\n", i);
//		continue;
//		}
//		}
//	
//	}
//
//	return 0;
//}
//#define NUM 10
//int main(void)
//{
//	int s[NUM];
//	int i, sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//		printf("请输入第%d位同学的成绩:", i + 1);
//		scanf_s("%d",&s[i]);
//		sum += s[i];
//		
//
//	}
//printf("该班级的平均分为:%.2f\n", (double)sum / NUM);
//
//	return 0;
//}

//int main(void)
//{
//	int n, i;
//	printf("请输入你的字符串个数：");
//	scanf_s("%d", &n);
//
//
//
//
//
//	return 0;
//
//}



//int main(void)
//{
//	char str_1[] = "to be a person";
//	char str_2[40];
//	strncpy(str_2, str_1,5);
//	str_2[5] = '\0';
//	printf("str_2 : %s\n",str_2);
//
//	return 0;
//}
//


//int main()
//{
//	int a = 123;
//	char b = 'a';
//	int* pa = &a;
//	char* pb = &b;
//	printf("sizeof a=%d\n",sizeof( a));
//	printf("sizeof b=%d\n", sizeof(b));
//
//
//	return 0;
//}

//int main(void)
//{
//	char a[] = "i am the last one in the ocean";
//	char* target = a;
//	int i = 0;
//	while (*target++ != '/0' )
//	{
//		i++;
//	}
//	printf("一共%d个字符",i);
//
//
//	return 0;
//}


//int main(void)
//{
//    int n ,n_2,n_3;
//    n = 5;
//    n_2 = n * n;
//    n_3 = n_2 * n_2;
//    printf("n = %d, n squared = %d, n cubed = %d\n", n, n_2, n_3);
//    return 0;
//}


//int main()
//
//{
//	char c;
//	c = getchar();
//	while (c != '?')
//	{
//		putchar(c);
//		c = getchar();
//	}
//
//}
	int main()
	{
		int x, y = 0;
		for (x = 1; x <= 10; x++)
		{
			if (y >= 10)
				break;
			y = y + x;
		}
		printf("%d %d", y, x);
	}


