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


void Course::loadFromFile(const std::string& filename){
  std::ifstream fin(filename);
  std::string first, last;
  int id;
  float avg;

  while (fin>>first) {
    fin >> last >> id >> avg;
    addStudent(Student(first,last,id,avg));
  }
}
