#include <iostream>
#include <cmath>

using namespace std;





int main() {

    // alle priemgetallen tot en met limit + 1
    const int limit = 120;

    bool zeef[limit];

    for (int i = 0; i < limit; i++) {
        zeef[i] = true;
    }

    for (int i = 0; i < limit; i++) {
        if (zeef[i] == true) {
            int counter = i + 2;

            while (true) {
                int number = (i + 2) * counter;
                if (number > limit) {
                    break;
                } else {
                    zeef[number - 2] = false;
                }

                counter++;
            }

        }
    }


    cout << "priem: " << endl;
    for (int i = 0; i < limit; i++) {
        if (zeef[i] == true) {
            cout << i + 2 << endl;
        }
    }


    return 0;
}
