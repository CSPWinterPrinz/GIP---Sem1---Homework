#include <iostream>
using namespace std;

struct Point
{
    int x; // It is Considered as Default Arguments and no Error is Raised
    int y;
    string Name;
};

int main()
{
    struct Point p1;
    struct Point p3;
    p3.x = -1;
    p3.y = 2;
    p3.Name = "Erster Punkt";
    struct Point p2;

    // Accessing members of point p1
    // No value is Initialized then the default value is considered. ie x=0 and y=1;
    cout << "x = " << p3.x << ", y = " << p3.y << endl; //
    cout << p3.Name << " " << p3.x << " " << p3.y;
    // Initializing the value of y = 20;
    p1.y = 20;
    cout << "x = " << p1.x << ", y = " << p1.y;
    return 0;
}
// This code is contributed by Samyak Jain