#ifndef __rectangle__
#define __rectangle__

//------------------------------------------------------------------------------
// rectangle.h - �������� �������� ��������������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"
#include "shape.h"

// �������������
class Rectangle : public Shape {
public:
  virtual ~Rectangle() {}
  // ���� ���������� �������������� �� �����
  virtual void In(ifstream& ifst);
  // ��������� ���� ���������� ��������������
  virtual void InRnd();
  // ����� ���������� �������������� � ������������� �����
  virtual void Out(ofstream& ofst);
  // ���������� ��������� ��������������
  virtual double Perimeter();
private:
  int x, y; // ������, ������
};

#endif //__rectangle__