/*
 * Title: hw4_1.cpp
 * Abstract: This program reads a number of input values and the
 *           values themselves. Then, the program puts all
 *           negative numbers in front of all positive numbers.
 * Author: Justin Mello
 * ID: 2002
 * Date: 04/01/2021
 */

#include <iostream>

using namespace std;
int main() {

    //Initial Variables
    int count;
    int start = 0;
    int end = 0;
    int temp = 0;

    //Get user input, populate arrays
    cin >> count;
    int numbers[count];
    int results1[count];
    int results2[count];

    for(int i = 0; i < count; i++) {
        cin >> numbers[i];
        results1[i] = numbers[i];
        results2[i] = numbers[i];
    }

    end = count;

    //Calculation 1
    for(int i = 0, j = count - 1; i < count; i ++) {
        if(i == j) {
            break;
        }
        if(results1[i] > 0) {

            if(results1[j] < 0) {
                temp = results1[i];
                results1[i] = results1[j];
                results1[j] = temp;
            }
            else {
                j--;
                i--;
            }
        }
    }

    //Calculation 2
    for(int i = 0, j = 0; i < count; i++) {
        if(j == count)
            break;
        if(results2[j] > 0) {
            j++;
            i--;
        }
        else {
            temp = results2[i];
            results2[i] = results2[j];
            results2[j] = temp;
            j++;
        }
    }

    //Display Results
    for(int i = 0; i < count; i++) {
        cout << results1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < count; i++) {
        cout << results2[i] << " ";
    }


    return 0;
}
