CXX = g++
AR = ar
RANLIB = ranlib

CFLAGS = -fpermissive
OUTPUT = MinaCalc.a

SOURCES = main.cpp
OBJS = ${SOURCES:.cpp=.o}

all: ${OUTPUT} toar

${OUTPUT}:${OBJS}
	${CXX} -c -o -fpermissive ${OBJS} ${SOURCES} ${CFLAGS} 

toar:
	$(AR) rcs ${OUTPUT} ${OBJS}

	
clean:
	rm *.o
	rm ${OUTPUT}
