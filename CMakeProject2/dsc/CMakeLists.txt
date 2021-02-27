add_library(dsc_lib dsc.cpp)

target_include_directories(dsc_lib PUBLIC
                          ${PROJECT_SOURCE_DIR}/include
                          )
