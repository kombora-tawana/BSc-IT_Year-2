#include <iostream>
/*
 * These statements make the specified class available to this program
 */
using std::cin;
using std::cout;
using std::endl;

/*
 * Stores a temperature value
 * Modifies the temperature value
 * Manages access to the temperature value
*/
class Temperature
{
protected:
  double temperature;

public:
  Temperature() : temperature(0.0){};

  void setTemperature(double temp)
  {
    temperature = temp;
  }

  double getTemperature()
  {
    return temperature;
  }
};

/*
 * Converts the stored temperature value.
 * Supported temp conversions:
 * | to celsius
 * | to fahrenheit
 */
class TempConverter : public Temperature
{
public:
  void toCelsius()
  {
    double inputFahrenheit;
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> inputFahrenheit;
    setTemperature((inputFahrenheit - 32.0) * 5.0 / 9.0); // Convert Fahrenheit to Celsius using the formula
  }

  void toFahrenheit()
  {
    double inputCelsius;
    cout << "Enter a temperature in Celsius: ";
    cin >> inputCelsius;
    setTemperature((inputCelsius * 9.0 / 5.0) + 32.0); // Convert Celsius to Fahrenheit using the formula
  }
};

int main()
{
  int numConversions, choice;

  cout << "Enter the number of temperature conversions to perform: ";
  cin >> numConversions;

  cout << "Select the conversion type:" << endl;
  cout << "Enter 1: Converts Celsius to Fahrenheit" << endl;
  cout << "Enter 2: Converts Fahrenheit to Celsius" << endl;
  cout << "\nEnter your choice: ";
  cin >> choice;

  for (int i = 1; i <= numConversions; i++)
  {
    TempConverter converter;

    cout << "\nConversion " << i << ":" << endl;

    if (choice == 1)
    {
      converter.toFahrenheit();
      cout << "Fahrenheit temperature: " << converter.getTemperature() << endl;
    }
    else if (choice == 2)
    {
      converter.toCelsius();
      cout << "Celsius temperature: " << converter.getTemperature() << endl;
    }
    else
    {
      cout << "Invalid choice -- Skipping conversion." << endl;
      continue;
    }
  }

  return 0;
}
