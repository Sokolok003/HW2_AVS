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