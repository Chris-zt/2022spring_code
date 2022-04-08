#include"Base.h"	

template <typename T1 = int, typename T2 = int>  //默认参数
class HoldsPair
{
	private:
		T1 Value1;
		T2 Value2;
	public:
		HoldsPair(const T1& value1, const T2& value2)
		{
			Value1 = value1;
			Value2 = value2;
		}
};

HoldsPair <int, double> pairIntDouble(6, 1.99);
