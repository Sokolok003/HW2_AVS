//------------------------------------------------------------------------------
// Plant.cpp - �������� ��������� ��������� � ���������� ���������� ������
// � �������� ������������ ������
//------------------------------------------------------------------------------

#include "flower.h"
#include "bush.h"
#include "tree.h"

//------------------------------------------------------------------------------
Random Plant::rnd20(1, 20);
Random Plant::rnd2(1, 2);

//------------------------------------------------------------------------------
// ���� ���������� ���������� ������ �� �����
Plant* Plant::StaticIn(ifstream& ifst) {
  int k;
  ifst >> k;
  Plant* pl = nullptr;
  switch (k) {
  case 1:
    pl = new Rectangle;
    break;
  case 2:
    pl = new Triangle;
    break;
  }
  pl->In(ifst);
  return pl;
}

// ��������� ���� ���������� ������
Plant* Plant::StaticInRnd() {
  auto k = Plant::Plant.Get();
  Plant* sp = nullptr;
  switch (k) {
  case 1:
    sp = new Rectangle;
  case 2:
    sp = new Triangle;
  }
  sp->InRnd();
  return sp;
}
