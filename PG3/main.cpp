#include <stdio.h>  
#include <stdlib.h>  
#include <windows.h>  
#include <functional>  

class Enemy  
{  
public:  
	Enemy() = default;  
	~Enemy() = default;  

void Update()
{
	(this->*phaseTable[phase])();
	phase++; // フェーズを進める
	if (phase >= phaseCount) // フェーズが終わったら
	{
		phase = 0; // フェーズをリセット
	}
}

//接近フェーズ
	void ApproachPhase()
	{
		printf("接近!\n");
	}
//射撃フェーズ
	void ShootPhase()  
	{  
		printf("射撃!\n");  
	}  

//撤退フェーズ
	void RetreatPhase()
	{
		printf("撤退!\n");
	}

private:
	int phase = 0; // 現在のフェーズインデックス
	static const int phaseCount; // フェーズの数
	static void (Enemy::* phaseTable[])();  
};  

void (Enemy::* Enemy::phaseTable[])() = {  
&Enemy::ApproachPhase,
&Enemy::ShootPhase,
&Enemy::RetreatPhase
};  

const int Enemy::phaseCount = sizeof(Enemy::phaseTable) / sizeof(Enemy::phaseTable[0]); // フェーズの数を計算

int main()  
{  
	Enemy enemy;
	while (true)
	{
		enemy.Update(); // 敵の状態を更新
		Sleep(2000); // 2秒待機
	}
return 0;  
}