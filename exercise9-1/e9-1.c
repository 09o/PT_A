#include <stdio.h>

// ����һ���ṹ�壬�����ֱ�Ϊ ʱ���֡��� 
struct time {
	int hour;
	int minutes;
	int seconds;	
};

struct time timeUpdate(int n, struct time now);

int main(void)
{
	int n;
	struct time Time = {0,0,0};									  // ��ʼһ��ʱ��ṹ 
	
	scanf("%d:%d:%d", &Time.hour, &Time.minutes, &Time.seconds);  // ����ʱ�䣬�� : ���ŷָ� 
	scanf("%d", &n);											  // ������Ҫ���ӵ����� 
	Time = timeUpdate(n, Time);
	printf("%.2i:%.2i:%.2i", Time.hour, Time.minutes, Time.seconds);   // �����ʽ�ǳ���Ϊ2��������ʽ 
	return 0;
}

struct time timeUpdate(int n, struct time now)
{
	now.seconds += n;   							// �ٸ���ʱ�����������n�� 
	if (now.seconds / 60 > 0) {						// �����������60����0��˵������������60 
		now.minutes += now.seconds / 60;			// �������пɵõ����ٷ��� -> ��� -> ��ʱ���ܷ����� 
		now.seconds %= 60;							// ȡģ -> ��ʱ�淶������ 
		if (now.minutes / 60 > 0) {					// if True -> ��ʱ����������60 
			now.hour += now.minutes / 60;
			now.minutes %= 60;
			if (now.hour >= 24) {
				now.hour %= 24;
			}
		}
	}
	return now;		// ��������n����ʱ�� 
}
