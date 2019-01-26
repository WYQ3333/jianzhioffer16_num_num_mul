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
		if (exponent < 0 && base == 0){
			return 0.0;
		}
		if (base != 0){
			int i = exponent;
			double result = base;
			while (i-1){
				result *= base;
			}
			return result;
		}
	}
};

void TestFunc2(){
	Solution2 s;
	double result = s.Power(2.22, 4);
	cout << "2.22的4次方为：" << result << endl;
}


int main(){
	TestFunc1();
	TestFunc2();
	system("pause");
	return 0;
}
