#pragma once

#include "GameObject.h"
#include "BMP.h"

class Sprite : public GameObject
{
private:
	Image image;

public:
	Sprite(string tag, string name, bool active, float px, float py);
	~Sprite();

	//�̹��� ����ü ����//
	void setImage(const char* fileName);
	void setImage(const char* fileName, int x, int y, int width, int height);

	//����ü �̹��� �׸���
	void draw();
};