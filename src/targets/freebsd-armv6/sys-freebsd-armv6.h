/*
 *	NMH's Simple C Compiler, 2013,2014
 *	FreeBSD/armv6 environment
 */

#define OS		"FreeBSD"
#define ASCMD		"as -o %s %s"
#define LDCMD		"ld -o %s %s/lib/crt0.o"
#define SYSLIBC		""
