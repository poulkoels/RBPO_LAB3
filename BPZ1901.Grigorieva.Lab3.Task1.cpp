module BPZ1901.Grigorieva.Task1;


namespace RBPO {
    namespace Lab3 {
        namespace Task1 {
            double f1(double x) {
                return 1 - 0.25 * (pow(sin(2 * x), 2) + cos(2 * x);
            }

            double f2(double x) {
                return (x <= 9) ? (cos(2 * x) + 9 : (cos(x) / (x - 9) * -1));
            }

            double a(int i) {
                return (pow(-1.0, i) * (i + 1 / (pow(3, i) + pow(2, i)));
            }

            double f3(int n) {
                double acc = 0.0;
                for (int i = 0; i <= n; i++) {
                    acc += a(i);
                }
                return acc;
            }

            double f4(double eps) {
                double prev = a(0);
                double curr = a(1);
                double acc = prev + curr;
                for (int i = 2; abs(prev - curr) > eps; i++) {
                    prev = curr;
                    curr = a(i);
                    acc += curr;
                }
                return acc;
            }
        }
    }
}