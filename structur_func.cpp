 #include <iostream>

 struct person
 {
    std::string name;
    int age;
 };
 

 person readInput(person& w){
    std::cout << "Enter a name: ";
    std::cin >> w.name;
    std::cout << "Enter a age: "; 
    std::cin >> w.age;
    return w;
 }

 int main(){
  person A;
  A.name = "Bob";
  A.age = 20;
  std::cout << readInput(A).name << std::endl;
  std::cout << std::endl;

  std::cout << "Person A's name is " << A.name << " and they are " << A.age << " years old" << std::endl;
  return 0;
 }