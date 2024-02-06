#include "Student.h"

Student::Student() {}

Student::Student(std::string first, std::string last, int id, float avg)
    : m_first(first), m_last(last), m_id(id), m_avg(avg) {}

Student::~Student() {}

int Student::getId() const { return m_id; }
float Student::getAvg() const { return m_avg; }
std::string Student::getFirst() const { return m_first; }
std::string Student::getLast() const { return m_last; }
void Student::details() const {
  std::cout << m_first << " " << m_last << " " << m_id << " " << m_avg
            << std::endl;
}
