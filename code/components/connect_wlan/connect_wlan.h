#ifndef CONNECT_WLAN_H
#define CONNECT_WLAN_H

#include <string>
#include "driver/gpio.h"

const int CONNECTED_BIT = BIT0;
void ConnectToWLAN();

void LoadWlanFromFile(std::string fn);

bool ChangeHostName(std::string fn, std::string _newhostname);

std::string getHostname();
std::string getIPAddress();
std::string getSSID();
std::string getNetMask();
std::string getGW();

#endif