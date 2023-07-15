#include <iostream>
#include "CommonHeaders.h"

using namespace std;

int main()
{
    const int numberOfTasks = 20;

    for (int i = 1; i <= numberOfTasks; ++i)
    {
        TestTask(i);
    }

    cout << "End program" << endl;
    return EXIT_SUCCESS;
}

void (*testTaskFunctions[])() = {
    nullptr,    // Index 0, not used
    TestTask1,  // Index 1
    TestTask2,  // Index 2
    TestTask3,  // Index 3
    TestTask4,  // Index 4
    TestTask5,  // Index 5
    TestTask6,  // Index 6
    TestTask7,  // Index 7
    TestTask8,  // Index 8
    TestTask9,  // Index 9
    TestTask10, // Index 10
    TestTask11, // Index 11
    TestTask12, // Index 12
    TestTask13, // Index 13
    TestTask14, // Index 14
    TestTask15, // Index 15
    TestTask16, // Index 16
    TestTask17, // Index 17
    TestTask18, // Index 18
    TestTask19, // Index 19
    TestTask20  // Index 20
};

void TestTask(int taskNumber)
{
    if (taskNumber > 0 && taskNumber <= 20)
    {
        if (testTaskFunctions[taskNumber] != nullptr)
        {
            testTaskFunctions[taskNumber]();
        }
        else
        {
            cout << "TestTask" << taskNumber << " is not implemented." << endl;
        }
    }
    else
    {
        cout << "Invalid task number!" << endl;
    }
}

void TestTask1()
{
    // Implementation for TestTask1
    std::cout << "Executing TestTask1" << std::endl;
    int addNum = add(5, 6);
    cout << addNum << endl;
}

void TestTask2()
{
    // Implementation for TestTask2
    std::cout << "Executing TestTask2" << std::endl;

    int x = 5;
    double y = 3.14;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
}

void TestTask3()
{
    // Implementation for TestTask3
    std::cout << "Executing TestTask3" << std::endl;

    Point2D<int> point1(2, 3);
    point1.printCoordinates(); // Output: Point Coordinates: (2, 3)

    Point2D<double> point2(1.5, 4.2);
    point2.printCoordinates(); // Output: Point Coordinates: (1.5, 4.2)

    double distance = point1.distanceTo(point2);
    std::cout << "Distance: " << distance << std::endl;
}

void TestTask4()
{
    // Implementation for TestTask4
    std::cout << "Executing TestTask4" << std::endl;
    int intArray[] = {5, 8, 2, 10, 3};
    int intSize = sizeof(intArray) / sizeof(int);
    int maxInt = findLarger(intArray, intSize);
    std::cout << "Max integer: " << maxInt << std::endl;

    double doubleArray[] = {3.14, 2.71, 1.618, 2.5};
    int doubleSize = sizeof(doubleArray) / sizeof(double);
    double maxDouble = findLarger(doubleArray, doubleSize);
    std::cout << "Max double: " << maxDouble << std::endl;

    std::string stringArray[] = {"apple", "banana", "orange", "grape"};
    int stringSize = sizeof(stringArray) / sizeof(std::string);
    std::string maxString = findLarger(stringArray, stringSize);
    std::cout << "Max string: " << maxString << std::endl;
}

void TestTask5()
{
    // Implementation for TestTask5
    std::cout << "Executing TestTask5" << std::endl;
}

void TestTask6()
{
    // Implementation for TestTask6
    std::cout << "Executing TestTask6" << std::endl;
}

void TestTask7()
{
    // Implementation for TestTask7
    std::cout << "Executing TestTask7" << std::endl;
}

void TestTask8()
{
    // Implementation for TestTask8
    std::cout << "Executing TestTask8" << std::endl;
}

void TestTask9()
{
    // Implementation for TestTask9
    std::cout << "Executing TestTask9" << std::endl;
}

void TestTask10()
{
    // Implementation for TestTask10
    std::cout << "Executing TestTask10" << std::endl;
}

void TestTask11()
{
    // Implementation for TestTask11
    std::cout << "Executing TestTask11" << std::endl;
}

void TestTask12()
{
    // Implementation for TestTask12
    std::cout << "Executing TestTask12" << std::endl;
}

void TestTask13()
{
    // Implementation for TestTask13
    std::cout << "Executing TestTask13" << std::endl;
}

void TestTask14()
{
    // Implementation for TestTask14
    std::cout << "Executing TestTask14" << std::endl;
}

void TestTask15()
{
    // Implementation for TestTask15
    std::cout << "Executing TestTask15" << std::endl;
}

void TestTask16()
{
    // Implementation for TestTask16
    std::cout << "Executing TestTask16" << std::endl;
}

void TestTask17()
{
    // Implementation for TestTask17
    std::cout << "Executing TestTask17" << std::endl;
}

void TestTask18()
{
    // Implementation for TestTask18
    std::cout << "Executing TestTask18" << std::endl;
}

void TestTask19()
{
    // Implementation for TestTask19
    std::cout << "Executing TestTask19" << std::endl;
}

void TestTask20()
{
    // Implementation for TestTask20
    std::cout << "Executing TestTask20" << std::endl;
}