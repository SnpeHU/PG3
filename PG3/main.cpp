#include <stdio.h>

/// <summary>
/// 再帰的の場合、給料を計算する
/// </summary>
/// <param name="hours"> 働き時間</param>
/// <returns>もらえるお金</returns>
int Money(int hours)
{
	if (hours <= 1)
	{
		return 100;
	}
	return Money(hours - 1) * 2 - 50 + Money(hours - 1);

}

/// 一般的と再帰的の給料の比較
void Compare(int hours)
{
	for (int i = 1; i < hours; i++)
	{
		printf("時間: %d\n", i);
		printf("一般的: %d\n", i * 1072);
		printf("再帰的: %d\n", Money(i));

	}
}

int main()
{
	int hours;
	Compare(9);
	
	return 0;
}