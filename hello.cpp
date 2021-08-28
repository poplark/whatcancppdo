#include <iostream>
#include "hello.h"

void hello() {
  #ifdef NDEBUG
  std::cout<<"Hello world release!"<<std::endl;
  #else
  std::cout<<"Hello world debug"<<std::endl;
  #endif
}
