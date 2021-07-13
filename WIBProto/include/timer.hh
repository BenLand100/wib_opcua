#ifndef __TIMER_HH
#define __TIMER_HH

#include <iostream>
#include <chrono>

class Timer
{
public:
    Timer() : start(clock_t::now()) {}
    void reset() { start = clock_t::now(); }
    double elapsed() const { 
        return std::chrono::duration_cast<second_t>(clock_t::now() - start).count(); 
    }

private:
    typedef std::chrono::high_resolution_clock clock_t;
    typedef std::chrono::duration<double, std::ratio<1> > second_t;
    std::chrono::time_point<clock_t> start;
};

#endif
