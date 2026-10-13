#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {
    // TODO:score array
       double score[3][3];
    // TODO: studentcourse array
       string courseName[3] = {"Math", "C", "OS"};
    bool hasData = false;
    int choice;

    do {
        cout << "\n=== Student Grade System ===\n"
             << "1) Record grades (3x3)\n"
             << "2) One student's Total & Average\n"
             << "3) Display ALL (table + per-student stats)\n"
             << "4) Exit\n"
             << "Enter choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Try again.\n";
            continue;
        }

        if (choice == 1) {
            int j = 0;
            // TODO: input 3x3 grades (0..100) with re-prompt on invalid;
               for (int i = 0; i < 3; i++) {
                   while (j < 3) {
                       int tempInput = 0;
                       cout << "Please enter " << courseName[j] << " grade for student " << i << ": " << endl;
                       cin >> tempInput;
                       if (tempInput < 0 || tempInput > 100) {
                           cout << "Invalid input. Please enter a number between 0 and 100\n";
                       }
                       else {
                           score[i][j] = tempInput;
                           j++;
                       }
                   }
                   j = 0;
               }
            // TODO: after successfully recording ALL 9 values, set hasData = true
            hasData = true;  // (do NOT set this until after your input loops)
            cout << "[TODO]\n";
        }
        else if (choice == 2) {
            if (!hasData) { cout << "Please record grades first (option 1).\n"; continue; }
            // TODO: read idx (0..2); compute total = sum of 3 courses; avg = total/3.0; print
            int index;
            cout << "Please enter student index (0-2): " << endl;
            cin >> index;
            if (index < 0 || index > 2) {
                cout << "Invalid input. Please enter a number between 0 and 2.\n";
            }
            else {
                cout << "Total Score: " <<  score[index][0] + score[index][1] + score[index][2] << endl;
                cout << "Average Score: " << (score[index][0] + score[index][1] + score[index][2]) / 3 << endl;
            }
            cout << "[TODO]\n";
        }
        else if (choice == 3) {
            if (!hasData) { cout << "Please record grades first (option 1).\n"; continue; }
            // TODO: print 3x3 table; then for each student print total & average
            cout << "Math, C, OS" << endl;
            cout << "Student 0: " << score[0][0] << ", " << score[0][1] << ", " << score[0][2] << endl;
            cout << "Student 1: " << score[1][0] << ", " << score[1][1] << ", " << score[1][2] << endl;
            cout << "Student 2: " << score[2][0] << ", " << score[2][1] << ", " << score[2][2] << endl;
            cout << "[TODO]\n";
        }
        else if (choice == 4) {
            cout << "Bye!\n";
        }
        else {
            cout << "Invalid choice. Enter 1, 2, 3, or 4.\n";
        }
    } while (choice != 4);

    return 0;
}
