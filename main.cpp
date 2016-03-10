#include <time.h>
#include <chrono>
#include <iostream>
#include <iomanip>
#include <string>
#include "Fibonacci.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::microseconds;

int main() {
    cout << "Welcome to Fibonacci Performance Benchmark!" << endl;
    cout << "The following algorithms will be measured when implementing Fibonacci:" << endl;
    cout << "'Iteration', 'tail-recursion', ";
    cout << "'single recursion' and 'double recursion'" << endl << endl;

    int n = 10;
    string measuring = "we will measure n = ";
    string iterativeMeasure = "Iterative factorial took ";
    string singleMeasure = "Single recursive factorial took ";
    string tailMeasure = "Tail recursive factorial took ";
    string doubleMeasure = "Double recursive factorial took ";
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    auto timeAlloted = duration_cast<microseconds>(t2 - t1).count();

    cout << "We will measure for different values of n finding the factorial of each." << endl;

    /* n = 10 */

    cout << endl << "First, " << measuring << n << ":" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    singleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << singleMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    tailRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << tailMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    doubleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << doubleMeasure << timeAlloted << " microseconds" << endl;

    /* n = 20 */
    n = 20;
    cout << endl << "Next, " << measuring << n << ":" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    singleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << singleMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    tailRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << tailMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    doubleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << doubleMeasure << timeAlloted << " microseconds" << endl;

    /* n = 30 */
    n = 30;
    cout << endl << "Next, " << measuring << n << ":" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    singleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << singleMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    tailRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << tailMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    doubleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << doubleMeasure << timeAlloted << " microseconds" << endl;

    /* n = 40 */
    n = 40;
    cout << endl << "Next, " << measuring << n << ":" << endl;
    cout << "At this point, since double recursive takes two long, ";
    cout << "we will only measure the other three" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    singleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << singleMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    tailRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << tailMeasure << timeAlloted << " microseconds" << endl;

    /* n = 100 */
    n = 100;
    cout << endl << "Next, " << measuring << n << ":" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    singleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << singleMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    tailRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << tailMeasure << timeAlloted << " microseconds" << endl;

    /* n = 1000 */
    n = 1000;
    cout << endl << "Next, " << measuring << n << ":" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    singleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << singleMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    tailRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << tailMeasure << timeAlloted << " microseconds" << endl;

    /* n = 10000 */
    n = 10000;
    cout << endl << "Next, " << measuring << n << ":" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    singleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << singleMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    tailRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << tailMeasure << timeAlloted << " microseconds" << endl;

    /* n = 100000 */
    n = 100000;
    cout << endl << "Next, " << measuring << n << ":" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    singleRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << singleMeasure << timeAlloted << " microseconds" << endl;

    t1 = high_resolution_clock::now();
    tailRecursiveFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << tailMeasure << timeAlloted << " microseconds" << endl;

    /* n = 1000000 */
    n = 1000000;
    cout << endl << "Next, " << measuring << n << ":" << endl;
    cout << "At this point, recursive implementations segfault due to stack overflow, ";
    cout << "so we will now only measure iterative factorial" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    /* n = 10000000 */
    n = 10000000;
    cout << endl << "Next, " << measuring << n << ":" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    /* n = 100000000 */
    n = 100000000;
    cout << endl << "Next, " << measuring << n << ":" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    /* n = 1000000000 */
    n = 1000000000;
    cout << endl << "Last, " << measuring << n << ":" << endl;

    t1 = high_resolution_clock::now();
    iterativeFactorial(n);
    t2 = high_resolution_clock::now();
    timeAlloted = duration_cast<microseconds>(t2 - t1).count();
    cout << iterativeMeasure << timeAlloted << " microseconds" << endl;

    return 0;
}
