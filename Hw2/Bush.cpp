//------------------------------------------------------------------------------
// Bush.cpp - содержит методы прямоугольника
//------------------------------------------------------------------------------
#include <iostream>;
#include "bush.h"

void Bush::InCons() {
  std::cout << "What name for bush?" << endl;
  std::cin >> *name;
  std::cout << "What type for bush?" << endl;
  std::cin >> type;
}

//------------------------------------------------------------------------------
// Ввод параметров прямоугольника из файла
void Bush::In(ifstream& ifst) {
  ifst >> *name >> type;
}

// Случайный ввод параметров прямоугольника
void Bush::InRnd() {
  Plant::rndName.GetName(*name);
  type = Plant::rndType.GetTypeBush();
}

//------------------------------------------------------------------------------
// Вывод параметров прямоугольника в форматируемый поток
void Bush::Out(ofstream& ofst) {
  ofst << "It is Bush: name = " << name << ", type = " << type
    << ". Perimeter = " << Quotient() << "\n";
}

//------------------------------------------------------------------------------
// Вычисление периметра прямоугольника
double Bush::Quotient() {
  const char* arr[13] = { "A" };
  int sum_1 = 0;
  for (int i = 0; i < strlen(*name); ++i) {
    for (int j = 0; j < strlen(*arr); ++j) {
      if (name[i] == arr[j])
        sum_1++;
    }
  }
  return 1.0 * (sum_1 / strlen(*name));
}
