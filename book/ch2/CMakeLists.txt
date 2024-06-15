add_executable(mystery0 mystery0.cc)
target_compile_features(mystery0 PRIVATE cxx_std_17)
target_link_libraries(mystery0 PRIVATE usd_library)

add_executable(mystery0_bench mystery0_bench.cc)
target_compile_features(mystery0_bench PRIVATE cxx_std_17)
target_link_libraries(mystery0_bench PRIVATE benchmark::benchmark)
