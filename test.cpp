#define CATCH_CONFIG_MAIN
#include "catch.hpp"
//#include "functions_to_implenent.cpp"
#include<vector>

TEST_CASE ("2's are removed", "[RemoveTwos]") {
    REQUIRE (RemoveTwos(20) == 5);
    REQUIRE (RemoveTwos(6) == 3);
    REQUIRE (RemoveTwos(11) == 11);
    REQUIRE (RemoveTwos(22) == 11);
    
}

TEST_CASE ("Sum is computed", "[Sum]") {
    std::vector<int> v{1,2,3,4,5,6,7,8,9,10}
    REQUIRE (Sum(v) == 55)
}

TEST_CASE ("Product is computed", "[Product]") {
    std::vector<int> v{1,2,3,4,5,6,7,8,9,10}
    REQUIRE (Product(v) == 3628800)
}
