#pragma once
#include "TV.h"
class Remote
{
public:
	void power(TV& tv) //on / off(�������� �� ��������� ������� ���������)
	{
		tv.Power();
	}
	void nextChannel(TV& tv) //����������� �� ��������� ����� ������� ���������(������ ��� ���������� ��������))
	{
		tv.NextChannel();
	}
	void prevChannel(TV& tv) //����������� �� ��������� �����(������ ��� ���������� ��������))
	{
		tv.PrevChannel();
	}
	void incVolume(TV& tv) //�������� �������
	{
		tv++;
	}
	void decVolume(TV& tv) //�������� �������
	{
		tv--;
	}
	void goToChannel(TV& tv, int channel) //����������� �� ����� �� ������� � ������� ��������
	{
		if (channel < tv.CHANNEL_MAX && channel >= 0)
			tv.channel = channel;
	}
};