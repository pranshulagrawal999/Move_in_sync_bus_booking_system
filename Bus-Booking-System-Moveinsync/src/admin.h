#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <vector>
#include "bus.h"

class Admin {
private:
    const std::string adminUsername = "pranshul";
    const std::string adminPassword = "1234";

public:
    void adminLogin(std::vector<Bus>& buses);
    void manageBusDetails(std::vector<Bus>& buses);

private:
    void addBus(std::vector<Bus>& buses);
    void updateBus(std::vector<Bus>& buses);
    void deleteBus(std::vector<Bus>& buses);
    void displayAllBuses(const std::vector<Bus>& buses);
};

#endif // ADMIN_H
