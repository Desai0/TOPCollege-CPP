#include <iostream>
#include <vector>
//using namespace std;
//
//const int N = 100;
//
//void createCifri(vector<int>& cifri) {
//    for (int i = 2; i <= N; ++i) {
//        cifri[i] = i;
//    }
//    for (int i = 2; i * i <= N; ++i) {
//        if (cifri[i] != 0) {
//            for (int j = i * i; j <= N; j += i) {
//                cifri[j] = 0;
//            }
//        }
//    }
//}
//
//bool isPrime(const vector<int>& cifri, int a) {
//    if (a < 2 || a > N) return false;
//    return cifri[a] != 0;
//}
//
//int main() {
//    setlocale(0, "");
//    vector<int> cifri(N + 1, 0);
//    createCifri(cifri);
//
//    int a;
//    cout << "¬ведите число дл€ проверки на простоту: ";
//    cin >> a;
//
//    if (isPrime(cifri, a)) {
//        cout << "„исло " << a << " простое." << endl;
//    }
//    else {
//        cout << "„исло " << a << " не простое." << endl;
//    }
//
//    return 0;
//}

int binomialCoefficient(int n, int k) {
    if (k > n) {
        return 0;
    }
    if (k == 0 || k == n) {
        return 1;
    }

    int result = 1;
    for (int i = 1; i <= k; ++i) {
        result = result * (n - i + 1) / i;
    }
    return result;
}

int main() {
    setlocale(0, "");
    int n, k;
    std::cout << "¬ведите n и k дл€ вычислени€ C(n, k): ";
    std::cin >> n >> k;

    int result = binomialCoefficient(n, k);
    std::cout << "C(" << n << ", " << k << ") = " << result << std::endl;

    return 0;
}