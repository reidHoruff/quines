#include<stdio.h>
char data[] = {
105, 110, 116, 32, 109, 97, 105, 110, 40, 41, 32, 123, 10, 32, 32, 112, 114, 105, 110, 116, 102, 40, 34, 35, 105, 110, 99, 108, 117, 100, 101, 60, 115, 116, 100, 105, 111, 46, 104, 62, 92, 110, 34, 41, 59, 10, 32, 32, 112, 114, 105, 110, 116, 102, 40, 34, 99, 104, 97, 114, 32, 100, 97, 116, 97, 91, 93, 61, 123, 92, 110, 92, 116, 34, 41, 59, 10, 32, 32, 117, 110, 115, 105, 103, 110, 101, 100, 32, 105, 110, 116, 32, 105, 32, 61, 32, 48, 59, 10, 32, 32, 102, 111, 114, 32, 40, 105, 61, 48, 59, 32, 105, 32, 60, 32, 115, 105, 122, 101, 111, 102, 40, 100, 97, 116, 97, 41, 59, 32, 105, 43, 43, 41, 32, 123, 10, 32, 32, 32, 32, 112, 114, 105, 110, 116, 102, 40, 34, 37, 100, 44, 32, 34, 44, 32, 100, 97, 116, 97, 91, 105, 93, 41, 59, 10, 32, 32, 125, 10, 32, 32, 112, 114, 105, 110, 116, 102, 40, 34, 92, 110, 125, 59, 92, 110, 34, 41, 59, 10, 32, 32, 102, 111, 114, 32, 40, 105, 61, 48, 59, 32, 105, 32, 60, 32, 115, 105, 122, 101, 111, 102, 40, 100, 97, 116, 97, 41, 59, 32, 105, 43, 43, 41, 32, 123, 10, 32, 32, 32, 32, 112, 117, 116, 99, 104, 97, 114, 40, 100, 97, 116, 97, 91, 105, 93, 41, 59, 10, 32, 32, 125, 10, 32, 32, 114, 101, 116, 117, 114, 110, 32, 48, 59, 10, 125, 10,
};
int main() {
  printf("#include<stdio.h>\n");
  printf("char data[]={\n");
  unsigned int i = 0;
  for (i=0; i < sizeof(data); i++) {
    printf("%d, ", data[i]);
  }
  printf("\n};\n");
  for (i=0; i < sizeof(data); i++) {
    putchar(data[i]);
  }
  return 0;
}
