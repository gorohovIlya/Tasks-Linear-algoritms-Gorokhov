int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) f *= i;
    return f;
}

double sum(double x, double m) {
    double o = 0;
    for (int i = 0; i <= m; i++) o += fact(m) / (fact(i) * fact(m - i)) * pow(x, i);
    return o;
}

void main() {
    std::cout << sum(3, 2);
}
