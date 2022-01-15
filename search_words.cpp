#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <algorithm>

bool find_substring(const std::string &word_to_find, const std::string &target){
 std::size_t found = target.find(word_to_find);
 if(found == std::string::npos){
  return false;
 }
 else{
  return true;
 }
}
int main(){

std::string search;
std::string rad;
int word_count{0};
int match_count{0};

std::ifstream in_file{"romeoandjulio.txt"};
if(!in_file){
  std::cerr << "File can't be open"<< std::endl;
  return 1;
}

std::cout << "Enter to search for word: ";
std::cin >> search;


while(in_file >> rad){
 word_count++;
 if(find_substring(search, rad)){
  ++match_count;
  std::cout << rad << " ";
 }
}


std::cout << word_count << " words were searched.." << std::endl;
std::cout << " The substring " << search << " was found " << match_count << " times" << std::endl;




in_file.close();
 return 0;
}