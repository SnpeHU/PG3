#include <stdio.h>  
#include <stdlib.h>  
#include <windows.h>  

/// <summary>
/// 武器の基底クラス
/// </summary>
class Weapon
{
public:
	Weapon() = default;
	virtual ~Weapon() = default;
	virtual void Attack() = 0;
protected:
};

/// <summary>
/// 銃
/// </summary>
class Gun : public Weapon
{
public:
	Gun() = default;
	~Gun() = default;
	void Attack() override;
};

void Gun::Attack()
{
	printf("弾を発射！\n");
}

/// <summary>
/// 剣
/// </summary>
class Sword : public Weapon
{
public:
	Sword() = default;
	~Sword() = default;
	void Attack() override;
};
void Sword::Attack()
{
	printf("斬撃！\n");
}

int main()  
{  
	Weapon* weapons[2];
	weapons[0] = new Gun();
	weapons[1] = new Sword();

	for (int i = 0; i < 2; i++)
	{
		weapons[i]->Attack();
	}

	for (int i = 0; i < 2; i++)
	{
		delete weapons[i];
	}
return 0;  
}

