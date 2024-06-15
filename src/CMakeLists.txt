file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${usd_SOURCE_DIR}/include/usd/*.h")

add_library(usd_library INTERFACE ${HEADER_LIST})

target_include_directories(usd_library INTERFACE ../include)
