#include <stdio.h>

template<typename T1,typename T2>
T1 Min(T1 a, T2 b)
{
	return static_cast<T1>(a < b) ? a : b;
}

template<>
char Min<char, char>(char a, char b)
{
	printf("数字以外は代入できません");
	return 0;
}

int main()
{
	printf("%d\n", Min(1, 2));
	printf("%f\n", Min(5.33f, 2.5f));
	printf("%lf\n", Min(5.4534, 8.432));
	Min('a', 'b');

    return 0;

}