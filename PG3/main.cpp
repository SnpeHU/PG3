#include <stdio.h>  
#include <stdlib.h>  
#include <windows.h>  
#include <functional>  

template<typename T1, typename T2 = T1>
class Compare {
public:
	Compare(T1 a, T2 b) : a(a), b(b) {};

	auto Min()
	{
		return a < b ? a : b;
	}
private:
	T1 a;
	T2 b;
};

int main()  
{  
	Compare<int> c(10, 20);
	Compare<float> c2(10.5f, 20.5f);
	Compare<double> c3(6.5, 8.5);
	Compare<int, float> c4(10, 20.5f);
	Compare<int, double> c5(25, 20.5);
	Compare<float, double> c6(10.5f, 20.0);




	printf("小さいの数字は %d\n", c.Min());
	printf("小さいの数字は %f\n", c2.Min());
	printf("小さいの数字は %lf\n", c3.Min());
	printf("小さいの数字は %f\n", c4.Min());
	printf("小さいの数字は %lf\n", c5.Min());
	printf("小さいの数字は %f\n", c6.Min());

return 0;  
}