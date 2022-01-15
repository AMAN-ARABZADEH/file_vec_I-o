#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& str){
 std::vector<std::string> returns;
 typedef std::string::size_type string_size;
 string_size i = 0;


 // Invariant we have processed charachters [original value of i and j]
 while (i != str.size())
 {
    // ignore leading blanks 
    // Invariant: charachters in range [orginal j, current i] are all space 
    while (i != str.size() && isspace(str[i]))
    
      ++i;
    
    // find end of the nex word
    string_size j = i;
    // invariant: none of the charachters in range [orginal j, current i] is a space
    while (j != str.size() && !isspace(str[j]))
    
      ++j;
    
    // if we found some nonwhitespace charachters
    if(i != j){
     // Copy from s starting at i and taking j - i char.
     returns.push_back(str.substr(i, j - i));
     i = j;
    }
 }
 return returns;
 
}
int main(){

std::string strs;
std::cout << "Enter menaing to split in neaw lines: ";
std::getline(std::cin, strs);

   std::vector<std::string> vec = split(strs);
  // write each word in vec
  for(std::vector<std::string>::size_type i = 0; i != vec.size(); ++i){
   std::cout << vec[i] << std::endl;
  }










 return 0;
}