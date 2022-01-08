#ifndef __bush__
#define __bush__

//------------------------------------------------------------------------------
// bush.h - �������� �������� ��������������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"
#include "plant.h"

// �������������
class Bush : public Plant {
public:
  virtual ~Bush() {}
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

#endif //__bush__
