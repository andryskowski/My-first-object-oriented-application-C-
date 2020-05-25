cmake_minimum_required(VERSION 3.4)
project(Biblioteka)

set(SOURCE_FILES
    src/model/client.cpp
    include/model/Client.h
    src/model/address.cpp
    include/model/Address.h
    src/model/vehicle.cpp
    include/model/Vehicle.h
    src/model/rent.cpp
    include/model/Rent.h
    src/model/car.cpp 
    include/model/Car.h 
    src/model/mope.cpp 
    include/model/Mope.h 
    src/model/motorvehicle.cpp
    include/model/MotorVehicle.h 
    src/model/bicycle.cpp  
    include/model/Bicycle.h 
    src/model/currentrentsrepository.cpp 
    include/model/CurrentRentsRepository.h
  src/model/vehiclerepository.cpp 
    include/model/VehicleRepository.h
  src/model/clientrepository.cpp 
    include/model/ClientRepository.h

src/model/clientgold.cpp 
    include/model/ClientGold.h
src/model/clientsilver.cpp 
    include/model/ClientSilver.h
src/model/clientbronze.cpp 
    include/model/ClientBronze.h
src/model/clienttype.cpp 
    include/model/ClientType.h
)

add_library(Biblioteka ${SOURCE_FILES} ${Boost_LIBRARIES})

target_include_directories(Biblioteka PUBLIC include/model)
enable_testing()

#... dodawanie testow
find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)

include_directories(
 ${CMAKE_CURRENT_SOURCE_DIR}/include
 ${Boost_INCLUDE_DIRS}
)

set(SOURCE_TEST_FILES
 test/master.cpp
 test/ClientTest.cpp)

add_executable (TestBibl ${SOURCE_TEST_FILES})

#dołącz bibliotekę z testowanymi klasami do programu testów
target_link_libraries (TestBibl
 Biblioteka
 ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
 )

#dodaj test TestBiblioteki1. Instrukcji cmake add_test może być wiele. 
#Dodatkowe parametry wpływają na szczegółowość generowanego raportu. Standardowo znajduje się on w Testing/Temporary.
add_test(TestBiblioteki1 TestBibl
 --report_level=detailed
 --log_level=all
 --color_output=yes
 )

add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
