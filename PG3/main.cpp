#include <stdio.h>  


/// <summary>
/// Shapeの基底クラス
/// </summary>
class IShape
{
public:
	IShape() = default;
	virtual ~IShape() = default;
	virtual float Size() = 0;
	virtual void Draw() = 0;
protected:
	float width = 0;
	float height = 0;
	float size = 0;
};
/// <summary>
/// 矩形
/// </summary>
class Rectangle : public IShape
{
public:
	Rectangle(float width, float height)
	{
		this->width = width;
		this->height = height;
	}
	~Rectangle() = default;
	float Size() override
	{
		return width * height;
	}
	void Draw() override
	{
		printf("Rectangle Draw\n");
	}
};

/// <summary>
/// 円形
/// </summary>
class Circle : public IShape
{
public:
	Circle(float size)
	{
		this->width = size;
	}
	~Circle() = default;
	float Size() override
	{
		return 3.14f * width * width;
	}
	void Draw() override
	{
		printf("Circle Draw\n");
	}
};



int main()  
{  
	IShape* shape[2];
	shape[0] = new Circle(10);
	shape[1] = new Rectangle(10, 20);

	for (int i = 0; i < 2; i++)
	{
		shape[i]->Draw();
		printf("Size: %f\n", shape[i]->Size());
	}

	for (int i = 0; i < 2; i++)
	{
		delete shape[i];
	}
return 0;  
}

