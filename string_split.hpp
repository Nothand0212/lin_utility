#include <sstream>
#include <string>
#include <vector>

void split( std::string const &str, const char delim, std::vector<std::string> &out )
{
  std::stringstream ss( str );
  std::string       s;
  while ( std::getline( ss, s, delim ) )
  {
    out.push_back( s );
  }
}