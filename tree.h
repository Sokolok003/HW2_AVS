#ifndef __tree__
#define __tree__

//------------------------------------------------------------------------------
// rectangle.h - �������� �������� ��������������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"
#include "plant.h"

// �������������
class Tree : public Plant {
public:
  virtual ~Tree() {}
  // ���� ���������� �������������� �� �����
  virtual void In(ifstream& ifst);
  // ��������� ���� ���������� ��������������
  virtual void InRnd();
  // ����� ���������� �������������� � ������������� �����
  virtual void Out(ofstream& ofst);
  // ���������� ��������� ��������������
  virtual double Perimeter();
private:
  int age;
  std::string name;
};

#endif //__tree__
