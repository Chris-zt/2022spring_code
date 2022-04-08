#include"Base.h"
class Human
{
private:
	string name;
	int age;
public:
	Human()
	{
		age = 0;
		cout << "Default constructor crates an instance of Human" << endl;
	}

	Human(string Name)
	{
		name = Name;
		age = 0;
	}

	Human(string Name = "zhaobo", int Age = 20)
		:name(Name), age(Age)
	{
		cout << "Human(string Name, int Age)"
		"\n\t:name(Name), age(Age)" << endl;
	}

	void SetName(string Name)
	{
		name = Name;
	}

	void SetAge(int Age)
	{
		age = Age;
	}

	void IntroduceSelf()
	{
		cout << "I am " << name << endl;
		cout << "I am " << age << "years old ." << endl;
	}
};



int main()
{
	Human chris("zhao tao", 19);
	chris.IntroduceSelf();
	chris.SetAge(30);
	chris.IntroduceSelf();

	system("pause");
	return 0;
}