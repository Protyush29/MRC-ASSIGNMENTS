#ifndef POLYGON_H
#define POLYGON_H

#include <vector>
#include <utility>
#include <iostream>
#include <string>

using namespace std;
class Polygon
{
private:
    // set of vertices of the polygon
    std::vector<std::pair<double, double>> points;

public:
    Polygon(const std::vector<std::pair<double, double>> &points);
    virtual ~Polygon();
    bool isPointInPolygon(const std::pair<double, double> &p);
    
};

#endif /* POLYGON_H */
