#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student {
  std::string m_first = "First";
  std::string m_last = "Last";
  int m_id = 0;
  float m_avg = 0;

public:
  Student();
  Student(std::string, std::string, int, float);
  ~Student();
  int getId() const;
  float getAvg() const;
  std::string getFirst() const;
  std::string getLast() const;
  void details() const;
};

#endif // !STUDENT_H
