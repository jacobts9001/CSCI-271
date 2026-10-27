#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX = 5;
const int COURSE_COUNT = 3;

// Function prototypes
void calculateStudent(int i, double Score[][3], double &total, double &average);
void displayAll(int n, string NameArr[], double Score[][3]);
int findTopStudent(int n, double Score[][3]);

int main()
{
    // Test data stored directly in main()
    int n = 3;
    string NameArr[MAX] = {"Alice", "Bob", "Carl"};
    double Score[MAX][3] = {
        {90, 85, 95},
        {70, 80, 75},
        {88, 92, 84}
    };

    cout << fixed << setprecision(2);

    cout << "========== Student Report ==========" << endl;;

    displayAll(n, NameArr, Score);
    cout<< "-------------------------------------" << endl;;

    int topStudentIndex = findTopStudent(n, Score);

    double topTotal =0;
    double topAverage = 0;
    calculateStudent(topStudentIndex, Score, topTotal, topAverage);

    cout << "Top Student: " <<  NameArr[topStudentIndex] << endl;
    cout << "Highest Total Score: " << topTotal << endl;
    // TODO:
    // 1. print the title
    // 2. call displayAll(...)
    // 3. find the top student index
    // 4. call calculateStudent(...) for the top student
    // 5. print the top student's name and total

    return 0;
}

// Calculate total and average for one student
void calculateStudent(int i, double Score[][3], double &total, double &average)
{
    // TODO:
    // 1. calculate the total of the 3 courses for student i
    // 2. calculate the average
    for (int j = 0; j < COURSE_COUNT; j++) {
        total = total + Score[i][j];
    }
    average = total / COURSE_COUNT;
}

// Display all students' information
void displayAll(int n, string NameArr[], double Score[][3])
{

    for (int i = 0; i < n; i++) {
        double total = 0.0;
        double average = 0.0;
        calculateStudent(i, Score, total, average);
        cout << "Name: " << NameArr [i] << "  Grades: ";
        for (int j = 0; j < 3; j++) {
            cout << Score[i][j] << " ";
        }
        cout << "   Total: " << total << "   Average: " << average << endl;
    }
    // TODO:
    // 1. loop through each student
    // 2. call calculateStudent(...) for each student
    // 3. print name, 3 grades, total, and average
    // Hint: do not repeat the total/average logic here
}

// Find the index of the student with the highest total score
int findTopStudent(int n, double Score[][3])
{

    if (n <= 0) return -1;

    int topStudentIndex = 0;
    double highestTotal = -1.0;


    for (int i = 0; i < n; i++) {
        double total = 0.0;
        double average = 0.0;

        calculateStudent(i, Score, total, average);

        if (total > highestTotal) {
            highestTotal = total;
            topStudentIndex = i;
        }
    }

    return topStudentIndex;
}
    // TODO:
    // Hint: reuse calculateStudent(...) instead of recalculating totals here
