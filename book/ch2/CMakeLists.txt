add_executable(mystery0 mystery0.cc)
target_compile_features(mystery0 PRIVATE cxx_std_17)
target_link_libraries(mystery0 PRIVATE usd_library)
