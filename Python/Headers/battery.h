#ifndef __I_BATTERY__
#define __I_BATTERY__
#include <stdbool.h>
#include <unistd.h>
#include <poll.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int i_battery_init();
int i_battery_get_voltage();
int i_get_battery_status();
int i_battery_get_health();
#endif
