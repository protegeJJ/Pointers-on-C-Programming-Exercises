#include <stdio.h>

void reverseString(char *string);

int main(void) {
	char s[] = "abcde";
	printf("Before calling reverseString(), s is %s\n", s);
	reverseString(s);
	printf("After calling reverseString(), s is %s\n", s);
	return 0;
}


void reverseString(char *string) {
	char *start = string;
	char *end;
    
   // Set lastChar point to the last character of string
   for (end = string; *end != '\0'; end++);
    --end;

    while (start < end) {
    	char temp;
    	temp = *start;
    	*start= *end;
    	*end = temp;
    	start++;
    	end--;
    }

}
