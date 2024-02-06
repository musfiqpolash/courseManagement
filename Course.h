#ifndef COURSE_H
#define COURSE_H 

#include <vector>
#include "Student.h"

class Course{
  std::string m_name = "course";
  std::vector<Student> m_students;

public:
  Course();
  Course(const std::string&);
  ~Course();

  void addStudent(const Student&);
  const std::vector<Student>& getStudents() const;
  void print() const;
};

#endif
