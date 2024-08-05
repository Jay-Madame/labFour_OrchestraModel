#include "time.h"
#include <cmath>

Time::Time() : Time(0, 0, 0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

Time::Time(int m, int s) : Time(0, m, s) {}

void Time::simplify() {
    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds = seconds % 60;
    }
    if (seconds < 0) {
        minutes -= ((abs(seconds) / 60) + 1);
        seconds = 60 - (abs(seconds) % 60);
    }
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes = minutes % 60;
    }
    if (minutes < 0) {
        hours -= ((abs(minutes) / 60) + 1);
        minutes = 60 - (abs(minutes) % 60);
    }
}

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

int Time::getSeconds() const {
    return seconds;
}

Time Time::operator+(Time &right) {
    Time tempTime;
    tempTime.hours = this->hours + right.hours;
    tempTime.minutes = this->minutes + right.minutes;
    tempTime.seconds = this->seconds + right.seconds;
    tempTime.simplify();
    return tempTime;
}


Time Time::operator++() {
    seconds++;
    this->simplify();
    return *this;
}

Time Time::operator++(int) {
    Time oldTime = *this;
    seconds++;
    simplify();
    return oldTime;
}

Time::operator int() {
    int totalSeconds = 0;
    totalSeconds = seconds + 60 * (minutes + 60 * hours);
    return totalSeconds;
}

std::ostream &operator<<(std::ostream &strm, const Time &obj) {
    strm << obj.hours << ":"
         << (obj.minutes < 10 ? "0" : "") << obj.minutes << ":"
         << (obj.seconds < 10 ? "0" : "") << obj.seconds;
    return strm;
}
