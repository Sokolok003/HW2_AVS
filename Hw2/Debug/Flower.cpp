//------------------------------------------------------------------------------
// Flower.cpp - �������� ������ ��������������
//------------------------------------------------------------------------------

#include "flower.h"

//------------------------------------------------------------------------------
// ���� ���������� �������������� �� �����
void Flower::In(ifstream& ifst) {
  ifst >> name >> type;
}

// ��������� ���� ���������� ��������������
void Flower::InRnd() {
  name = Plant::rnd12.Get();
  type = Plant::rnd12.Get();
}

//------------------------------------------------------------------------------
// ����� ���������� �������������� � ������������� �����
void Flower::Out(ofstream& ofst) {
  ofst << "It is Rectangle: x = " << x << ", y = " << y
    << ". Perimeter = " << Perimeter() << "\n";
}

//------------------------------------------------------------------------------
// ���������� ��������� ��������������
double Flower::Perimeter() {
  return 2.0 * (x + y);
}