#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in centimeters: ";
    cin >> height;

    if (height <= 0) {
        cout << "Height must be more than zero or else your bmi is infinity." << endl;
        return 1;
    }

    bmi = weight / (height/100 * height/100);
    
    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    }
	 else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You have a normal weight you are good." << endl;
    } 
	else if (bmi >= 25 && bmi < 29.9) {
        cout << "You are overweight." << endl;
    }
	 else if (bmi >=29.9 && bmi < 100) {
        cout << "You are obese." << endl;
    }
    else cout << "are you an human??" << endl;
}

