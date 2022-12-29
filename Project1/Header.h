#pragma once
#include <string>
#include <iostream>
using namespace std;

class Players
{
private:
	double distance;
	double jump;
	string name;
public:
	Players()
	{
		distance = jump = 0;
		name = "name: ";
	}
	Players(double d, double j)
	{
		distance = d;
		jump = j;
	}
	virtual void Show()
	{
		cout << "������������ ���������: " << distance << " ����������\n";
		cout << "������������ ������ : " << jump << " ������\n";
	}
	virtual void Init()
	{
		cout << "������������ ���������: ";
		cin >> distance;
		cout << "������������ ������ : ";
		cin >> jump;
	}
	virtual void SetName(const char* n)
	{
		name = n;
	}
	virtual string GetName()
	{
		return name;
	}
	virtual void SetDistance(double d)
	{
		distance = d;
	}
	virtual double GetDistance()
	{
		return distance;
	}
	virtual void SetJump(double j)
	{
		jump = j;
	}
	virtual double GetJump()
	{
		return jump;
	}
};

class Human : public Players
{
public:
	Human() :Players()
	{

	}
	Human(double d, double j) : Players(d, j)
	{
		Players::SetName("�������");
	}
	void Init()
	{
		Players::SetName("�������");
		cout << "����� - " << Players::GetName() << endl;
		Players::Init();
	}
	void Show()
	{
		cout << "����� - " << Players::GetName() << endl;
		Players::Show();
	}
	void SetJump(double j)
	{
		Players::SetJump(j);
	}
	void SetDistance(double d)
	{
		Players::SetDistance(d);
	}
	double GetJump()
	{
		return Players::GetJump();
	}
	double GetDistance()
	{
		return Players::GetDistance();
	}
	string GetName()
	{
		return Players::GetName();
	}
};

class Cat : public Players
{
public:
	Cat() :Players()
	{

	}
	Cat(double d, double j) : Players(d, j)
	{
		Players::SetName("���");
	}
	void Init()
	{
		Players::SetName("���");
		cout << "����� - " << Players::GetName() << endl;
		Players::Init();
	}
	void Show()
	{
		cout << "����� -  " << Players::GetName() << endl;
		Players::Show();
	}
	void SetJump(double j)
	{
		Players::SetJump(j);
	}
	void SetDistance(double d)
	{
		Players::SetDistance(d);
	}
	double GetJump()
	{
		return Players::GetJump();
	}
	double GetDistance()
	{
		return Players::GetDistance();
	}
	string GetName()
	{
		return Players::GetName();
	}
};

class Robot : public Players
{
public:
	Robot() :Players()
	{

	}
	Robot(double d, double j) : Players(d, j)
	{
		Players::SetName("�����");
	}
	void Init()
	{
		Players::SetName("�����");
		cout << "����� - " << Players::GetName() << endl;
		Players::Init();
	}
	void Show()
	{
		cout << "����� -  " << Players::GetName() << endl;
		Players::Show();
	}
	void SetJump(double j)
	{
		Players::SetJump(j);
	}
	void SetDistance(double d)
	{
		Players::SetDistance(d);
	}
	double GetJump()
	{
		return Players::GetJump();
	}
	double GetDistance()
	{
		return Players::GetDistance();
	}
	string GetName()
	{
		return Players::GetName();
	}
};





class Competition
{
private:
	string type;
public:
	Competition()
	{
		type = "���:";
	}
	virtual void SetCompetiton(const char* t)
	{
		type = t;
	}
	virtual double GetCompetition()
	{
		return 0;
	}
	string TypeCompetition()
	{
		return type;
	}
};

class Wall : public Competition
{
private:
	double jump;
public:
	Wall()
	{
		jump = 0;
	}
	Wall(double d)
	{
		Competition::SetCompetiton("�����");
		jump = d;
	}
	void SetCompetiton(double j)
	{
		jump = j;
	}
	double GetCompetition()
	{
		return jump;
	}
};

class Run : public Competition
{
private:
	double distance;
public:
	Run()
	{
		distance = 0;
	}
	Run(double d)
	{
		Competition::SetCompetiton("���� ������");
		distance = d;
	}
	void SetCompetiton(double d)
	{
		distance = d;
	}
	double GetCompetition()
	{
		return distance;
	}
};