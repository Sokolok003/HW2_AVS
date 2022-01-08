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
  std::string type;
  const char* name[10];
};

#endif //__flower__
