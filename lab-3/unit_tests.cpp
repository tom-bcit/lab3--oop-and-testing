#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "myStack.hpp"

TEST_CASE("A new stack is empty", "testTag1")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("pop empty stack", "testTag2")
{
    MyStack tester;
    tester.pop();

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("pop empty stack then push 3,2,1", "testTag3")
{
    MyStack tester;
    tester.pop();
    tester.push(3);
    tester.push(2);
    tester.push(1);

    REQUIRE(tester.empty() == false);
    REQUIRE(tester.print() == "3 2 1 ");
}

TEST_CASE("push more than stack maximum then check top value", "testTag4")
{
    MyStack tester;
    tester.pop();
    tester.push(10);
    tester.push(9);
    tester.push(8);
    tester.push(7);
    tester.push(6);
    tester.push(5);
    tester.push(4);
    tester.push(3);
    tester.push(2);
    tester.push(1);
    tester.push(0);

    REQUIRE(tester.empty() == false);
    REQUIRE(tester.print() == "10 9 8 7 6 5 4 3 2 1 ");
    REQUIRE(tester.full() == true);
    REQUIRE(tester.top() == 1);
}

TEST_CASE("check top value of empty stack", "testTag5")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.top() == -1);
}

TEST_CASE("push 1,2,3, pop twice, push 4,5,6, pop once", "testTag6")
{
    MyStack tester;

    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.pop();
    tester.pop();
    tester.push(4);
    tester.push(5);
    tester.push(6);
    tester.pop();

    REQUIRE(tester.empty() == false);
    REQUIRE(tester.top() == 5);
    REQUIRE(tester.print() == "1 4 5 ");
}

TEST_CASE("push 10 values then check top value", "testTag7")
{
    MyStack tester;
    tester.pop();
    tester.push(10);
    tester.push(9);
    tester.push(8);
    tester.push(7);
    tester.push(6);
    tester.push(5);
    tester.push(4);
    tester.push(3);
    tester.push(2);
    tester.push(1);

    REQUIRE(tester.empty() == false);
    REQUIRE(tester.print() == "10 9 8 7 6 5 4 3 2 1 ");
    REQUIRE(tester.full() == true);
    REQUIRE(tester.top() == 1);
}

TEST_CASE("partially full stack is not empty and not full", "testTag8")
{
    MyStack tester;
    tester.push(10);
    tester.push(9);
    tester.push(8);
    tester.push(7);
    tester.push(6);

    REQUIRE(tester.empty() == false);
    REQUIRE(tester.full() == false);
}