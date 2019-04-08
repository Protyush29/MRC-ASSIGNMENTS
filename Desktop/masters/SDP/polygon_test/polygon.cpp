#include <polygon.h>
#include <iostream>
#include <string>
Polygon::Polygon(const std::vector<std::pair<double, double>> &points)
{
    this->points = points;
}

Polygon::~Polygon()
{

}



bool Polygon::isPointInPolygon(const std::pair<double, double> &test)
{
    int i;
    int j;
    bool result = false;
    for (i = 0, j = points.size() - 1; i < points.size(); j = i++) {
      if ((points[i].second > test.second) != (points[j].second > test.second) &&
          (test.first < (points[j].first - points[i].first) * (test.second - points[i].second) / (points[j].second-points[i].second) + points[i].first)) {
        result = !result;
       }
    }
    return result;

}
