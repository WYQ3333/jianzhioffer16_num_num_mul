#include<iostream>
using namespace std;


class Solution {
public:
	double Power(double base, int exponent) {
		int i = exponent;
		double result = base;
		while (i-1){
			result *= base;
			--i;
		}
		return result;
	}
};

void TestFunc1(){
	Solution s;
	double result = s.Power(2.22, 4);
	cout << "2.22的4次方为：" << result << endl;
}

class Solution2 {
public:
	double Power(double base, int exponent) {
		if (exponent == 0){
			return 1.0;
		}
		if (base == 0.0){
			return 0.0;
		}
		if (exponent < 0 && base == 0.0){
			return 0.0;
		}
		if (base != 0.0){
			int i = exponent;
			double result = base;
			while (i-1){
				result *= base;
				--i;
			}
			return result;
		}
	}
};

void TestFunc2(){
	Solution2 s;
	double result = s.Power(0, 3);
	cout << "2.22的4次方为：" << result << endl;
}

class Solution3 {
public:
	double Power(double base, int exponent) {
		if (exponent == 0){
			return 1;
		}
		else if (exponent > 0){
			if (base == 0.0){
				return 0;
			}
			if (base == 1){
				return 1;
			}
			if (base != 0 && base != 1){
				double result = base;
				int i = exponent;
				while (i - 1){
					result *= base;
					--i;
				}
				return result;
			}
		}
		else if (exponent < 0){
			if (base == 0.0){
				return 0;
			}
			if (base == 1){
				return 1;
			}
			if (base != 0 && base != 1){
				double temp = 1 / base;
				double result = temp;
				int i = exponent;
				while (i - 1){
					result *= temp;
					++i;
				}
				return result;
			}
		}
	}
};

void TestFunc3(){
	Solution3 s;
	double result = s.Power(2, -3);
	cout << "2.22的4次方为：" << result << endl;
}

int main(){
	/*TestFunc1();
	TestFunc2();*/
	TestFunc3();
	system("pause");
	return 0;
}
