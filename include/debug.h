/*
 * @(#)debug.h	1.10 95/11/29  
 *
 * Debugging hooks	1/22/92
 */

#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <stdio.h>
#include <stdarg.h>

extern void   DumpThreads(void);
extern char * threadName(void*);

void panic (const char *, ...);

#endif /* !_DEBUG_H_ */
