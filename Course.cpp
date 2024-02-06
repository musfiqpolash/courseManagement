#include "Course.h"

Course::Course() {}
Course::Course(const std::string &name) : m_name(name) {}
Course::~Course() {}

void Course::addStudent(const Student &s) { m_students.push_back(s); }

const std::vector<Student> &Course::getStudents() const { return m_students; }

void Course::print() const {
  std::cout << "####Course: " << m_name << "####\n";
  for (const auto &var : m_students) {
    var.details();
  }
}
