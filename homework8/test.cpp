#include <iostream>
#include <cmath>
int main()
{
  for(int i = 1; ; i ++) {
    if(((int)pow(2, i) - 1) % 11 == 0){
      std::cout << pow(2, i) - 1 << " -> " << (pow(2, i) - 1) / 11 << " - " << (int)pow(2, i) % 11 << std::endl;
      std::cout << i << std::endl;
      break;
    }
  }
  return 0;
}
