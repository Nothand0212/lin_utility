class AccumulateAverage
{
public:
  AccumulateAverage() : count_( 0 ), average_( 0 ) {}

  void addValue( double value )
  {
    average_ = ( average_ * count_ + value ) / ( count_ + 1 );
    count_++;
  }

  double getAverage() const
  {
    return average_;
  }

private:
  int    count_;
  double average_;
};