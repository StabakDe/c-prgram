#include <stdio.h>
#include <string.h>
char* units[] = {""
, "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
"nineteen"}; char* tens[] = {"","", "twenty", "thirty", "forty", "fifty", "sixty", "seventy","eighty", "ninety"};
void numberToWords(long n) {
    if (n < 0) { 
        printf("minus ");
        numberToWords(-n); 
    }else if (n >= 1000) {
        numberToWords(n / 1000);
        printf(" thousand ");
    }if (n % 1000) 
        numberToWords(n % 1000); 
    else if (n >= 100) {
        numberToWords(n / 100);
        printf(" hundred ");}
    if (n % 100) { 
        printf("and ");
        numberToWords(n % 100);
    }else if (n >= 20) {
        printf("%s ", tens[n / 10]);
    if (n % 10) 
        numberToWords(n % 10); }
    else if (n > 0) {
        printf("%s ", units[n]); }
    else if (n == 0) {
    // Only print zero if the original input was 0 
        return; 
    } }
int main() {
long num;
printf("Enter a number: ");
scanf("%ld", &num);
if (num == 0)
printf("zero");
else
numberToWords(num);
printf("\n");
return 0;
}
