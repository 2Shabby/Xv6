#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{
	int pid;
	int rtime,wtime,stat=0;
	pid=fork();
	if(pid==0)
		exec(argv[1],argv);
	else
		stat=waitx(&rtime,&wtime);
	printf(1, "Wait Time = %d\n Run Time = %d with Status %d \n", wtime, rtime, stat);
 	exit();
}
