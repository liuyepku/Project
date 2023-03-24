#include<iostream>
using namespace std;

// calculate the pi value using Monte Carlo method
double pi(long long n)
{
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1)
            count++;
    }
    return 4.0 * count / n;
}

int main()
{
    long long n = 10000000000;
    cout << "Pi value is " << pi(n);
    return 0;
}