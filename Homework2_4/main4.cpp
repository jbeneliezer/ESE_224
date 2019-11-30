#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double rand_float(double, double);
double series_reliability(double, int);
double parallel_reliability(double, int);

int main()
{
	// Declare objects.
	unsigned int seed;
	int n = 5000;
	double component_reliability = 0.95, a_series, a_parallel,
		series_success(0), parallel_success(0),
		num1, num2;

	cout << "Enter unsigned integer seed: ";
	cin >> seed;
	srand(seed);
	
	// Compute analytical reliabilities.
	a_parallel = parallel_reliability(component_reliability, 2);
	a_series = series_reliability(component_reliability, 2);

	// Determine simulation reliability estimates.
	for (int k = 1; k <= n; k++)
	{
		num1 = rand_float(0, 1);
		num2 = rand_float(0, 1);
		if ((num1 <= component_reliability) &&
			(num2 <= component_reliability))
		{
			series_success++;
		}
		if ((num1 <= component_reliability) ||
			(num2 <= component_reliability))
		{
			parallel_success++;
		}
	}
	// Print results.
	cout << "Analytical Reliability \n";
	cout << "Series: " << a_series << " "
		<< "Parallel: " << a_parallel << endl;
	cout << "Simulation Reliability " << n << " trials \n";
	cout << "Series: " << (double)series_success / n << " Parallel: "
		<< (double)parallel_success / n << endl;
	system("pause");
	// Exit program.
	return 0;
}

/* This function generates a random */
/* double value between a and b. */
double rand_float(double a, double b)
{
	return ((double)rand() / RAND_MAX) * (b - a) + a;
}

double series_reliability(double indiv_rel, int n) {
	return pow(indiv_rel, n);
}

double parallel_reliability(double indiv_rel, int n) {
	int p = 1;
	while (n > 0) {
		p *= (1 - n);
		n--;
	}
	return 1 - p;
}