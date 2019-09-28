// This program calculates and displays business expenses.
// Name: Warren Macatangay
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  //Introduction to Business Trip Tracker
  std::cout << "Welcome to the Business Trip Tracker!\n";
  std::cout << "\n";
  // ask the information about the trip
  std::string trip_location;
  std::cout << "What is the business trip location? ";
  getline (std::cin, trip_location);

  int days;
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  double hotel_expense;
  std::cout << "What is the total hotel expense? $";
  std::cin>> hotel_expense;

  double meal_expense;
  std::cout << "What is the total meal expense? $";
  std::cin>> meal_expense;

// Formula to calculate the total expense of the trip
  double total = hotel_expense + meal_expense;
  std::cout << "\n";
  std::cout << std::fixed;
// Displays the total
  std::cout << "Location" << "\t";
  std::cout << "Days \t" ;
  std::cout << "Hotel \t" ;
  std::cout << "  Meal \t" ;
  std::cout << "  Total \n";
  std::cout << trip_location << "\t";
  std::cout << std::setw(4)<<days;
  std::cout << std::setw(3)<< "$"<< std::setprecision(2)<<hotel_expense;
  std::cout << std::setw(3)<<"$"<< std::setprecision(2)<<meal_expense;
  std::cout << std::setw(3)<<"$"<< std::setprecision(2)<<total << "\n";
  return 0;
}
