#include<iostream>
#include<ctime>
using namespace std;

class Dog {
private:int score = 0;
public:
	char name[10];
	int birthyear;
	int set score(mts) {
		score += s;
	}
	void bark()
	{
		cout << "Bark!";
	}
	int cal Age()
	{
		time_t now = time(0);
		tm*mytime = localtime(&now);
		return my time->tm_year_birthyear;
	}
	int get score() {
		return score;
	}
};
int main()
 Dog myDog;
cin >> mydog.name;
cin >> mydog.birthyear;
int bark, score, commund;

do {
	cin >> bark >> score >> commund;
	if (bark) {
		mydog.bark();
	}
	if (score) {
		mydog.set score(score);
	}
	while (commund != 1);
	cout << mydog.name << endl;
	cout << mydog.cal Age() << endl;
	cout << mydog.set score();
	return 0;
}


