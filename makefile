FLAGS = -std=c++0x
TITLE = fibonacciPerformance
CPP = Fibonacci.cpp
CPP += main.cpp
DELETE = *.gch
DELETE += *.o

all:
	g++ ${FLAGS} ${CPP} -o ${TITLE}

clean:
	${RM} ${DELETE} ${TITLE}
