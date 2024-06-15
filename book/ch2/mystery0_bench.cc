// Sample mystery program to measure how long an add takes. Flawed.
// Copyright 2021 Richard L. Sites

#include <benchmark/benchmark.h>


static void BM_mystery0(benchmark::State& state) {
  uint64_t sum = 0;

  for (auto _ : state) {
    sum += 1;
  }
}
BENCHMARK(BM_mystery0);


BENCHMARK_MAIN();
