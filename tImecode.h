#pragma once
class TimeCode
{
public:
	//contructors
	TimeCode();
	TimeCode(int hours, int minutes, int seconds, int miliseconds);
	TimeCode(int minutes, int seconds, int miliseconds);
	//actions
	TimeCode Add(TimeCode first, TimeCode second);
	//getters
	int hours();
	int minutes();
	int seconds();
	int miliseconds();
	int totalSeconds();


private:
	int hours_;
	int minutes_;
	int seconds_;
	int miliseconds_;

	void Reduce();

};

