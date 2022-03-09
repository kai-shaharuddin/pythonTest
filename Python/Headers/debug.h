#ifndef __DEGUG__H
#define __DEBUG__H
#include <errno.h>
#include <stdio.h>
#define ENABLE_OBD_DEBUG_ALL
//#define ENABLE_IOBD_DEBUG_LEVEL1
//#define ENABLE_IOBD_DEBUG_LEVEL2
//#define ENABLE_IOBD_DEBUG_LEVEL3
#define ERROR_FILE stderr
#include "error_nos.h"

#define IOBD_ERR(...)\
        {\
        fprintf(stderr, "ERROR : %s L#%d ", __func__, __LINE__);  \
        fprintf(stderr,__VA_ARGS__); \
        fprintf(stderr,"\n"); \
        }  

#ifdef ENABLE_OBD_DEBUG_ALL
#define ENABLE_IOBD_DEBUG_LEVEL1
#define ENABLE_IOBD_DEBUG_LEVEL2
#define ENABLE_IOBD_DEBUG_LEVEL3
#endif

#ifdef ENABLE_IOBD_DEBUG_LEVEL
#define IOBD_DEBUG_LEVEL(...)\
{\
        printf("DEBUG:   %s L#%d ", __func__, __LINE__);  \
        printf(__VA_ARGS__); \
        printf("\n"); \
}
#else
#define IOBD_DEBUG_LEVEL(...)
#endif

#ifdef ENABLE_IOBD_DEBUG_LEVEL1
#define IOBD_DEBUG_LEVEL1(...)\
{\
        printf(__VA_ARGS__); \
        printf("\n"); \
}
#else
#define IOBD_DEBUG_LEVEL1(...)
#endif


#ifdef ENABLE_IOBD_DEBUG_LEVEL2
#define IOBD_DEBUG_LEVEL2(...)\
{\
        printf(__VA_ARGS__); \
        printf("\n"); \
}
#else
#define IOBD_DEBUG_LEVEL2(...)
#endif

#ifdef ENABLE_IOBD_DEBUG_LEVEL3
#define IOBD_DEBUG_LEVEL3(...)\
{\
        printf(__VA_ARGS__); \
        printf("\n"); \
}
#else
#define IOBD_DEBUG_LEVEL3(...)
#endif


static int inline CHK_EOF (int ret, FILE *fd, char *err_str)
{
        if (ret < 0) {
                fprintf (fd, "%s: %d\n", err_str, ret);
                return ret; 
        }
	return OBD2_LIB_SUCCESS;
}

static int inline CHK_ERR ( int ret, FILE *fd, char *err_str)
{
        if (ret < OBD2_LIB_SUCCESS) {
                fprintf (fd, "%s: %x \n", err_str, ret);
                return ret;
        }
}


#if 0
static inline CHK_ERR ( int ret, FILE *fd, char *err_str) 
{
        if (ret == OBD2_LIB_FAILURE) {
                fprintf (fd, "%s: %d: ", err_str, errno);
		perror(NULL);
                return OBD2_LIB_FAILURE;
        }
	return OBD2_LIB_SUCCESS;
}
#endif

static int inline CHK_NULL ( int *ret, FILE *fd, char *err_str) 
{
        if (ret == (int *)NULL) {
                fprintf (fd, "%s: %d\n", err_str, errno);
                return errno;
        }
	return OBD2_LIB_SUCCESS;
}


#endif //__DEBUG__H
