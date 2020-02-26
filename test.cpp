#include <iostream>

int main(){
  int a;
  std::cout << "Enter" << std::endl;
  std::cin >> a;
  if(a == 1) {
    std::cout << "1" << std::endl;
  }else if(a == 2) {
    std::cout << "2" << std::endl;
  }else {
    std::cout << "Oops" << std::endl;
  }
return 1;
}
