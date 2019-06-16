#pragma once
#include "TV.h"
class Remote
{
public:
	void power(TV& tv) //on / off(вмикання чи вимикання певного телевізору)
	{
		tv.Power();
	}
	void nextChannel(TV& tv) //перемикання на наступний канал певного телевізору(працює при увімкненому телевізорі))
	{
		tv.NextChannel();
	}
	void prevChannel(TV& tv) //перемикання на попередній канал(працює при увімкненому телевізорі))
	{
		tv.PrevChannel();
	}
	void incVolume(TV& tv) //збільшити гучність
	{
		tv++;
	}
	void decVolume(TV& tv) //зменшити гучність
	{
		tv--;
	}
	void goToChannel(TV& tv, int channel) //перемикання на канал за номером у певному телевізорі
	{
		if (channel < tv.CHANNEL_MAX && channel >= 0)
			tv.channel = channel;
	}
};