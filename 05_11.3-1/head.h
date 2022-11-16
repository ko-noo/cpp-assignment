#pragma once
#include <iostream>
#include <random>

std::random_device random;
std::mt19937 mt(random());
std::uniform_int_distribution<int> range(1, 100);

auto ans = range(random);
