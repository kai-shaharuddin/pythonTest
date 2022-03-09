
/*!< INclude File Header */
#ifndef __PROD_ERR_H_
#define __PROD_ERR_H_
#define INVALID_ARGS            -1
#define E_MQ_OPEN			100
#define E_MQ_SEND		        101
#define E_MQ_RECEIVE			102
#define E_SEM_INIT			103

/*!< Add Doxygen comment for macro, variables and function */
#define OBD2_LIB_SUCCESS	(0)
#define OBD2_LIB_FAILURE	(-1)
#define E_OBD2_LIB_INVALID_ARG	(-2)
#define E_MOD_SHIFT	 	(16)
#define E_MOD_MASK 			((1 << E_MOD_SHIFT) -1)

/*LIB GPIO ErrNos*/
#define E_LIB_GPIO_BASE			(0xF0000000)
#define E_LIB_GPIO_NOS			(E_LIB_GPIO_BASE | (1 & E_MOD_MASK) << E_MOD_SHIFT)

/*!< Configuration ErrNos */
#define E_SET_INVALID_GPIO		(E_LIB_GPIO_NOS + 1)
#define E_GPIO_EXP_OPEN 		(E_LIB_GPIO_NOS + 2)
#define E_GPIO_EXP_WRT 			(E_LIB_GPIO_NOS + 3)
#define E_GPIO_SET_DIR_OPEN	 	(E_LIB_GPIO_NOS + 4)
#define E_GPIO_SET_DIR_WRT 		(E_LIB_GPIO_NOS + 5)
#define E_GPIO_SET_DIR_ACCESS		(E_LIB_GPIO_NOS + 6)
#define E_GPIO_GET_OPEN 		(E_LIB_GPIO_NOS + 7)
#define E_GPIO_GET_RD 			(E_LIB_GPIO_NOS + 8)
#define E_GPIO_GET_VAL_ACCESS       	(E_LIB_GPIO_NOS + 9)
#define E_GPIO_SET_OPEN			(E_LIB_GPIO_NOS + 10)
#define E_GPIO_SET_WRT			(E_LIB_GPIO_NOS + 11)
#define E_GPIO_SET_VAL_ACCESS		(E_LIB_GPIO_NOS + 12)
#define E_READ_F_OPEN 			(E_LIB_GPIO_NOS + 13)
#define E_READ_INVALID 			(E_LIB_GPIO_NOS + 14)
#define E_READ_F_ACCESS 		(E_LIB_GPIO_NOS + 15)
#define E_GPIO_GET_EVENT_NUMBER		(E_LIB_GPIO_NOS + 16)

/*LIB Serial ErrNos*/
#define E_LIB_SERIAL_BASE 		(0xF1000000)
#define E_LIB_SERIAL_NOS  		(E_LIB_SERIAL_BASE | (1 & E_MOD_MASK) << E_MOD_SHIFT)

#define E_SERIAL_INVALID            	(E_LIB_SERIAL_NOS + 1)
#define E_SERIAL_INIT 		        (E_LIB_SERIAL_NOS + 2)
#define E_SERIAL_WRITE            	(E_LIB_SERIAL_NOS + 3)
#define E_SERIAL_READ 	         	(E_LIB_SERIAL_NOS + 4)
#define E_SERIAL_BAUDRATE       	(E_LIB_SERIAL_NOS + 5)
#define E_SERIAL_DEINIT		        (E_LIB_SERIAL_NOS + 6)

/*LIB I2C ErrNos*/
#define E_LIB_I2C_BASE	                (0xF2000000)
#define E_LIB_I2C_NOS   	        (E_LIB_I2C_BASE | (1 & E_MOD_MASK) << E_MOD_SHIFT)

#define E_I2C_INVALID	                (E_LIB_I2C_NOS + 1)
#define E_I2C_OPEN                	(E_LIB_I2C_NOS + 2)

/*Cellular Module ErrNos*/
#define E_LIB_GSM_BASE    		(0xE0000000)
#define E_LIB_GSM_NOS 	 		(E_LIB_GSM_BASE | (1 & E_MOD_MASK) << E_MOD_SHIFT)

#define E_GSM_USB_INIT          	(E_LIB_GSM_NOS + 1)
#define E_GSM_USB_WRITE         	(E_LIB_GSM_NOS + 2) 
#define E_GSM_USB_READ          	(E_LIB_GSM_NOS + 3) 
#define E_GSM_USB_DISCONNECT    	(E_LIB_GSM_NOS + 4)

#define E_GSM_AT_SERIAL_INIT     	(E_LIB_GSM_NOS + 5)
#define E_GSM_AT_SERIAL_WRITE    	(E_LIB_GSM_NOS + 6)
#define E_GSM_AT_SERIAL_READ     	(E_LIB_GSM_NOS + 7)
#define E_GSM_IMEI_READ_TIMEOUT  	(E_LIB_GSM_NOS + 8)

#define E_GSM_NW_CONNECTION_DOWN       	(E_LIB_GSM_NOS + 9)
#define E_GSM_SIM_NOT_DETECTED    	(E_LIB_GSM_NOS + 10)
#define E_GSM_SEM_INIT    		(E_LIB_GSM_NOS + 11)

/*Battery ErrNos*/
#define E_LIB_IBAT_BASE                	(0xD0000000)
#define E_LIB_IBAT_NOS                  (E_LIB_IBAT_BASE | (1 & E_MOD_MASK) << E_MOD_SHIFT)

#define E_IBAT_GET_CURRENT_NODE_OPEN   	(E_LIB_IBAT_NOS + 1)
#define E_IBAT_GET_CURRENT_NODE_READ   	(E_LIB_IBAT_NOS + 2)
#define E_IBAT_GET_VOL_NODE_OPEN	(E_LIB_IBAT_NOS + 3)
#define E_IBAT_GET_VOL_NODE_READ	(E_LIB_IBAT_NOS + 4)
#define E_IBAT_GET_HEALTH_NODE_OPEN	(E_LIB_IBAT_NOS + 5)
#define E_IBAT_GET_HEALTH_NODE_READ	(E_LIB_IBAT_NOS + 6)

#define E_IBATTERY_NOT_CONNECTED   (E_LIB_IBAT_NOS + 7)
#define E_IBATTERY_FULLY_CHARGED   (E_LIB_IBAT_NOS + 8)
#define E_IBATTERY_CHARGING        (E_LIB_IBAT_NOS + 9)
#define E_IBATTERY_NOT_CHARGING    (E_LIB_IBAT_NOS + 10)
#define E_IBATTERY_UNSTABLE_STATE  (E_LIB_IBAT_NOS + 11)

/*Acceleromter Errnos */
#define E_LIB_ACC_BASE				(0xC0000000)
#define E_LIB_ACC_NOS				(E_LIB_ACC_BASE | (1 & E_MOD_MASK) << E_MOD_SHIFT)
#define E_ACCELEROMTER_X_AXIS_INIT		(E_LIB_ACC_NOS + 1)
#define E_ACCELEROMTER_Y_AXIS_INIT      	(E_LIB_ACC_NOS + 2)
#define E_ACCELEROMTER_Z_AXIS_INIT      	(E_LIB_ACC_NOS + 3)
#define E_ACCELEROMTER_BUFFER_INIT     		(E_LIB_ACC_NOS + 4)
#define E_ACCELEROMETER_BULD_CHANNEL		(E_LIB_ACC_NOS + 5)
#define E_ACCELEROMETER_SCAN_SIZE		(E_LIB_ACC_NOS + 6)
#define E_ACCELEROMETER_EVENT_NUM		(E_LIB_ACC_NOS + 7)
#define E_ACCELEROMETER_DATA_READY_INT		(E_LIB_ACC_NOS + 8)
#define E_ACCELEROMETER_ACC_INT_DISABLE		(E_LIB_ACC_NOS + 9)
#define E_ACCELEROMETER_SET_ODR			(E_LIB_ACC_NOS + 10)
#define E_ACCELEROMETER_SET_LOW_PASS_FILTER	(E_LIB_ACC_NOS + 11)
#define E_ACCELEROMETER_SET_WAKE_THRSHLD	(E_LIB_ACC_NOS + 12)
#define E_ACCELEROMETER_DEINIT			(E_LIB_ACC_NOS + 13)
#define E_ACCELEROMETER_BUFFER_OPEN		(E_LIB_ACC_NOS + 14)
#define E_ACCELEROMETER_I2C_REG_CONFIG		(E_LIB_ACC_NOS + 15)
#define E_ACCELEROMETER_SEM_INIT		(E_LIB_ACC_NOS + 16)
#define E_ACCELEROMETER_THREAD_INIT		(E_LIB_ACC_NOS + 17)

/* Gyroscope Errnos */
#define E_LIB_GYRO_BASE				(0xB0000000)
#define E_LIB_GYRO_NOS				(E_LIB_GYRO_BASE | (1 & E_MOD_MASK) << E_MOD_SHIFT)

#define E_GYRO_X_AXIS_INIT			(E_LIB_GYRO_NOS + 1)
#define E_GYRO_Y_AXIS_INIT			(E_LIB_GYRO_NOS + 2)
#define E_GYRO_Z_AXIS_INIT              	(E_LIB_GYRO_NOS + 3)
#define E_GYRO_BUFFER_INIT              	(E_LIB_GYRO_NOS + 4)
#define E_GYRO_BULD_CHANNEL            		(E_LIB_GYRO_NOS + 5)
#define E_GYRO_SCAN_SIZE               		(E_LIB_GYRO_NOS + 6)
#define E_GYRO_EVENT_NUM               		(E_LIB_GYRO_NOS + 7)
#define E_GYRO_SET_ODR                 		(E_LIB_GYRO_NOS + 8)
#define E_GYRO_SET_LOW_PASS_FILTER     		(E_LIB_GYRO_NOS + 9)
#define E_GYRO_X_AXIS_DEINIT                	(E_LIB_GYRO_NOS + 10)
#define E_GYRO_Y_AXIS_DEINIT			(E_LIB_GYRO_NOS + 11)
#define E_GYRO_Z_AXIS_DEINIT			(E_LIB_GYRO_NOS + 12)
#define E_GYRO_BUFFER_DEINIT			(E_LIB_GYRO_NOS + 13)
#define E_GYRO_BUFFER_OPEN             		(E_LIB_GYRO_NOS + 14)
#define E_GYRO_I2C_REG_CONFIG          		(E_LIB_GYRO_NOS + 15)
#define E_GYRO_SEM_INIT				(E_LIB_GYRO_NOS + 16)
#define E_GYRO_THREAD_INIT			(E_LIB_GYRO_NOS + 17)

/* GPS Errnos */
#define E_LIB_GPS_BASE                         (0xA0000000)
#define E_LIB_GPS_NOS                          (E_LIB_GPS_BASE | (1 & E_MOD_MASK) << E_MOD_SHIFT)
#define E_GPS_USB_INIT			       (E_LIB_GPS_NOS + 1)
#define E_GPS_USB_DEINIT		       (E_LIB_GPS_NOS + 2)
#define E_GPS_USB_DISCONNECT		       (E_LIB_GPS_NOS + 3)
#define E_AGPS_ENABLE			       (E_LIB_GPS_NOS + 4)
#define E_AGPS_SET_TIME			       (E_LIB_GPS_NOS + 5)
#define E_AGPS_DEL_EXST_DATA		       (E_LIB_GPS_NOS + 6)
#define E_AGPS_HTTP_CFG_ENABLE		       (E_LIB_GPS_NOS + 7)
#define E_AGPS_QIACT_ENABLE		       (E_LIB_GPS_NOS + 8)
#define E_AGPS_URL_SIZE			       (E_LIB_GPS_NOS + 9)
#define E_AGPS_DOWNLOAD_DATA_INVALID	       (E_LIB_GPS_NOS + 10)
#define E_AGPS_READ_DATA_INVALID	       (E_LIB_GPS_NOS + 11)
#define E_AGPS_LOAD_DATA_INVALID	       (E_LIB_GPS_NOS + 12)


/* GPS Errnos */
#define E_LIB_CAN_BASE                         (0x90000000)
#define E_LIB_CAN_NOS                          (E_LIB_CAN_BASE | (1 & E_MOD_MASK) << E_MOD_SHIFT)
#define E_CAN_BITRATE			       (E_LIB_CAN_NOS + 1)
#define E_CAN_INIT			       (E_LIB_CAN_NOS + 2)
#define E_CAN_INTERFACE_NOT_FOUND	       (E_LIB_CAN_NOS + 3)

#endif /* __PROD_ERR_H_*/
