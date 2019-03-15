#ifndef PUZZLE_TIMER
#define PUZZLE_TIMER

#include <sys/time.h>

class Timer{

public:
	Timer(){}
	void StartTimer()
	{	
		startTime = (double)clock()/CLOCKS_PER_SEC;
	}
	double GetElapsedTime()	// Returns the time in seconds
	{
		double currentTime = (double)clock()/CLOCKS_PER_SEC;
		return currentTime - startTime;
	}
private:
	double startTime;
};

#endif
