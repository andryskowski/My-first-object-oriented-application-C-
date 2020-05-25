#include <boost/test/unit_test.hpp>

#include "Client.h"

BOOST_AUTO_TEST_SUITE(ClientSuiteCorrect)

BOOST_AUTO_TEST_CASE(ClientFirstNameCase) {
    Client client("Jan", "Kowalski", "1567890");
    BOOST_REQUIRE_EQUAL(client.getFirstName(), "Jan");
    BOOST_CHECK_EQUAL(client.getLastName(), "Kowalski");
    BOOST_CHECK_EQUAL(client.getPersonalID(), "1567890");
//tutaj sprawdź pozostałe wartości dla clienta
}

BOOST_AUTO_TEST_SUITE_END()


BOOST_AUTO_TEST_SUITE(AddressCorrect)

BOOST_AUTO_TEST_CASE(AddressStreetCase) {
    Address address("Wierzbowa", "25");
    BOOST_REQUIRE_EQUAL(address.getS(), "Wierzbowa");
    BOOST_REQUIRE_EQUAL(address.getN(), "25");
//tutaj sprawdź pozostałe wartości dla clienta
}

BOOST_AUTO_TEST_SUITE_END()









