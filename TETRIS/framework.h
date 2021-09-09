// header.h: ǥ�� �ý��� ���� ����
// �Ǵ� ������Ʈ Ư�� ���� ������ ��� �ִ� ���� �����Դϴ�.
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // ���� ������ �ʴ� ������ Windows ������� �����մϴ�.
// Windows ��� ����
#include <windows.h>
// C ��Ÿ�� ��� �����Դϴ�.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <time.h>
#include <iostream>

#include "debug.h"
#include "graphic.h"
#include "Random.h"
#include "deltaTime.h"
#include "BMP.h"
#include "Input.h"
#include "GameObject.h"
#include "Sprite.h"
#include "ObjectManager.h"
#include "Animation.h"
#include "BoxCollider2D.h"
#include "Global.h"
#include "TetrisBlock.h"
#include "BackGround.h"
#include "TetrisBlockController.h"
#include "RotateBlockCollider.h"
#include "CheckCompleteBlocksCollider.h"

using namespace std;