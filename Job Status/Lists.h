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
    public:
        string serviceOrder_Number;
        string serviceOrder_Status;
        string time_Stamp;
    };

    class Lists
    {
    public:
        list<service_Order> service_Order_List;

    };
}