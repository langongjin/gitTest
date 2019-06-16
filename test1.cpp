//
// Created by Gongjin Lan on 11/14/18.
//

#include "test1.h"
#include <iostream>


// 第一个命名空间
namespace first_space{
  void func(){
    std::cout << "Inside first_space" << std::endl;
  }
}
// 第二个命名空间
namespace second_space{
  void func(){
    std::cout << "Inside second_space" << std::endl;
  }
}