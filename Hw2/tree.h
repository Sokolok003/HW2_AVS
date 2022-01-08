#ifndef __tree__
#define __tree__

//------------------------------------------------------------------------------
// rectangle.h - �������� �������� ��������������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>

# include "rnd.h"
#include "plant.h"

// �������������
class Tree : public Plant {
public:
  virtual ~Tree() {}
  virtual void InCons();
  // ���� ���������� �������������� �� �����
  virtual void In(ifstream& ifst);
  // ��������� ���� ���������� ��������������
  virtual void InRnd();
  // ����� ���������� �������������� � ������������� �����
  virtual void Out(ofstream& ofst);
  // ���������� ��������� ��������������
  virtual double Quotient();
private:
  int age;
  const char* name[10];
};

#endif //__tree__

