#include "include.hpp"
#include "./Process.cpp"

class PCPS
{
  queue<Process> fpp;
  queue<Process> wait;

public:
  PCPS(queue<Process> fpp, queue<Process> wait)
  {
    this->fpp = fpp;
    this->wait = wait;
  }

  static void non_preemptive()
  {
  }

  static void preemptive()
  {
  }
};