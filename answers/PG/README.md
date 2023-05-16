# Programming 621 Assignment Question BreakDowns

## Question 1

**Objective:**

Write a function that checks a given *array of integers* against *a set of integers*.

> - The set of integers acts as a control.
>   - (1) if all the numbers in the array are contained in the set the function *returns 0*
>   - (2) if any number in the array is not contained within the set then the function *returns -1*

==============

The funciton signature should be as follows:

```c++
int checkConditions(int array[][], int rowSize, int colSize, std::set<int> conditions)
```

==============

**Assignment Constraints:**

> Write the implementation for the function `checkConditions` **without using any built-in
> functions for searching elements in sets**.
>
> You should implement your own algorithm for searching elements in the conditions set.

***

## Question 2

**Objective:**

Write a c++ program to calculate the charges for three customers based on various factors.

The program should prompt the user for the necessary information and display the calculated charges for each customer in a specified format.

==============

**Formula:**

`charge = base_charge + items * item_charge`

***

## Question 3

**Objective:**

Create a C++ program that implements a class hierarchy for temperature conversion.

The program should include:

> - a base class that stores a temperature value
> - a derived class that performs the conversion from one temperature unit to another.

The derived class should also provide a method for prompting the user to input the
temperature value and a method for converting the temperature value.

The program
should also include logic for determining the number of temperature conversions to
perform based on user input.

**Template:**

```c++
class Temperature
{
  protected:
    double temperature = 0;
};

class ToCelsius: public Temperature
{
  public:
    int toCelsius(temperature)
    {
      /*
      code to convert temperature to celsius
      */
    };
};

class ToFahrenheit: public Temperature
{
  public:
    int toFahrenheit(temperature)
    {
      /* 
      code to convert temperature to fahrenheit
      */
    };

};
```
