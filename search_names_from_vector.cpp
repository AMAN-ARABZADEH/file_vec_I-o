#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

int main(){

 std::vector<std::string> my_vec;
std::cout << "Enter the names, press Q to quit: ";
std::string name;
while (name != "Q" && name != "q")
{
 std::getline(std::cin, name);
 my_vec.push_back(name);
}
my_vec.pop_back();

std::cout << "You have entered: " << my_vec.size() << std::endl;
for (size_t i = 0; i < my_vec.size(); i++)
{
 std::cout << " You have entered: " << my_vec[i] << std::endl;
}
std::cout << std::endl;

std::ofstream out_file{"names.txt", std::ios::app};
for(auto itr = my_vec.begin(); itr != my_vec.end(); ++itr){
out_file << *itr << std::endl << std::endl;
}

std::ifstream in_file{"names.txt"};
std::vector<std::string> my_vec2;
std::string n;
while (std::getline(in_file, n))
{
my_vec2.push_back(n);
}



// Search for the person

std::cout << "Enter the name you are looking for: ";
std::string names;
std::cin >> names;
 

auto it = find(my_vec2.begin(), my_vec2.end(), names);
if(it != my_vec2.end()){
 std::cout << "Match found" << std::endl;
} else{
 std::cout << "Match could not be found" << std::endl;
}

std::cout << *it << std::endl;


 return 0;
}