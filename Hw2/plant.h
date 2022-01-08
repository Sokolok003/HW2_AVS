#ifndef __plant__
#define __plant__

//------------------------------------------------------------------------------
// plant.h - �������� �������� ���������� �������������� ������,
//------------------------------------------------------------------------------

#include <fstream>

#include "rnd.h"

//------------------------------------------------------------------------------
// ���������, ���������� ��� ��������� ������
class Plant {
protected:
  static Random rnd12;
  static Random rnd3;
  static Random rndType;
  static Random rndName;
public:
  virtual ~Plant() {};

  static Plant* StaticInCons();
  virtual void InCons() = 0;
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
  virtual double Quotient() = 0;
};


#endif

