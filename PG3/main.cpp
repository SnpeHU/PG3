#include <stdio.h>

/// <summary>
/// 二つの値のうち小さい方を返す
/// </summary>
/// <param name="a"> 値a </param>
/// <param name="b"> 値b </param>
/// <returns>小さい値</returns>
template<typename T1,typename T2>
T1 Min(T1 a, T2 b)
{
	return static_cast<T1>(a < b) ? a : b;
}

/// <summary>
/// charの型にメッセージを表示する
template<>
char Min<char, char>(char a, char b)
{
	printf("数字以外は代入できません");
	return 0;
}



int main()
{
	printf("%d\n", Min<int,int>(1, 2));
	printf("%f\n", Min<float, float>(5.33f, 2.5f));
	printf("%lf\n", Min<double, double>(5.4534, 8.432));
	Min('a', 'b');

    return 0;

}