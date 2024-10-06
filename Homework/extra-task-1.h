#pragma once

/// <summary>
/// –азница между вторым и первым временем в секундах
/// </summary>
double seconds_difference(double time_1, double time_2);

/// <summary>
/// –азница между вторым и первым временем в часах
/// </summary>
double hours_difference(double time_1, double time_2);

/// <summary>
/// преобразует врем€ в часы
/// </summary>
double to_float_hours(int hours, int minutes, int seconds);

/// <summary>
/// ограничивает часы 24м€
/// </summary>
double to_24_hour_clock(double hours);

/// <summary>
/// извлекает часы(0-24) из времени в секундах
/// </summary>
int get_hours(int seconds);

/// <summary>
/// извлекает минуты(0-60) из времени в секундах
/// </summary>
int get_minutes(int seconds);

/// <summary>
/// ограничивает врем€ в секундах до 60
/// </summary>
int get_seconds(int seconds);

/// <summary>
///  онвертирует врем€ в UTC
/// </summary>
double time_to_utc(int utc_offset, double time);

/// <summary>
///  онвертирует врем€ из UTC
/// </summary>
double time_from_utc(int utc_offset, double time);