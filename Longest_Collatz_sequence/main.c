#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#define MaxInteger 1000000
typedef unsigned int Uint32;

bool IsEven(Uint32 number);
Uint32 EvenReturnNum(Uint32 number);
bool IsOdd(Uint32 number);
Uint32 OddReturnNum(Uint32 number);

int main()
{
//	printf("hello world\n");
	Uint32  CurInterger;
	Uint32 Temporary_variable;
	Uint32 gCount = 0, Count = 0;
	Uint32 gResultNum = 0, ResultNum = 0;
	for (CurInterger = MaxInteger; CurInterger > 0; CurInterger--)
	{
		if (IsEven(CurInterger) == true) 
		{
			continue;
		}
//		printf("\nCurInterger=%u  ", CurInterger); //屏蔽掉打印信息，耗时3秒
		gCount = 1;
		// dispose current interger
		gResultNum = CurInterger;
		Temporary_variable = gResultNum;
		while (Temporary_variable != 1)
		{
			
			//Temporary_variable = gResultNum;
//			printf("%d--", Temporary_variable);
			if (IsEven(Temporary_variable))
			{
				gCount++;
				Temporary_variable = EvenReturnNum(Temporary_variable);
			}
			else
			{
				gCount++;
				Temporary_variable = OddReturnNum(Temporary_variable);
			}
		}
		if (gCount > Count)
		{
			
			Count = gCount;
			ResultNum = gResultNum;
		}
			
	}

	printf("\n%u has the longest chain ,count = %u\n", ResultNum, Count);
    getchar();
    return 0;
}
bool IsEven(Uint32 number)
{
	bool flag = false;
	if (number % 2 == 0)
	{
		flag = true;
	}
	return flag;
}
Uint32 EvenReturnNum(Uint32 number)
{
	Uint32 num = 0;
	num = number / 2;
	return num;
}

bool IsOdd(Uint32 number)
{
	bool flag = false;
	if (number % 2 == 0)
	{
		return flag;
	}
	flag = true;
	return flag;
}
Uint32 OddReturnNum(Uint32 number)
{
	Uint32 num = 0;
	num = 3 * number + 1;
	return num;
}


/*   

//网站上找的代码，耗时1秒
#include <stdio.h>

int main(int argc, char **argv)
{
	int longest = 0;
	int terms = 0;
	int i;
	unsigned long j;

	for (i = 1; i <= 1000000; i++)
	{
		printf("i = %d\n", i);
		j = i;
		int this_terms = 1;

		while (j != 1)
		{
			this_terms++;

			if (this_terms > terms)
			{
				terms = this_terms;
				longest = i;
			}

			if (j % 2 == 0)
			{
				j = j / 2;
			}
			else
			{
				j = 3 * j + 1;
			}
		}
	}

	printf("longest: %d (%d)\n", longest, terms);
	getchar();
	return 0;
}
*/