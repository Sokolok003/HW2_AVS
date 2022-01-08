#ifndef __flower__
#define __flower__

//------------------------------------------------------------------------------
// rectangle.h - содержит описание прямоугольника  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"
#include "plant.h"

// прямоугольник
class Flower : public Plant {
public:
  virtual ~Flower() {}
  // Ввод параметров прямоугольника из файла
  virtual void In(ifstream& ifst);
  // Случайный ввод параметров прямоугольника
  virtual void InRnd();
  // Вывод параметров прямоугольника в форматируемый поток
  virtual void Out(ofstream& ofst);
  // Вычисление периметра прямоугольника
  virtual double Perimeter();
private:
  std::string name, type;
};

#endif //__flower__
