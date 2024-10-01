#include <iostream>
#include <cmath>
using namespace std;

int basalMetabolic(int weight)
{
    return static_cast<int>(70 * pow((weight / 22.0), 0.756));
}

int physicalActivity(int intensity, int weight, int minutes)
{
    return static_cast<int>(0.0385 * intensity * weight * minutes);
}

int main()
{
    int weight, intensity, minutes, caloriesPerServing, numberOfServing;

    // Input weight
    cout << "How much is the weight?" << endl;
    cin >> weight;
    if (weight <= 0) {
        cout << "Invalid input. Weight must be greater than 0." << endl;
        return 1; // Exit the program on invalid input
    }

    // Input intensity
    cout << "Enter Intensity (17, 10, 8, or 1):" << endl;
    cin >> intensity;
    if (intensity != 17 && intensity != 10 && intensity != 8 && intensity != 1) {
        cout << "Invalid input. Please enter 17, 10, 8, or 1." << endl;
        return 1; // Exit the program on invalid input
    }

    // Input minutes
    cout << "Enter the number of minutes spent performing the physical activity:" << endl;
    cin >> minutes;
    if (minutes <= 0) {
        cout << "Invalid input. Minutes must be greater than 0." << endl;
        return 1; // Exit the program on invalid input
    }

    // Input calories per serving
    cout << "Please enter the calories per serving of the food:" << endl;
    cin >> caloriesPerServing;
    if (caloriesPerServing <= 0) {
        cout << "Invalid input. Calories must be greater than 0." << endl;
        return 1; // Exit the program on invalid input
    }

    // Calculate the number of servings needed
    numberOfServing = static_cast<int>((basalMetabolic(weight) + physicalActivity(intensity, weight, minutes)) / (caloriesPerServing * 0.9));
    cout << "You need " << numberOfServing << " servings of food to maintain the current weight under these activities." << endl;

    return 0; // Return 0 to indicate successful completion
}
