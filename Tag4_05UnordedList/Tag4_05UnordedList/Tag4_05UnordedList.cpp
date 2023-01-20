#include <iostream>
#include <unordered_set>


struct schwein
{
	std::string name;
	int gewicht;


	friend std::ostream& operator<<(std::ostream& os, const schwein& obj)
	{
		return os
			<< "name: " << obj.name
			<< " gewicht: " << obj.gewicht;
	}


	
};
class PigEqual {
public:
	bool operator()(const schwein& s1, const schwein& s2) const {
		return s1.name == s2.name && s1.gewicht == s2.gewicht;
	}
};

class PigHash {
public:
	size_t operator()(const schwein& s) const {

		return std::hash<int>()(s.gewicht) + std::hash<std::string>()(s.name);
	}
};

int main()
{
    std::unordered_set<std::string> stringSet;

	stringSet.insert("vier");
	stringSet.insert("eins");
	stringSet.insert("zwei");
	stringSet.insert("drei");
	stringSet.insert("eins");
	

	for (auto& s : stringSet)
	{
		std::cout << s << std::endl;

	}

	std::unordered_set<schwein, PigHash, PigEqual> schweinSet;

	schweinSet.insert(schwein{ "piggy", 10 });
	schweinSet.insert(schwein{ "babe", 10 });
	schweinSet.insert(schwein{ "piggy", 10 });
	schweinSet.insert(schwein{ "rudi", 15 });
	schweinSet.insert(schwein{ "noch ein schwein", 10 });

	for (auto& s : schweinSet)
	{
		std::cout << s << std::endl;

	}
}
