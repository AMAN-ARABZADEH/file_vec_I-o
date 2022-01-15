#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>


int main(){

std::string read_line;
int add_line_number{0};

std::ifstream in_file{"romeoandjulio.txt"};
if(!in_file){
 std::cerr << "File could not be open" << std::endl;
 return 0;
}

std::ofstream out_file{"romeoandjulio_copy.txt"};
if(!out_file){
 std::cerr << "File could not be open" << std::endl;
 return 0;
}

while (std::getline(in_file, read_line)){
 if(read_line == ""){
  out_file << std::endl;
 }
 ++add_line_number;
 out_file << std::setw(8) << std::left << add_line_number << read_line << std::endl;


}


std::cout << "Copy complited" << std::endl;

out_file.close();
 return 0;
}