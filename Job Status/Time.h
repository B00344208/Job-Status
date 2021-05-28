#pragma once
#include <cstdio>
#include <ctime>

namespace JobStatus
{
    class Time
    {
    public:
        int setTime();
        time_t rawtime;
        struct tm timeinfo;
    };

    int Time::setTime()
    {
        time(&rawtime);
        localtime_s(&timeinfo, &rawtime);
        return 0;
    }

}