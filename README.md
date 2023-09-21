# day_1
图书馆第一天
#incloud <stdio.h>
int main()
	{
		int x, y = 0;
		for (x = 1; x <= 10; x++)
		{
			if (y >= 10)
				break;
			y = y + x;
		}                 /*break 后第三条件仍然会执行*/
		printf("%d %d", y, x);
	}
