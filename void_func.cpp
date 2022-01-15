 #include <iostream>
 void modify(int& option){
  int temp;
  std::cout << "Pick a modification:\n1 - add one\n2 - minus one\n3 - times two\nYour selection is: ";
  std::cin >> temp;
  if(temp == 1)
     option = option  + 1;
  if(temp == 2)
     option = option - 1;
  if(temp == 3)
     option = option * 2; 
 }

 int main(){

int selection{};
std::cout << "Enter a number";
std::cin >> selection;
modify(selection);
std::cout << "\"integer a\" has been updated to " << selection << std::endl;

  return 0; 
 }