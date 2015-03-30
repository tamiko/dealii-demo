#include<iostream>

extern void alice();

int main()
{
  alice();

  std::cout << "BOB_VERSION:          " << BOB_VERSION << std::endl;
  std::cout << "BOB_GIT_REVISION:     " << BOB_GIT_REVISION << std::endl;
  std::cout << "BOB_GIT_SHORTREV:     " << BOB_GIT_SHORTREV << std::endl;
  std::cout << "DEAL_II_VERSION:      " << DEAL_II_VERSION << std::endl;
  std::cout << "DEAL_II_GIT_BRANCH:   " << DEAL_II_GIT_BRANCH << std::endl;
  std::cout << "DEAL_II_GIT_REVISION: " << DEAL_II_GIT_REVISION << std::endl;
  std::cout << "DEAL_II_GIT_SHORTREV: " << DEAL_II_GIT_SHORTREV << std::endl;
  return 0;
}
