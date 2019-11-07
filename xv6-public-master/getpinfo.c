#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "x86.h"
#include "proc.h"
#include "spinlock.h"
int main (int argc,char *argv[])
{
	int pid = atoi(argv[1];
	struct proc_stat *p;
	p->pid = pid;
	getpinfo(p);
 	exit();
}
