#include "hex2char.h"


static unsigned char gethex(const char *s, char **endptr) {
	assert(s);
	while (isspace(*s)) s++;
	assert(*s);
	return strtoul(s, endptr, 16);
}

unsigned char *convert(const char *s) {
	unsigned char *answer = malloc((strlen(s) + 1) / 3 + 1);
	unsigned char *p;
	for (p = answer; *s; p++)
		*p = gethex(s, (char **)&s);
	return answer;
}

int main() {
	char *hex = strdup("68 65 6c 6c 6f");
	unsigned char *str = convert(hex);

	printf("%s\n", str);
}


