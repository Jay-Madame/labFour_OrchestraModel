#pragma once
#include <cstdlib>
#include <ostream>

class Time
{
private:
    int hours, minutes, seconds;

public:
    Time();
    Time(int h, int m, int s);
    Time(int h, int m);
    void simplify();
    
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    // operator overload
    Time operator+(Time &right);
    Time operator-(Time &right);
    Time operator++();
    Time operator++(int);
    Time operator--();
    Time operator--(int);

    //relational operator
    bool operator<(Time &right);
    bool operator>(Time &right);
    
    //<< function
    friend std::ostream &operator<<(std::ostream &strm, const Time &obj);

    //int conversion
    operator int();
};
