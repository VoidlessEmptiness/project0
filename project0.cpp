#include <iostream>
#include <string>
using namespace std;

int Damage, bruh;
enum Weapon { Bare = 0, Knife, Glock, Deagle, M4A1 };
class Person;
class Dog {
	friend class Person;
private:
	int Health = 100;
};

class Person {
public:
	void Attacking(Dog d) {
		while (d.Health > 0) {
			cout << "Kolobok is alive" << endl;
			cout << "Choose your weapon from 0 to 4" << endl;
			cin >> bruh;
			switch (bruh) {
			case 0:
				d.Health -= 20;
				cout << "You are fighting with bare hands or what" << endl;
				cout << "Health of Kolobok is " << d.Health << endl;
				break;
			case 1:
				d.Health -= 40;
				cout << "You stabed him with knife" << endl;
				cout << "Health of Kolobok is " << d.Health << endl;
				break;
			case 2:
				d.Health -= 50;
				cout << "Youve shot with Glock" << endl;
				cout << "Health of Kolobok is " << d.Health << endl;
				break;
			case 3:
				d.Health -= 60;
				cout << "Youve shot with Deagle" << endl;
				cout << "Health of Kolobok is " << d.Health << endl;
				break;
			case 4:
				d.Health -= 100;
				cout << "You shot with M4A1" << endl;
				cout << "Health of Kolobok is " << d.Health << endl;
				break;
			}
		}
		if (d.Health == 0 || d.Health < 0)
			cout << "Kolobok is dead" << endl;
	}
};



int main(int argc, const char* argv[]) {

	Dog patron;
	Person bender;
	bender.Attacking(patron);



	return 0;
}
