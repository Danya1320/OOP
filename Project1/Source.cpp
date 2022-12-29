#include "Header.h"

int main()
{
	setlocale(LC_ALL, "ru");
	Players** arr = new Players * [3];
	arr[0] = new Human(200, 1.4);
	arr[1] = new Cat(40, 2.8);
	arr[2] = new Robot(30, 0.5);
	Competition** arr1 = new Competition * [4];
	arr1[0] = new Run(30);
	arr1[1] = new Wall(2);
	arr1[2] = new Run(40);
	arr1[3] = new Wall(2);
	for (int i = 0; i < 3; i++)
	{
		int score = 0;
		bool fail = false;
		for (int j = 0; j < 4; j++)
		{
			if (arr1[j]->TypeCompetition() == "Стена")
			{
				if (arr[i]->GetJump() >= arr1[j]->GetCompetition())
					continue;
				else
					fail = true;
			}
			else
			{
				score += arr1[j]->GetCompetition();
				if (arr[i]->GetDistance() >= score)
					continue;
				else
					fail = true;
			}
			if (fail)
			{
				cout << "Игрок " << arr[i]->GetName() << " Не прошел испытание  " << arr1[j]->TypeCompetition() << " испытание № " << j + 1 << ")\n";
				if (arr1[j]->TypeCompetition() == "Стена")
				{
					cout << "Игрок " << arr[i]->GetName() << " может прыгнуть высоту " << arr[i]->GetJump() << " метров а стена высотой " << arr1[j]->GetCompetition()
						<< " метров\n\n";
				}
				else
				{
					cout << "Игрок" << arr[i]->GetName() << " может пробежать  " << arr[i]->GetDistance() << "километров а общая дистанция  " << score
						<< " километров\n\n";
				}
			}
		}
		if (!fail)
			cout << "Игрок " << arr[i]->GetName() << " Все прошел\n\n";
	}
}