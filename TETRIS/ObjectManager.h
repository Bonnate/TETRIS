#pragma once

#include <vector>
#include "GameObject.h"

#define MAX_LAYER 10

class ObjectManager
{
private:
	static vector<GameObject*> gameObject[MAX_LAYER]; //���ӿ�����Ʈ..���̾� �迭

	static bool isLeftCollider;
	static bool isRightCollider;
	static bool isDownCollider;
	static int  deadLinesAmount;


public:

	//stl vector�� �ν���Ʈ(��ü) �߰�/���� �Լ�//
	static void instantiate(GameObject* o, int layer);
	static void destroy(GameObject* o);

	//��Ͽ�..�߰��� ��ü..������Ʈ �Լ�//
	static void update();

	//������Ÿ ���Ŀ�..�浹�˻� �Լ�//
	static void checkCollision();
	static void checkObjectCollision(GameObject* objI, GameObject* objJ, int targetxPos, int targetyPos);
	static void checkObjectRotateCollision(GameObject* objI, GameObject* objJ);

	//����ǥ�õ�..��ü �����ϱ�//
	static void clearDead();

	//���ü..�߰��� ��ü..�׸��� �Լ�//
	static void draw();

	//��Ͽ�..�߰��� ��ü..��� ���� �Լ�//
	static void clear();

	static void controlBlocks();
	static void checkBorderReached();

	static void getTetrisBlockObjectManager(vector<GameObject*>& _1stLayer, vector<GameObject*>& _2ndLayer);

	static void checkBlocksComplete();
};