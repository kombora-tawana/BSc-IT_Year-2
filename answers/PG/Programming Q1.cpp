#include <iostream>
#include <set>

/*
 * These statements make the specified class available to this program
 */
using std::cin;
using std::cout;
using std::endl;
using std::set;

int checkConditions(int array[][4], int rowSize, int colSize, set<int> conditions);

int main(void)
{
  int row, col;
  set<int> conditions = {1, 2, 3, 4, 5, 6, 7, 8};
  int arr[3][4] = {{1, 2, 3, 4},
                   {3, 4, 5, 6},
                   {5, 6, 7, 8}};
  cout << checkConditions(arr, 3, 4, conditions) << endl;
  return 0;
}

/*
 * The function takes:
   - an array of integers (array),
   - row size (rowSize),
   - column size (colSize),
   - a set of integers (conditions)
 * It iterates over each element of the array using nested loops.
 * For each element, it assigns the current number to the variable currentNumber.
 * It then checks if currentNumber is present in the set by iterating through the conditions set using a ranged-based for loop.
 * If a match is found, it sets the presentInSet flag to true and breaks the loop.
 * After the inner loop completes, it checks the value of presentInSet.
 * If it is false, it means the number was not found in the set, so the function returns -1.
 * If all numbers pass the condition check, the function returns 0, indicating that all numbers in the array are contained in the set.
 *
*/
int checkConditions(int array[][4], int rowSize, int colSize, set<int> conditions)
{
  for (int row = 0; row < rowSize; row++)
  {
    for (int col = 0; col < colSize; col++)
    {
      int currentNumber = array[row][col];
      bool presentInSet = false;

      for (int num : conditions)
      { // range-based for loop. for each number in the set conditions do some action
        if (num == currentNumber)
        {
          presentInSet = true;
          break;
        }
      }

      if (!presentInSet)
      {
        return -1; // Number not found in the set, return -1
      }
    }
  }

  return 0; // All numbers in the array are contained in the set
}
