#include<deal.II/base/logstream.h>

using namespace dealii;

int main()
{
  deallog.pop();
  deallog << "DEMO_VERSION:         " << DEMO_VERSION << std::endl;
  deallog << "DEMO_GIT_BRANCH       " << DEMO_GIT_BRANCH << std::endl;
  deallog << "DEMO_GIT_REVISION:    " << DEMO_GIT_REVISION << std::endl;
  deallog << "DEMO_GIT_SHORTREV:    " << DEMO_GIT_SHORTREV << std::endl;
  deallog << "DEAL_II_VERSION:      " << DEAL_II_VERSION << std::endl;
  deallog << "DEAL_II_GIT_BRANCH:   " << DEAL_II_GIT_BRANCH << std::endl;
  deallog << "DEAL_II_GIT_REVISION: " << DEAL_II_GIT_REVISION << std::endl;
  deallog << "DEAL_II_GIT_SHORTREV: " << DEAL_II_GIT_SHORTREV << std::endl;

  return 0;
}
