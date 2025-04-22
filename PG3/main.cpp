#include <stdio.h>  
#include <stdlib.h>  
#include <windows.h>
#include <functional>

// ランダムで1~6の数字を返す  
int random()  
{  
  return rand() % 6 + 1;  
}  

/// <summary>
/// サイコロの目が偶数か奇数かを判定
/// </summary>
/// <param name="num">サイコロを振るの結果</param>
/// <param name="ans">当てる数字</param>
/// <returns></returns>
bool check(int num, int ans)  
{  
  if (num % 2 == 0 && ans == 1)  
  {  
      return true;  
  }  
  else if (num % 2 == 1 && ans == 0)  
  {  
      return true;  
  }  
  else  
  {  
      return false;  
  }  
} 

// 結果を表示する
std::function <void(bool)> showResult = [](bool result) {
	if (result)
	{
		printf("当たり\n");
	}
	else
	{
		printf("違う\n");
	}
	};

void setTimeout(std::function <void(bool)> ontimeout, bool result,int second)
{
    Sleep(second * 1000);
    ontimeout(result);
}

int main()  
{  

  while (1)  
  {  
      // サイコロを振る  
      int num = random();  
      printf("サイコロの目は奇数か偶数か当ててください.\n 0:奇数 1:偶数\n");  
      int ans;  
      scanf_s("%d", &ans);  
   bool result = check(num, ans);
   setTimeout(showResult, result,3);
   printf("サイコロの目は%dです.\n", num);


  }  

  return 0;  
}