
#include <iostream>
#include <string>

struct Bag
{
	std::string books[];
};

struct Student
{
	int Age = 0;
	int Height = 0;
	std::string Name = 0;
	Bag* myBag = nullptr;
	void GetInfo()
	{
		std::cout << "student struc";
	}
};

int main()
{
	Student* ptr = new Student{ 10, 160, "Paul" };
	ptr->GetInfo();

}