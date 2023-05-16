#include <iostream>

/*
 * These statements make the specified class available to this program
 */
using std::cin;
using std::cout;
using std::endl;

class Customer
{
public:
  float base_charge;
  float item_charge;
  int items;

  // initializes the base_charge, item_charge, and items member variables of the Customer class to 0
  Customer() : base_charge(0), item_charge(0), items(0){}; 

  bool membersEmpty()
  {
    // Check if any member variable is not equal to 0
    return (base_charge == 0 || item_charge == 0 || items == 0);
  }

  float computeCharge()
  {
    // Calculate the total charge for the customer
    float final_charge = base_charge + (items * item_charge);
    return final_charge;
  }
};

int main()
{
  Customer person1, person2, person3;

  // Get input and compute charge for person1
  while (person1.membersEmpty())
  {
    cout << "[1]: Enter the base charge: ";
    cin >> person1.base_charge;
    cout << "[1]: Enter the number of items: ";
    cin >> person1.items;
    cout << "[1]: Enter the item charge: ";
    cin >> person1.item_charge;
    cout << "[1]: Charge: R" << person1.computeCharge() << "\n"
         << endl;
  }

  cin.ignore(); // Clear the input buffer

  // Get input and compute charge for person2
  while (person2.membersEmpty())
  {
    cout << "[2]: Enter the base charge: ";
    cin >> person2.base_charge;
    cout << "[2]: Enter the number of items: ";
    cin >> person2.items;
    cout << "[2]: Enter the item charge: ";
    cin >> person2.item_charge;
    cout << "[2]: Charge: R" << person2.computeCharge() << "\n"
         << endl;
  }

  cin.ignore(); // Clear the input buffer

  // Get input and compute charge for person3
  while (person3.membersEmpty())
  {
    cout << "[3]: Enter the base charge: ";
    cin >> person3.base_charge;
    cout << "[3]: Enter the number of items: ";
    cin >> person3.items;
    cout << "[3]: Enter the item charge: ";
    cin >> person3.item_charge;
    cout << "[3]: Charge: R" << person3.computeCharge() << endl;
  }

  return 0;
}
