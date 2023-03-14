#include <iostream>
#include <string>
using namespace std;

class Person;
class Dog {
	friend class Person;
private:
	int Health = 100;
};

class Person {
public:
	bool Attack = 0;
	void Damage(Dog d) {
		d.Health -= 20;
		cout << "Health of this Kolobok is " << d.Health << endl;
	}
	void Attacking(Dog d) {
		while (d.Health > 0) {
			cout << "Kolobok is alive" << endl;
			cout << "Choose your way, 1 or 0" << endl;
			cin >> Attack;
			switch (Attack) {
			case 0:
				cout << "Health of Kolobok is " << d.Health << endl;
				cout << "You are good person" << endl;
				break;
			case 1:
				d.Health -= 20;
				cout << "Health of Kolobok is " << d.Health << endl;
				cout << "You are such a bitch" << endl;
				break;
			}
		}
		if (d.Health == 0) {
			cout << "Kolobok is dead" << endl;
		}
	}
};

int main(int argc, const char* argv[]) {

	Dog patron;
	Person bender;
	bender.Attacking(patron);
	
	

	return 0;
}
// мені треба добавити зброю і кількість дмг. а ще картинки