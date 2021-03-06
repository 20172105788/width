// width.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CRectangle
{
private:
	int width;
	int height;
public:
	int Area();
	int Perimeter();
	void Init(int w_, int h_);
	int getwidth();
	int getheight();
};
int CRectangle::Area()
{
	return width * height;
}
int CRectangle::Perimeter()
{
	return 2 * (width + height);
}
void CRectangle::Init(int w_, int h_)
{
	width = w_, height = h_;
}
int CRectangle::getwidth()
{
	return width;
}
int CRectangle::getheight()
{
	return height;
}
int main()
{

	CRectangle orect[5], temp;
	int i, j, w, h;
	for (i = 0; i < 5; i++)
		cin >> w >> h;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; i < 5; j++)
			if (orect[i].Area() > orect[j].Area())
			{
				temp = orect[i];
				orect[i] = orect[j];
				orect[j] = temp;
			}
	}
	for (i = 0; i < 5; i++)
	{
		cout << "w=" << orect[i].getwidth() << "  h=" << orect[i].getheight() << "  Area" << orect[i].Area() << endl;
	}
    return 0;
}

