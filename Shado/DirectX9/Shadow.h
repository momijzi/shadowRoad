#pragma once


class Shadow
{
private:


public:

	Shadow();
	~Shadow();

	//影が出るかどうか
	bool stageShadow[10][10];


	void DrawShadow(int x, int y,int Pixel);

};
