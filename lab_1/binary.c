#include <stdio.h>
void printBinary(int num) {
  if (num==0) return;
  printBinary(num/2);
  printf(&quot;%d&quot;,num%2);
}
int main() {
  int number;
  printf(&quot;Binary representation: &quot;);
  printBinary(number);
  printf(&quot;\n&quot;);
  return 0;
}
