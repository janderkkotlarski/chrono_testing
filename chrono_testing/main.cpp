#include <iostream>

#include <chrono>

int main()
{
  for (int ritual {0}; ritual < 1000; ++ritual)
  {
    const std::chrono::steady_clock::time_point time_start
    { std::chrono::steady_clock::now() };

    for (int count {0}; count < 10000000; ++count)
    { count *=1; }

    const std::chrono::steady_clock::time_point time_stop
    { std::chrono::steady_clock::now() };

    const double time_span
    { std::chrono::duration<double, std::ratio<1>>(time_stop - time_start).count() };

    std::cout << std::to_string(time_span) << std::endl;
  }

  return 0;
}
