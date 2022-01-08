#ifndef __flower__
#define __flower__

//------------------------------------------------------------------------------
// rectangle.h - �������� �������� ��������������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"
#include "plant.h"

// �������������
class Flower : public Plant {
public:
  virtual ~Flower() {}
  // ���� ���������� �������������� �� �����
  virtual void In(ifstream& ifst);
  // ��������� ���� ���������� ��������������
  virtual void InRnd();
  // ����� ���������� �������������� � ������������� �����
  virtual void Out(ofstream& ofst);
  // ���������� ��������� ��������������
  virtual double Perimeter();
private:
  std::string name, type;
};

#endif //__flower__
