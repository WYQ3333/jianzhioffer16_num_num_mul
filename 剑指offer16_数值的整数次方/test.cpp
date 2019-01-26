#include<iostream>
using namespace std;


class Solution1 {
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
	Solution1 s;
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
	double result = s.Power(2, -3);
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
				double temp = base;
				double result = temp;
				int i = 0-exponent;
				while (i - 1){
					result *= temp;
					--i;
				}
				return 1/result;
			}
		}
	}
};

//牛客网中如果所有的返回值在条件语句中，则会报错，所以应该想方法将返回值设置在条件语句外面

class Solution {
public:
	double Power(double base, int exponent) {
		if (exponent>0)
		{
			if (exponent == 1)
				return base;
			if (exponent % 2 == 0)
				return Power(base, exponent / 2)*Power(base, exponent / 2);
			else
				return Power(base, exponent / 2)*Power(base, exponent / 2 + 1);
		}
		else if (exponent == 0)
		{
			return 1;
		}
		else
		{
			return 1 / Power(base, 0 - exponent);
		}
	}
};

void TestFunc(){
	Solution s;
	double result = s.Power(2, 4);
	cout << "2.22的4次方为：" << result << endl;
}
void TestFunc3(){
	Solution3 s;
	double result = s.Power(2, 4);
	cout << "2.22的4次方为：" << result << endl;
}

int main(){
	/*TestFunc1();
	TestFunc2();*/
	TestFunc3();
	TestFunc();
	system("pause");
	return 0;
}
