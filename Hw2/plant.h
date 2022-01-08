#ifndef __plant__
#define __plant__

//------------------------------------------------------------------------------
// plant.h - содержит описание обобщающей геометрической фигуры,
//------------------------------------------------------------------------------

#include <fstream>

#include "rnd.h"

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся фигуры
class Plant {
protected:
  static Random rnd12;
  static Random rnd3;
  static Random rndType;
  static Random rndName;
public:
  virtual ~Plant() {};

  static Plant* StaticInCons();
  virtual void InCons() = 0;
  // Ввод обобщенной фигуры
  static Plant* StaticIn(ifstream& ifdt);
  // Ввод обобщенной фигуры
  virtual void In(ifstream& ifdt) = 0;
  // Случайный ввод обобщенной фигуры
  static Plant* StaticInRnd();
  // Виртуальный метод ввода случайной фигуры
  virtual void InRnd() = 0;
  // Вывод обобщенной фигуры
  virtual void Out(ofstream& ofst) = 0;
  // Вычисление периметра обобщенной фигуры
  virtual double Quotient() = 0;
};


#endif

