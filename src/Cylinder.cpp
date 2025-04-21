# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iomanip>
# include <math.h>

//Hi

double Cylinder :: SurfaceArea(){
    double SA;
    SA = M_PI*radius*radius*2+M_PI*2*radius*height;
    
    return SA;
}



double Cylinder :: Volume(){
    double V = M_PI*radius*radius*height;
    return V;
}

double Cylinder :: Circumference(){
    double C = M_PI*radius*2;
    return C;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    int r,h;
    in >> r >> h;
    cldr.radius = r;
    cldr.height = h;
    
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: "<<fixed << std::setprecision(3) << cldr.Circumference()<<endl;
    out <<"SurfaceArea: "<<fixed << std::setprecision(3) << cldr.SurfaceArea()<<endl;
    out<<"Volume: "<<fixed << std::setprecision(3) <<cldr.Volume();
    return out;
}

# endif
