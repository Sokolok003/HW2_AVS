#ifndef __rnd__
#define __rnd__

#include <cstdlib>
#include <ctime>   // для функции time()

//------------------------------------------------------------------------------
// rnd.h - содержит генератор случайных чисел в диапазоне от 1 до 20
//------------------------------------------------------------------------------

class Random {
public:
  Random(int f, int l) {
    if (f <= l) {
      first = f;
      last = l;
    }
    else {
      first = l;
      last = f;
    }
    // системные часы в качестве инициализатора
    srand(static_cast<unsigned int>(time(0)));
  }
  // Генерация случайного числа в заданном диапазоне "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz"
  int Get() {
    return rand() % (last - first + 1) + first;
  }
  void GetName(char* name) {
    int len = last;
    const char* alphanum[2] = {"A"};
   // for (int i = 0; i < len; ++i) {
     // name = alphanum[rand() % (sizeof(alphanum) - 1)];
   // }
    name[0] = (char)"a";
    name[len] = 0;
  }

  std::string GetTupeFlower() {
    int index = rand() % (last - first + 1) + first;
    switch (index) {
    case 1:
      return "Home";

    case 2:
      return "Garden";

    case 3:
      return "Wild";

    default:
      return "";
    }
    return "";
  }


  std::string GetTypeBush() {
    int index = rand() % (last - first + 1) + first;
    switch (index) {
    case 1:
      return "Jan";
      
    case 2:
      return "Feb";

    case 3:
      return "Mar";

    case 4:
      return "Apr";

    case 5:
      return "May";

    case 6:
      return "Jun";

    case 7:
      return "Jul";

    case 8:
      return "Aug";

    case 9:
      return "Sep";

    case 10:
      return "Oct";

    case 11:
      return "Nov";
        
    case 12:
      return "Dec";

    default:
      return "";
    }
    return "";
  }
private:
  int first;
  int last;
};

#endif //__rnd__
