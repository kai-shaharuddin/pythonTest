#ifndef __GSM_HEADER__
#define __GSM_HEADER__
#include <semaphore.h>

int gsm_at_cmd(char *, char *, int);
int get_gsm_imei(char *);
int check_gsm_nw_connection();
int set_gsm_flight_mode_on();
int set_gsm_flight_mode_off();
int gsm_modem_on();
int gsm_modem_off();
int get_gsm_sim_status();
int check_gsm_sim_registration();
int get_gsm_sim_iccid(char *);
int set_gsm_network_mode (int);
int get_gsm_signal_strength(char *);
int get_gsm_nw_reg(char *, char *);
int set_gsm_nw_reg_loc_on();
int set_gsm_nw_reg_loc_off();
int check_gsm_modem_status();
int GSM_set_to_message_init ( );
int unread_message (char *msg_buf, int max_resp_time );
int read_message (char *msg_buf, int max_resp_time );
int send_sms( char *msg_response, char *sender_number, int max_resp_time );
int delete_message( int index, int max_resp_time );
int delete_all_messages( int max_resp_time );
int establish_connection();
void gsm_apn_configuration(char *apn_name, char *atd_num, char *username, char *password);
#endif 
