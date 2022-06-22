#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//void f00() {}
//
//struct Coord {
//
//	int x;
//	int y;
//	/*bool operator<(Coord &other)
//	{
//		return true;
//	}*/
//};
//bool f01(Coord& a, Coord& b)
//{
//	return a.x < b.x;
//}
//
//class Functor
//{
//public:
//	bool operator()(Coord & a, Coord & b)
//	{
//		return a.x < b.x;
//	}
//	/*template<typename T,typename...Args>
//	T operator()(Args...args)
//	{
//		return T;
//	}*/
//};

struct Fish {
	string name_;
	int old_;
	int size_;
	friend std::ostream& operator<<(std::ostream& out, const Fish& obj)
	{
		out << obj.name_ << ' '<< "age : " << obj.old_<<' '<<"size: " << obj.size_<<'\n';
		return out;
	}
};



int main()
{
	/*vector<Coord> coll{{1,2},{3,2}, {1,32}, {6,8}};
	vector <int> numbers{ 4,54,3,2,2,7,89,3,12,5 };
	void(*p)(void) = f00;
	function<void(void)>functor = f00;
	sort(numbers.begin(), numbers.end());
	Functor func;
	sort(coll.begin(), coll.end(),func);*/
	/////////////////////////////Лямбда выражение[/*Захват контекста*/](/*Аргументы*/) {/*Тело функции*/};
	
	//std::function<bool(const Fish&, const Fish&) > q = lam;//альтернатива

	vector<Fish>pound{ { "Cn",1,2 },{ "Beny",6,9 },{ "Aash",0,2 } };
	auto lSize = [](const Fish& a, const Fish& b)->bool {return a.size_ < b.size_; };
	auto  lAge = [](const Fish& a, const Fish& b)->bool {return a.old_ < b.old_; };
	auto lName = [](Fish& a, Fish& b)->bool {return (int)a.name_[0] < (int)b.name_[0]; };
	for (const auto& Fish : pound)
	{
		std::cout << Fish;
	}	
	std::sort(pound.begin(), pound.end(),lSize);
	std::sort(pound.begin(), pound.end(), lAge);
	std::sort(pound.begin(), pound.end(), lName);
	std::cout << std::endl << std::endl;
	for (const auto& Fish : pound)
	{
		std::cout << Fish;
	}
	return 0;
}