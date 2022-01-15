#include <iostream>

bool is_4_digit(std::string pin_code){
 bool status = true;
 if(pin_code.length() != 4){
    status = false;
 }
 return status;
}


int main(){


std::string PIN{};
std::cout << "Enter four digits numbers: ";
std::cin >> PIN;

if(is_4_digit(PIN ) == 1){
  std::cout << "PIN Accepted " << std::endl;
} else{
 std::cout << "Access denied." << std::endl;
}

std::cout << std::endl;



 return 0;
}