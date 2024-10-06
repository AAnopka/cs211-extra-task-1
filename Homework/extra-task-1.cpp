#include "extra-task-1.h"

double seconds_difference(double time_1, double time_2)
{
	// your implementation goes here...
	return time_2 - time_1;
	/*
		Return the number of seconds later that a time in seconds
		time_2 is than a time in seconds time_1.
	*/
}

double hours_difference(double time_1, double time_2)
{
	return seconds_difference(time_1, time_2) / 3600;
	/*
		Return the number of hours later that a time in seconds
		time_2 is than a time in seconds time_1.
	*/
}

double to_float_hours(int hours, int minutes, int seconds)
{
	return static_cast<double>(hours) + minutes / static_cast<double>(60) + seconds / static_cast<double>(3600);
	/*
		Return the total number of hours in the specified number
		of hours, minutes, and seconds.

		Precondition: 0 <= minutes < 60  and  0 <= seconds < 60
	*/
}

double to_24_hour_clock(double hours)
{
	return (hours - (int)hours) + ((int)hours % 24);
	/*
		hours is a number of hours since midnight. Return the
		hour as seen on a 24-hour clock.

		Precondition: hours >= 0


		You may wish to inspect various function in <cmath> to work
		with integer and fractional part of a hours separately.

	*/
}

int get_hours(int seconds) {
	return to_24_hour_clock(seconds / 3600);
}
int get_minutes(int seconds) {
	return (seconds / 60) % 60;
}
int get_seconds(int seconds) {
	return seconds & 60;
}

/*
	Implement three functions
		* get_hours
		* get_minutes
		* get_seconds
	They are used to determine the hours part, minutes part and seconds part
	of a time in seconds. E.g.:

	>>> get_hours(3800)
	1

	>>> get_minutes(3800)
	3

	>>> get_seconds(3800)
	20

	In other words, if 3800 seconds have elapsed since midnight,
	it is currently 01:03:20 (hh:mm:ss).
*/

double time_to_utc(int utc_offset, double time)
{
	if (utc_offset > time)
		return (time - (int)time) + (24 + (((int)time - utc_offset) % 24));
	else
		return (time - (int)time) + ((int)time - utc_offset) % 24;
	/*
		Return time at UTC+0, where utc_offset is the number of hours away from
		UTC+0.
		You may be interested in:
		https://en.wikipedia.org/wiki/Coordinated_Universal_Time
		*/
}

double time_from_utc(int utc_offset, double time)
{
	if (-utc_offset > time)
		return (time - (int)time) + ((24 + ((int)time + utc_offset)) % 24);
	else
		return (time - (int)time) + (((int)time + utc_offset) % 24);
	/*
		Return UTC time in time zone utc_offset.
		*/
}
