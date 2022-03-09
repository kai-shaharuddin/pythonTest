#ifndef __COMMON__
#define __COMMON__

#include <netinet/in.h>
#include <signal.h>
#include <semaphore.h>
#include <mqueue.h>

typedef void(*SLEEP)(void);
typedef struct slp_wkp_ptrs
{ 
	SLEEP slp;
	SLEEP wake;
}SLEEP_WAKE; 

typedef void(*FPTR)(char *);
typedef struct ign_fun_ptrs
{
	FPTR ign_ON;
	FPTR ign_OFF;
}IGN_PTRS;

int init(IGN_PTRS *,SLEEP_WAKE *);
void get_time (char *);
int ntp_server_update();
int led_enable();
int led_disable();
int check_adc_voltage (double *);
int restart_device();
int i2c_write(int ,uint8_t , uint8_t , uint8_t );
int i2c_read(int ,uint8_t , uint8_t , uint8_t *);
int get_mac_address(char *interface,char *mac_address);
int get_power_source();
int ignition_pin_status();
int get_cpu_id(char *cpuid);
int config_timer_wakeup(int option, int timer);
int config_acc_wakeup(int option);
int config_can_wakeup(int option);
int config_ignition_wakeup(int option);
int wifi_init(int mode);
int wifi_deinit(int mode);
int ble_init();
int ble_deinit();
int push_device_to_sleep();
int ign_pin_status_check_disable();
#endif
