#include <iostream>
#include <vector>
#include <algorithm>

class Sum
{
	int akkumulator;

public:
	Sum():akkumulator{0}
	{
	}

	void operator()(int item)
	{
		akkumulator += item;
	}


	int get_akkumulator() const
	{
		return akkumulator;
	}
};


void print(const int &item)
{
	std::cout << item << std::endl;
}

int main()
{

	
	std::vector<int> v;
	v.reserve(10);
	
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
		//std::cout << "cap " << v.capacity() << std::endl;

		//std::cout << "size " << v.size() << std::endl;
	}

	//for(int i = 0; i < v.size(); ++i)
	//{
	//	std::cout << v[i] << std::endl;
	//}

	//for(auto &item : v)
	//{
	//	item++;
	//}

	//for (int item : v)
	//{
	//	std::cout << item << std::endl;
	//}
	//std::cout << "---------------" << std::endl;
	//int last_value = v.back();
	//std::cout << last_value << std::endl;
	//v.pop_back();
	//std::cout << "---------------" << std::endl;
	//for (int item : v)
	//{
	//	std::cout << item << std::endl;
	//}

	Sum sum;
	int akku = 0;
	
	std::for_each(v.begin(), v.end(), [](int& item) {item *= item; });
	std::for_each(v.begin(), v.end(), print);
	std::for_each(v.begin(), v.end(), [&akku](int& item) {akku += item; });

	
	
	std::cout << akku << std::endl;
}


