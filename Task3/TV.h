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
	void NextChannel() //����������� �� ��������� �����(������ ��� ���������� ��������))
	{
		if (on)
		{
			++channel %= CHANNEL_MAX;
		}
	}
	void PrevChannel() //����������� �� ��������� �����(������ ��� ���������� ��������))
	{
		if (on)
		{
			if (channel == 0)
				channel = CHANNEL_MAX - 1;
			else
				channel--;
		}
	}
	void IncVolume() //�������� �������
	{
		if (volume < VOLUME_MAX)
			volume++;
	}
	void DecVolume() //�������� �������
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
	void Print() //��������� ���������� ��� ���� ���������(���� �������� ���������, �������� �������� �����, �������� ����)
	{
		if (on)
			cout << "TV: " << id << "\tChannel: " << channel << "\tVolume: " << volume << endl;
		else
			cout << "TV: " << id << " off" << endl;
	}
};
int TV::tvCounter = 0;