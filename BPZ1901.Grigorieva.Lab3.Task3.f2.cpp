module BPZ1901.Grigorieva.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f2(double x) {
				if (x <= 9) return (cos(2 * x) + 9);
				else return (cos(x) / (x - 9) * -1);
			}
		}
	}
}