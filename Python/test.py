from asyncio.windows_events import NULL
from ctypes import *
libOBD2=cdll./libOBD2.so


#define ENABLE 1
#define DISABLE 0
#define WIFI_HOSTAPD_MODE 1
#define WIFI_STATION_MODE 2


rc = libOBD2.init(NULL,NULL)
cpu_id = 19.95

print("Test")