#include <iostream>
#include <vector>

typedef std::vector<int> row;
typedef std::vector<std::vector<int> > matrix;



int main(){

// Pushing back to vectors












 
// Vector of vectors 

// Define a vector of vectors 




matrix  d_vec;

for (size_t i = 0; i < 5; i++)
{
   row temp;
 for (size_t j = 0; j < 25; j++)
 {
   temp.push_back(i);
 }
 d_vec.push_back(temp);
}




for (size_t i = 0; i < d_vec.size(); i++) 
{
   for (size_t j = 0; j < d_vec[i].size(); j++)
   {
    std::cout << d_vec[i][j] << " ";
   }
   std::cout << std::endl;
   }






return 0;
}