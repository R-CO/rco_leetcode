/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#include "721_accounts_merge.hpp"
using namespace accounts_merge;

#include <gtest/gtest.h>

#include <utility>

TEST(AccountsMerge, test_1) {
  std::vector<std::vector<std::string>> input = {
      {"John", "johnsmith@mail.com", "john_newyork@mail.com"},
      {"John", "johnsmith@mail.com", "john00@mail.com"},
      {"Mary", "mary@mail.com"},
      {"John", "johnnybravo@mail.com"}};

  Solution solution;
  auto output = std::move(solution.accountsMerge(input));
}

TEST(AccountsMerge, test_2) {
  std::vector<std::vector<std::string>> input = {
      {"Gabe", "Gabe0@m.co", "Gabe3@m.co", "Gabe1@m.co"},
      {"Kevin", "Kevin3@m.co", "Kevin5@m.co", "Kevin0@m.co"},
      {"Ethan", "Ethan5@m.co", "Ethan4@m.co", "Ethan0@m.co"},
      {"Hanzo", "Hanzo3@m.co", "Hanzo1@m.co", "Hanzo0@m.co"},
      {"Fern", "Fern5@m.co", "Fern1@m.co", "Fern0@m.co"}};

  Solution solution;
  auto output = std::move(solution.accountsMerge(input));
}

TEST(AccountsMerge, test_3) {
  std::vector<std::vector<std::string>> input = {
      {"David", "David0@m.co", "David1@m.co"},
      {"David", "David3@m.co", "David4@m.co"},
      {"David", "David4@m.co", "David5@m.co"},
      {"David", "David2@m.co", "David3@m.co"},
      {"David", "David1@m.co", "David2@m.co"}};

  Solution solution;
  auto output = std::move(solution.accountsMerge(input));
}
