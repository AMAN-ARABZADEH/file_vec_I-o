 #include <iostream>
 #include <vector>
 #include <algorithm>

 // func for finding the longest string
 std::string::size_type width(const std::vector<std::string>& vec){
 std::string::size_type max_length = 0;
 for (std::vector<std::string>::size_type i = 0; i < vec.size(); i++)
 {
   max_length = std::max(max_length, vec[i].size());
  }

  return max_length;

 }

 std::vector<std::string> frame(const std::vector<std::string>& vec){
 std::vector<std::string> ret;
 std::string::size_type max_length  = width(vec);
 std::string border(max_length + 4, '*');


 // write the top border
 ret.push_back(border);

 // Write each interior row, borader by an asterisk and a space
 for(std::vector<std::string>::size_type i = 0; i < vec.size(); ++i){
  ret.push_back("* " + vec[i] + std::string(max_length - vec[i].size(),  ' ') + " *");
 }
 // write the bottom boarder
 ret.push_back(border);
 return ret;
  
 }


 std::vector<std::string> vcat(const std::vector<std::string>& top, const     
            std::vector<std::string>& bottom)
 {
  // Copy top picture
  std::vector<std::string> ret = top;

  // copy entire bottom pictur 
  /*
  for(std::vector<std::string>::const_iterator it = bottom.begin(); it != bottom.end()
      ; ++it){
       ret.push_back((*it));
  } */
  // Same example as above 
  ret.insert(ret.end(), bottom.begin(), bottom.end());
  return ret;
 }


std::vector<std::string> hcat(const std::vector<std::string>& left, const std::vector<std::string>& right ){
 std::vector<std::string> ret;

 // Add 1 to leave a space between pictures
 std::string::size_type width1 = width(left) + 1;

 // Indice to look at elements from left and right respectively
 std::vector<std::string>::size_type i = 0, j = 0;

 // Continue until we've seen all rows from both pictures
 while (i != left.size() or j != right.size())
 {
  // Construct new string to hold charachters from both pictures
    std::string str;

    // Copy a row from the left-hand side, if there is one
    if(i != left.size()){
     str = left[i++];
    }

    // padd to full width
    str += std::string(width1 - str.size(), ' ');
    // copy a row from the right-hand side, if there is one
    if(j != right.size()){
     str += right[j++];
    }
    // Addd str to the picture we're creating
    ret.push_back(str);


 }
 return ret;

 
}


bool is_plindrom(const std::string& s){
    return std::equal(s.begin(), s.end(), s.rbegin());
}

 int main(){


std::string ask;
std::cout << "Enter words to check if is a palindrome: ";
std::cin >> ask;
std::string out;
if(is_plindrom(ask))
  out = "is";
else
 out = "not";

    std::cout <<ask << " " <<  out << " palindrome " << std::endl;
 

  return 0;
 }