#include <iostream>
#include <fstream>
#include <random>

int main() {
    const double Q = 2.0; // MeV (toy value)
    std::mt19937 gen(42);
    std::uniform_real_distribution<> dist(0.0, 1.0);

    std::ofstream out("events.dat");

    for (int i = 0; i < 10000; i++) {
        double x = dist(gen);
        double E1 = x * Q;
        double E2 = (1.0 - x) * Q;
        out << E1 << " " << E2 << " " << (E1 + E2) << "\n";
    }

    out.close();
    return 0;
}
