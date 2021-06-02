#pragma once
#include <list>
#include <string>
#include <iostream>

namespace JobStatus
{
    using namespace System::Collections::Generic;
    using namespace System::Text;
    using namespace std;

    class service_Order
    {
    private:
        string serviceOrder_Number;
        string serviceOrder_Status;
        string time_Stamp;

    public:
        string GetserviceOrder_Number()
        {
            return serviceOrder_Number;
        }
        string SetserviceOrder_Number(string serviceOrderNumber)
        {
            serviceOrderNumber = serviceOrder_Number;
            return serviceOrderNumber;
        }

        string GetserviceOrder_Status()
        {
            return serviceOrder_Status;
        }
        string SetserviceOrder_Status(string serviceOrderStatus)
        {
            serviceOrderStatus = serviceOrder_Status;
            return serviceOrderStatus;
        }

        string Gettime_Stamp()
        {
            return time_Stamp;
        }
        string Settime_Stamp(string timeStamp)
        {
            timeStamp = time_Stamp;
            return timeStamp;
        }
    };

    class Lists
    {
    public:
        list<service_Order> service_Order_List;
    };
}