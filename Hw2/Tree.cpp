//------------------------------------------------------------------------------
// Bush.cpp - содержит методы прямоугольника
//------------------------------------------------------------------------------
#include <iostream>;
#include "tree.h"

void Tree::InCons() {
  std::cout << "What name for tree?" << endl;
  std::cin >> *name;
  std::cout << "What age for tree?" << endl;
  std::cin >> age;
}


//------------------------------------------------------------------------------
// Ввод параметров прямоугольника из файла
void Tree::In(ifstream& ifst) {
  ifst >> age >> *name;
}

// Случайный ввод параметров прямоугольника
void Tree::InRnd() {
  Plant::rndName.GetName(*name);
  age = Plant::rnd12.Get();
}

//------------------------------------------------------------------------------
// Вывод параметров прямоугольника в форматируемый поток
void Tree::Out(ofstream& ofst) {
  ofst << "It is Tree: name = " << name << ", age = " << age
    << ". Perimeter = " << Quotient() << "\n";
}

//------------------------------------------------------------------------------
// Вычисление периметра прямоугольника
double Tree::Quotient() {
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
