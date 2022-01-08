//------------------------------------------------------------------------------
// Plant.cpp - содержит процедуры связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры
//------------------------------------------------------------------------------
#include <iostream>
#include "flower.h"
#include "bush.h"
#include "tree.h"

//------------------------------------------------------------------------------
Random Plant::rnd12(1, 1000);
Random Plant::rnd3(1, 3);
Random Plant::rndType(1, 12);
Random Plant::rndName(1, 26);


Plant* Plant::StaticInCons() {
  std::cout << "What's figure u want to create?" << endl;
  int number;
  std::cin >> number;
  Plant* sp = nullptr;
  switch (number) {
  case 1:
    sp = new Flower;
    break;
  case 2:
    sp = new Bush;
    break;
  case 3:
    sp = new Tree;
    break;
  }
  sp->InCons();
  return sp;
}


//------------------------------------------------------------------------------
// Ввод параметров обобщенной фигуры из файла
Plant* Plant::StaticIn(ifstream& ifst) {
  int k;
  ifst >> k;
  Plant* pl = nullptr;
  switch (k) {
  case 1:
    pl = new Flower;
    break;
  case 2:
    pl = new Bush;
    break;
  case 3:
    pl = new Tree;
    break;
  }
  pl->In(ifst);
  return pl;
}

// Случайный ввод обобщенной фигуры
Plant* Plant::StaticInRnd() {
  auto k = Plant::rnd3.Get();
  Plant* sp = nullptr;
  switch (k) {
  case 1:
    sp = new Flower;
    break;
  case 2:
    sp = new Bush;
    break;
  case 3:
    sp = new Tree;
    break;
  }
  sp->InRnd();
  return sp;
}
