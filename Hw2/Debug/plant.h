
#ifndef __shape__
#define __shape__

//------------------------------------------------------------------------------
// plant.h - �������� �������� ���������� �������������� ������,
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rnd.h"

//------------------------------------------------------------------------------
// ���������, ���������� ��� ��������� ������
class Plant {
protected:
  static Random rnd12;
  static Random rnd2;
public:
  virtual ~Plant() {};
  // ���� ���������� ������
  static Plant* StaticIn(ifstream& ifdt);
  // ���� ���������� ������
  virtual void In(ifstream& ifdt) = 0;
  // ��������� ���� ���������� ������
  static Plant* StaticInRnd();
  // ����������� ����� ����� ��������� ������
  virtual void InRnd() = 0;
  // ����� ���������� ������
  virtual void Out(ofstream& ofst) = 0;
  // ���������� ��������� ���������� ������
  virtual double Perimeter() = 0;
};


#endif
