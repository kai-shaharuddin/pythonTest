#ifndef CAN_H
#define CAN_H

#include <stdio.h>
#include <linux/can.h>
int can_init(const char *, int);
int can_write(char *, char *);
int can_read(char *, struct canfd_frame *);
int can_deinit(const char *);
int ls_can_init();
int ls_can_deinit();
#endif
