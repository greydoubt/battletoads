/*
 * Win32 implementation of Java threads
 */

#ifndef _WIN32_THREADS_MD_H_
#define _WIN32_THREADS_MD_H_

#include <windows.h>
#include "bool.h"

#define N_TRACED_REGS 6

typedef enum {
    RUNNABLE,
    SUSPENDED,
    SLEEPING,
    MONITOR_WAIT,
    CONDVAR_WAIT
} thread_state_t;

/*
 * Machine dependent thread data structure
 */
typedef struct sys_thread {
    void *cookie;		    /* Back-pointer to shared thread struct */
    HANDLE handle;		    /* Win32 thread handle */
    unsigned long id;   	    /* Win32 thread id */
    void *stack_base;   	    /* Thread stack base */
    thread_state_t state;	    /* Current thread state */
    bool_t system_thread;	    /* TRUE if this is a system thread */
    void *(*start_proc)(void *);    /* Thread start routine address */
    void *start_parm;		    /* Thread start routine parameter */
    struct sys_thread *next;	    /* Next thread in active thread queue */
} sys_thread_t;

extern bool_t ThreadsInitialized;

#endif /* !_WIN32_THREADS_MD_H_ */
