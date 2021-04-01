#include <iostream>

using namespace std;
int main() {

    //Initial Variables
    int count;
    int start = 0;
    int end = 0;
    int temp = 0;

    //Get user input, populate array
    cin >> count;
    int numbers[count];
    for(int i = 0; i < count; i++) {
        cin >> numbers[i];
    }

    end = count;

    //Calculation 1
    for(int i = 0, j = count - 1; i < count; i ++) {
        if(i == j) {
            break;
        }
        if(numbers[i] > 0) {

            if(numbers[j] < 0) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
            else {
                j--;
                i--;
            }
        }
    }

    //Display Results
    for(int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
