#include <stdio.h>
#include <stdlib.h>

int fun(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x&(x - 1);//& һ�κ����һ��1��һ������8��1
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
	//int d[2][3] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };//��������������һά������

	//char str[8] = { 'g', 'o', 'o', 'd', '!' };
	//char str[8] = "good!";
	//char *str = "good!";
	//char str[5] = { 'g', 'o', 'o', 'd', '!' };���ٸ�6��Ԫ�أ���ΪҪ����'\0'

	//char x[] = "abcd";
	//char y[] = { 'a', 'b', 'c', 'd' };//��'\0'

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