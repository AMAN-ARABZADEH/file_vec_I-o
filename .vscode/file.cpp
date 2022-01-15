#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>

void print_header(std::string student, std::string score){
 std::cout << std::setw(15) << std::left << student
           << std::setw(5) << score << std::endl;
           std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
           std::cout << std::setfill(' ');
 }
 void print_footer(double average){
  std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
  std::cout << std::setfill(' ');
  std::cout << std::setw(15) << std::left << "Average score" << std::setw(5) << std::right << average;
 }
 void print_student(const std::string &student, int score){
   std::cout << std::setprecision(1) << std::fixed;
   std::cout << std::setw(15) << std::left << student
             << std::setw(5) << std::right << score << std::endl;
 }

 int process_response(const std::string &response, const std::string &answer_key){
  int score{0};
  for (size_t i = 0; i < answer_key.size(); ++i)
  {
     if(response.at(i) == answer_key.at(i)){
      score++;
     }
  }
  
     return score;
 }


int main(){
std::string answer_keys{};
std::string name{};
std::string response{};
int running_sum{0};
int total_students{0};
double average_score{0.0};
int score{};

std::ifstream in_file{"file_student.txt"};
if(!in_file){
 std::cerr << "File could not be open." << std::endl;
 return 1;
}




in_file >> answer_keys;
print_header("Student", "Score");
while (in_file >> name >> response){
  ++total_students;
  int scor = process_response(response, answer_keys);
  running_sum += scor;
 print_student(name, scor );
}
if(total_students != 0){
  average_score = static_cast<double>(running_sum) / total_students;
}
print_footer(average_score);


in_file.close();
std::cout << std::endl << std::endl;
 return 0;
}