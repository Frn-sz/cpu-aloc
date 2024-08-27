#include "include.hpp"

class Process
{
public:
  int cpu_time;
  int io_time;
  int arrive_time;

  Process(int cpu_time, int io_time, int arrive_time)
  {
    this->cpu_time = cpu_time;
    this->io_time = io_time;
    this->arrive_time = arrive_time;
  }

  void print_process()
  {
    cout << "CPU: " << this->cpu_time << endl;
    cout << "IO: " << this->io_time << endl;
    cout << "Tempo de chegada: " << this->arrive_time << endl;
  }
};