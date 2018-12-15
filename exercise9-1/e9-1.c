#include <stdio.h>

// 定义一个结构体，变量分别为 时、分、秒 
struct time {
	int hour;
	int minutes;
	int seconds;	
};

struct time timeUpdate(int n, struct time now);

int main(void)
{
	int n;
	struct time Time = {0,0,0};									  // 初始一个时间结构 
	
	scanf("%d:%d:%d", &Time.hour, &Time.minutes, &Time.seconds);  // 输入时间，以 : 符号分隔 
	scanf("%d", &n);											  // 输入所要增加的秒数 
	Time = timeUpdate(n, Time);
	printf("%.2i:%.2i:%.2i", Time.hour, Time.minutes, Time.seconds);   // 输出格式是长度为2的整数形式 
	return 0;
}

struct time timeUpdate(int n, struct time now)
{
	now.seconds += n;   							// 再给定时间基础上增加n秒 
	if (now.seconds / 60 > 0) {						// 如果秒数整除60大于0，说明秒数大于了60 
		now.minutes += now.seconds / 60;			// 总秒数中可得到多少分钟 -> 相加 -> 此时的总分钟数 
		now.seconds %= 60;							// 取模 -> 此时规范的秒数 
		if (now.minutes / 60 > 0) {					// if True -> 此时分钟数超过60 
			now.hour += now.minutes / 60;
			now.minutes %= 60;
			if (now.hour >= 24) {
				now.hour %= 24;
			}
		}
	}
	return now;		// 返回增加n秒后的时间 
}
