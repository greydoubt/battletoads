
/*
 * Win32 implementation of Java monitors
 */

#ifndef	_WIN32_MONITOR_MD_H_
#define	_WIN32_MONITOR_MD_H_

#include <windows.h>

#include "threads_md.h"
#include "mutex_md.h"
#include "condvar_md.h"

#define SYS_TIMEOUT_INFINITY (-1)

typedef struct sys_mon {
    mutex_t mutex;	    /* Mutex for this monitor */
    condvar_t condvar;      /* Condition variable for this monitor */
    sys_thread_t *owner;    /* Thread currently owning this monitor */
    unsigned int depth;	    /* Monitor entry count */
} sys_mon_t;

#endif	/* !_WIN32_MONITOR_MD_H_ */
