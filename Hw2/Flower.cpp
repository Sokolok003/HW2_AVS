//------------------------------------------------------------------------------
// Flower.cpp - �������� ������ ��������������
//------------------------------------------------------------------------------
#include <iostream>;
#include <cstring>
#include "flower.h"


void Flower::InCons() {
  std::cout << "What name for flower?" << endl;
  std::cin >> *name;
  
  std::cout << "What type for flower?" << endl;
  std::cin >> type;
}


//------------------------------------------------------------------------------
// ���� ���������� �������������� �� �����
void Flower::In(ifstream& ifst) {
  ifst >> *name >> type;
}

// ��������� ���� ���������� ��������������
void Flower::InRnd() {
  Plant::rndName.GetName(*name);
  type = Plant::rndType.GetTupeFlower();
}

//------------------------------------------------------------------------------
// ����� ���������� �������������� � ������������� �����
void Flower::Out(ofstream& ofst) {
  ofst << "It is Flower: name = " << name << ", type = " << type
    << ". Perimeter = " << Quotient() << "\n";
}

//------------------------------------------------------------------------------
// ���������� ��������� �������������� "AaEeIiOoUuYy"
double Flower::Quotient() {
  const char* arr[13] = { "A"};
  int sum_1 = 0;
  for (int i = 0; i < strlen(*name); ++i) {
    for (int j = 0; j < strlen(*arr); ++j) {
      if (name[i] == arr[j])
        sum_1++;
    }
  }
  return 1.0 * (sum_1 / strlen(*name));
}