#ifndef __tree__
#define __tree__

//------------------------------------------------------------------------------
// rectangle.h - содержит описание прямоугольника  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>

# include "rnd.h"
#include "plant.h"

// прямоугольник
class Tree : public Plant {
public:
  virtual ~Tree() {}
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
  int age;
  const char* name[10];
};

#endif //__tree__

