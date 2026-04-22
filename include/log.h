/*
 * @(#)log.h	1.6 95/07/17  
 * Logging utilities for debugging.
 */

#ifndef _LOG_H_
#define _LOG_H_

#ifdef LOGGING

#include <stdio.h>

/*
 * changed command-line parsing of the -l flag to allow frog layer 0
 * -l0 to be passed in.  PERMANENT LOG STATEMENTS SHOULD NOT USE LEVEL 0!
 * It is intended to be used temporarily to limit logging output to
 * specific messages during debugging.  Otherwise even level 1 logging
 * buries you in output.
 */

extern int logging_level;

#define Log(level, message) {			\
    if (level <= logging_level)			\
	fprintf(stderr, message);		\
}

#define Log1(level, message, x1) {		\
    if (level <= logging_level)			\
	fprintf(stderr, message, (x1));		\
}

#define Log2(level, message, x1, x2) {		\
    if (level <= logging_level)			\
	fprintf(stderr, message, (x1), (x2));	\
}

#define Log3(level, message, x1, x2, x3) {		\
    if (level <= logging_level)				\
	fprintf(stderr, message, (x1), (x2), (x3));	\
}

#define Log4(level, message, x1, x2, x3, x4) {			\
    if (level <= logging_level)					\
	fprintf(stderr, message, (x1), (x2), (x3), (x4));	\
}

#else

#define Log(level, message)
#define Log1(level, message, x1)
#define Log2(level, message, x1, x2)
#define Log3(level, message, x1, x2, x3)
#define Log4(level, message, x1, x2, x3, x4)

#endif /* LOGGING */
#endif /* !_LOG_H_ */
