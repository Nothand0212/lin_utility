#include <cmath>
#include <iostream>

int main()
{
  int    choice;
  double x, y, result, angle;

  do
  {
    std::cout << "Please choose a trigonometric function:\n";
    std::cout << "1. sin\n";
    std::cout << "2. cos\n";
    std::cout << "3. tan\n";
    std::cin >> choice;

    if ( choice < 1 || choice > 3 )
    {
      std::cout << "Invalid choice\n";
    }
  } while ( choice < 1 || choice > 3 );

  std::cout << "Please enter the value of x: ";
  std::cin >> x;

  std::cout << "Please enter the value of y: ";
  std::cin >> y;

  if ( y == 0 )
  {
    std::cout << "Invalid value of y\n";
    return 0;
  }

  switch ( choice )
  {
    case 1:
      result = sin( x / y );
      break;
    case 2:
      result = cos( x / y );
      break;
    case 3:
      if ( x / y == M_PI / 2 || x / y == -M_PI / 2 )
      {
        std::cout << "Invalid value of x\n";
        return 0;
      }
      result = tan( x / y );
      break;
  }

  angle = atan( result ) * 180 / M_PI;

  std::cout << "The result is " << result << "\n";
  std::cout << "The angle in radians is " << atan( result ) << "\n";
  std::cout << "The angle in degrees is " << angle << "\n";

  return 0;
}