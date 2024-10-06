#pragma once

/// <summary>
/// ������� ����� ������ � ������ �������� � ��������
/// </summary>
double seconds_difference(double time_1, double time_2);

/// <summary>
/// ������� ����� ������ � ������ �������� � �����
/// </summary>
double hours_difference(double time_1, double time_2);

/// <summary>
/// ����������� ����� � ����
/// </summary>
double to_float_hours(int hours, int minutes, int seconds);

/// <summary>
/// ������������ ���� 24��
/// </summary>
double to_24_hour_clock(double hours);

/// <summary>
/// ��������� ����(0-24) �� ������� � ��������
/// </summary>
int get_hours(int seconds);

/// <summary>
/// ��������� ������(0-60) �� ������� � ��������
/// </summary>
int get_minutes(int seconds);

/// <summary>
/// ������������ ����� � �������� �� 60
/// </summary>
int get_seconds(int seconds);

/// <summary>
/// ������������ ����� � UTC
/// </summary>
double time_to_utc(int utc_offset, double time);

/// <summary>
/// ������������ ����� �� UTC
/// </summary>
double time_from_utc(int utc_offset, double time);