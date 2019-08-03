#include <stdio.h>
#include <stdlib.h>

int fun(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x&(x - 1);//& 一次后就少一个1，一共少了8个1
	}
	return count;
}

int Func(int a)
{
	int b = 0;
	static int c = 3;//4 5
	a = c++, b++;
	return (a);
}

int main()
{
	//int b[][3] = { { 1, 2 }, { 0 } };
	//int d[2][3] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };//数组里面是两个一维的数组

	//char str[8] = { 'g', 'o', 'o', 'd', '!' };
	//char str[8] = "good!";
	//char *str = "good!";
	//char str[5] = { 'g', 'o', 'o', 'd', '!' };至少给6个元素，因为要包括'\0'

	//char x[] = "abcd";
	//char y[] = { 'a', 'b', 'c', 'd' };//无'\0'

	//printf("%d\n", fun(2019)); //8
	                           //111 1110 0011
	                           //111 1110 0010
	                           //111 1110 0010
	                           //111 1110 0001
	                           //111 1110 0000

	//int a = 2, i, k;
	//for (i = 0; i < 2; i++)
	//{
	//	k = Func(a++);
	//}
	//printf("%d\n", k);//4

	int s = 0, n;
	for (n = 0; n < 4; n++)
	{
		switch (n)
		{
		default:s += 4;
		case 1:s += 1;
		case 2:s += 2;
		case 3:s += 3;
		}
	}
	printf("%d\n", s);//24

	system("pause");
	return 0;
}