#include "framework.h"

TetrisBlock::TetrisBlock(float px, float py) : Animation("", "", true, px, py)
{

}

TetrisBlock::~TetrisBlock()
{

}

void TetrisBlock::start()
{
	addImage("Asset/���_�׸�.bmp", 0, 0, 40, 40, 0);
	addImage("Asset/���_���.bmp", 0, 0, 40, 40, 0);
	addImage("Asset/���_���2.bmp", 0, 0, 40, 40, 0);
	addImage("Asset/���_����.bmp", 0, 0, 40, 40, 0);
	addImage("Asset/���_����.bmp", 0, 0, 40, 40, 0);
	addImage("Asset/���_����.bmp", 0, 0, 40, 40, 0);
	addImage("Asset/���_���ѳ��.bmp", 0, 0, 40, 40, 0);
	addImage("Asset/���_��ũ2.bmp", 0, 0, 40, 40, 0);

	addBoxCollider2D(2, -1, 36, 2);
	addBoxCollider2D(2, 1, 36, 40);
	addBoxCollider2D(-1, 2, 2, 36);
	addBoxCollider2D(39, 2, 2, 36);

	setImageDelay(1.0f);
}
void TetrisBlock::update()
{

}