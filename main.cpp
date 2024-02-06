#include "Course.h"

int main(int argc, char *argv[]) {
  Student s1;
  Student s2("ali", "baba", 1, 4.9);
  Student s3("sani", "sahjahan", 2, 9.3);

  Course c("math101");
  c.addStudent(s1);
  c.addStudent(s2);
  c.addStudent(s3);

  c.print();
  std::cout << "hi";

  return 0;
}
