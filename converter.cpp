#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

// Function prototypes
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToFahrenheit(double kelvin);

int main() {
  int choice;
  double temperature, result;

  cout << "Temperature Converter" << endl;
  cout << "---------------------" << endl;

  do {
    cout << "\nChoose conversion:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "5. Fahrenheit to Kelvin" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        result = celsiusToFahrenheit(temperature);
        cout << fixed << setprecision(2) << temperature << " Celsius is " << result << " Fahrenheit" << endl;
        break;
      case 2:
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        result = fahrenheitToCelsius(temperature);
        cout << fixed << setprecision(2) << temperature << " Fahrenheit is " << result << " Celsius" << endl;
        break;
      case 3:
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        result = celsiusToKelvin(temperature);
        cout << fixed << setprecision(2) << temperature << " Celsius is " << result << " Kelvin" << endl;
        break;
      case 4:
        cout << "Enter temperature in Kelvin: ";
        cin >> temperature;
        result = kelvinToCelsius(temperature);
        cout << fixed << setprecision(2) << temperature << " Kelvin is " << result << " Celsius" << endl;
        break;
      case 5:
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        result = fahrenheitToKelvin(temperature);
        cout << fixed << setprecision(2) << temperature << " Fahrenheit is " << result << " Kelvin" << endl;
        break;
      case 6:
        cout << "Enter temperature in Kelvin: ";
        cin >> temperature;
        result = kelvinToFahrenheit(temperature);
        cout << fixed << setprecision(2) << temperature << " Kelvin is " << result << " Fahrenheit" << endl;
        break;
      case 0:
        cout << "Exiting program." << endl;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
    }
  } while (choice != 0);

  return 0;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
  return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
  return celsius + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
  return kelvin - 273.15;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
  return (fahrenheit + 459.67) * 5.0 / 9.0;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
  return (kelvin * 9.0 / 5.0) - 459.67;
}
