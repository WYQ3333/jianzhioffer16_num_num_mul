#include<iostream>
using namespace std;


class Solution {
public:
	double Power(double base, int exponent) {
		int i = exponent;
		double result = base;
		while (i){
			result *= base;
			--i;
		}
		return base;
	}
};

void TestFunc(){
	Solution s;
	double result = s.Power(2.22, 4);
	cout << "2.22的4次方为：" << result << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}
