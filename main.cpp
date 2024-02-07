#include "Course.h"

int main(int argc, char *argv[]) {

  Course c("math101");
  c.loadFromFile("studentlist.txt");
  c.print();

  return 0;
}
