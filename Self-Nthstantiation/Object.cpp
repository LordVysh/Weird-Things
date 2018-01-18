#include <iostream>
#include <vector>
using namespace std;
class uh_oh
{
       	int m;
	vector<intptr_t> address;
public:
	uh_oh(int n)
	{
		m = n;
		if (n != 0)
		{
			uh_oh *whoops = new uh_oh(n-1);
			cout << "Output from self-instantiation: " << whoops->which_n() << '\n';
			library(intptr_t(whoops));
		}
		get_library();
	}
	
	int which_n()
	{
		return m;
	}
	
	intptr_t library(intptr_t i)
	{
		address.push_back(i);
	}
	
	void get_library()
	{
		for (auto& i : address)
		{
			cout << i << '\n';
		}
	}
};

int main()
{
	uh_oh *catastrophe = new uh_oh(10);
	cout << catastrophe->which_n() << '\n';
		    
	return 0;
}

