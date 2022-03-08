cmake_minimum_required(VERSION 3.21)
project(Laborator_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Laborator_2 main.cpp menu/RunMenu.cpp menu/RunMenu.h menu/Console.cpp menu/Console.h menu/Option.cpp menu/Option.h menu/Read.cpp menu/Read.h menu/Show.cpp menu/Show.h problems/PrimeNumberSequence.h problems/PrimeNumberSequence.cpp menu/ReadInterval.cpp menu/ReadInterval.h problems/SequenceInterval.cpp problems/SequenceInterval.h Tests/TestAll.h Tests/TestAll.cpp Tests/TestPrimeNumberSequence.h Tests/TestPrimeNumberSequence.cpp Tests/TestSequenceInterval.cpp Tests/TestSequenceInterval.h)
