set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_library( SingletonStatic STATIC
             src/singleton.cpp )

set(BUILD_SHARED_LIBS ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library( UsesSingletonA
             src/uses_singleton_a.cpp )
target_link_libraries(UsesSingletonA PUBLIC
             SingletonStatic)

add_library( UsesSingletonB
             src/uses_singleton_b.cpp )
target_link_libraries(UsesSingletonB PUBLIC
             SingletonStatic)

add_executable(05_singleton_library_test src/main.cpp )

target_link_libraries(05_singleton_library_test PUBLIC
    SingletonStatic
    UsesSingletonA
    UsesSingletonB)
