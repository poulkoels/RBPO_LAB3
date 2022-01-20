
module BPZ1901.Grigorieva.Task2;
import <cmath>


namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
            double f1(double x) {
                return 1-0.25*(pow(sin(2*x),2)+cos(2*x);
            }

            double f2(double x) {
                if (x <= 9) return (cos(2*x)+9);
                else return (cos(x)/ (x-9)*-1);
            }

            double a(int i) {
                return (pow(-1.0, i) * (i+1 / (pow(3,i)+pow(2,i)));
            }

            double f3(int n) {
                double acc = 0.0;
                int i = 0;
                while (i <= n) {
                    acc += a(i);
                    i++;
                }
                return acc;
            }

            double f4(double eps) {
                double prev = a(0);
                double curr = a(1);
                double acc = prev + curr;
                int i = 2;
                while (abs(prev - curr) > eps) {
                    prev = curr;
                    curr = a(i);
                    i++;
                    acc += curr;
                }
                return acc;
            }
		}
	}
}
