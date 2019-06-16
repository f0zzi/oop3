#pragma once
#include <iostream>
using namespace std;

class TV
{
private:
	friend class Remote;
	bool on;
	int volume;
	int channel;
	const int VOLUME_MAX;
	const int CHANNEL_MAX;
	int id;
	static int tvCounter;
public:
	TV():TV(0, 20, 1, 100, 100){}
	TV(bool on, int volume, int channel,int volume_max, int channel_max):
		on(on), volume(volume), channel(channel), VOLUME_MAX(volume_max), CHANNEL_MAX(channel_max)
	{
		id = ++tvCounter;
	}

	void Power()
	{
		on = !on;
	}
	void NextChannel() //перемикання на наступний канал(працює при увімкненому телевізорі))
	{
		if (on)
		{
			++channel %= CHANNEL_MAX;
		}
	}
	void PrevChannel() //перемикання на попередній канал(працює при увімкненому телевізорі))
	{
		if (on)
		{
			if (channel == 0)
				channel = CHANNEL_MAX - 1;
			else
				channel--;
		}
	}
	void IncVolume() //збільшити гучність
	{
		if (volume < VOLUME_MAX)
			volume++;
	}
	void DecVolume() //зменшити гучність
	{
		if (volume > 0)
			volume--;
	}
	TV operator++(int)
	{
		IncVolume();
	}
	TV operator--(int)
	{
		DecVolume();
	}
	void Print() //виведення інформації про стан телевізора(якщо телевізор увімкнений, виводити поточний канал, поточний звук)
	{
		if (on)
			cout << "TV: " << id << "\tChannel: " << channel << "\tVolume: " << volume << endl;
		else
			cout << "TV: " << id << " off" << endl;
	}
};
int TV::tvCounter = 0;