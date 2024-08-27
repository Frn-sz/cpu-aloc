#include "include.hpp"
#include "Process.cpp"
#include "./PCPS.cpp"

int main(int argc, char const *argv[])
{
  int process_qnt;
  int alghoritm;
  int preemptive;

  cout << "Escolha seu algoritmo" << endl;
  cout << "1- PCPS\n2- Menor Primeiro\n3- Por Prioridade" << endl;

  cin >> alghoritm;

  cout << "1 - Preemptivo\n2- Não preemptivo" << endl;

  cin >> preemptive;

  cout << "Digite a quantidade de processos" << endl;

  cin >> process_qnt;

  queue<Process> fpp;
  queue<Process> wait;

  int io_time;
  int cpu_time;
  int arrive_time;

  for (size_t i = 0; i < process_qnt; ++i)
  {
    cout << "Digite o tempo de CPU do processo " << i + 1 << endl;
    cin >> cpu_time;
    cout << "Digite o tempo de IO (espera) do processo " << i + 1 << endl;
    cin >> io_time;
    cout << "Digite o tempo de chegada do processo " << i + 1 << endl;
    cin >> arrive_time;

    fpp.push(Process(cpu_time, io_time, arrive_time));
  }

  PCPS pcps(fpp, wait);

  switch (alghoritm)
  {
  case 1:
    if (preemptive)
      pcps.preemptive();
    else
      pcps.non_preemptive();
    break;
  default:
  }
}
