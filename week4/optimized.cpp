#include <iostream>
#include <iomanip>
#include <chrono>

double calculate(long long iterations, double param1, double param2) {
    double result = 1.0;
    for (long long i = 1; i <= iterations; ++i) {
        double j = i * param1 - param2;
        result -= (1.0 / j);
        j = i * param1 + param2;
        result += (1.0 / j);
    }
    return result;
}

int main() {
    using namespace std::chrono;
    
    auto start_time = high_resolution_clock::now();
    double result = calculate(100000000, 4, 1) * 4;
    auto end_time = high_resolution_clock::now();
    
    auto execution_time = duration_cast<duration<double>>(end_time - start_time).count();

    std::cout << "Result: " << std::fixed << std::setprecision(12) << result << std::endl;
    std::cout << "Execution Time: " << std::fixed << std::setprecision(6) << execution_time << " seconds" << std::endl;

    return 0;
}
