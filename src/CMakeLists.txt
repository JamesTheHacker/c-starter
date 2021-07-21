set(LIB_SOURCES hello.c)
set(MAIN_SOURCES main.c)
set(HEADERS ../include/hello.h)

add_library(hello STATIC ${LIB_SOURCES} ${HEADERS})
add_executable(main ${HEADERS} ${MAIN_SOURCES})

target_link_libraries(main hello)
