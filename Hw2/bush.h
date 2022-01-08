#ifndef __bush__
#define __bush__

//------------------------------------------------------------------------------
// bush.h - содержит описание прямоугольника  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"
#include "plant.h"

// прямоугольник
class Bush : public Plant {
public:
  virtual ~Bush() {}
  virtual void InCons();
  // Ввод параметров прямоугольника из файла
  virtual void In(ifstream& ifst);
  // Случайный ввод параметров прямоугольника
  virtual void InRnd();
  // Вывод параметров прямоугольника в форматируемый поток
  virtual void Out(ofstream& ofst);
  // Вычисление периметра прямоугольника
  virtual double Quotient();
private:
  std::string type;
  const char* name[10];
};

#endif //__bush__
