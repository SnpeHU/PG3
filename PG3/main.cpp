#include <stdio.h>

/// <summary>
/// 再帰的の場合、給料を計算する
/// </summary>
/// <param name="hours">働き時間</param>
/// <returns>時給</returns>
int Money(int hours)
{
	if (hours <= 1)
	{
		return 100;
	}
	return Money(hours - 1) * 2 -50;

}

/// 一般的と再帰的の給料の比較
void Compare(int hours)
{
	for (int i = 1; i < hours; i++)
	{
		printf("時間: %d\n", i);
		printf("一般的: %d\n", i * 1072);

		// 再帰的な計算
		int money = 0;
		for (int j = 1; j <= i; j++)
		{
			money += Money(j);
		}
		printf("再帰的: %d\n", money);

	}
}

int main()
{
	int hours;
	Compare(10);
	
	return 0;
}