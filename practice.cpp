#include <iostream>
#include  <iomanip>
#include <algorithm>
#include <string>
#include <vector>

void width(){
 std::cout << "1234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
}
struct City
{
   std::string name;
   long population;
   double cost;
};


struct Country
{
 std::string name;
 std::vector<City> cities;
};

struct Tour
{
   std::string title;
   std::vector<Country> countries;
};

int main(){
 // Challenge 1

 Tour tours{
  "Tours Ticket Prices from Miami",
  {
   {
    "Colombia", {
     {"Bogota", 877800, 400.99},
     {"Cali", 2401000, 350.98},
     {"Medellin", 2464000, 350.98},
     {"Cartageba", 972000, 345.23}
    },
   },
   {
    "Brazil",{
     {"Rio De Janiero", 13500000, 567.97},
     {"Sao Paulo", 1131000, 975.450},
     {"Salvador", 18234000, 855.99}
    },
   },
   {
    "Chile",{
     {"Valdiva", 260000, 569.90},
     {"Santiago", 79022000, 530.98}
    },
   },
   {"Argentina", {
    {"Buenos Aires", 3010000, 728.77},
   }
   },
  }
 };





const int total_width{70};
const int field1_width{20};  // Country name
const int field2_width{20};  // City Population
const int field3_width{15};  // Population
const int field4_width{15};  // Cost

width();
std::cout << std::endl;
std::cout << std::endl;
int title_length = tours.title.length();
std::cout << std::setw((total_width - title_length) / 2) << "" << tours.title << std::endl;
std::cout << std::endl;
std::cout << std::endl;
std::cout << std::setw(field1_width) << std::left << "Country"
          << std::setw(field2_width) << std::left << "City"
          << std::setw(field3_width) << std::right << "Population"
          << std::setw(field4_width) << std::right << "Price"
          << std::endl;



std::cout << std::setw(total_width) << std::setfill('-') << "" << std::endl;
std::cout << std::setfill(' ');


std::cout << std::setprecision(2) << std::fixed;

for(Country country : tours.countries){
   for(size_t i = 0; i <country.cities.size(); ++i){
      std::cout << std::setw(field1_width) << std::left << ((i == 0) ? country.name : "")
                << std::setw(field2_width) << std::left << country.cities.at(i).name
                << std::setw(field3_width) << std::right << country.cities.at(i).population
                << std::setw(field4_width) << std::right << country.cities.at(i).cost
                << std::endl;
   }
}


std::cout << std::endl;
std::cout << std::endl;
std::cout << std::endl;
std::cout << std::endl;
 return 0;
}