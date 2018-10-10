#ifndef SPHERE_H_INCLUDED
#define SPHERE_H_INCLUDED
#include <iostream>

#endif // SPHERE_H_INCLUDED
class Sphere
{
public:
    void affichage()
    {
     std::cout<<"x="<<m_x<<", y="<<m_y<<", masse="<<m_masse<<", rayon="<<m_rayon<<", couleur"<<m_couleur<<std::endl;
    }
    Sphere(double x,double y,double masse,double rayon,std::string couleur)
    {
        m_x = x;
        m_y = y;
        m_masse = masse;
        m_rayon = rayon ;
        m_couleur = couleur;
    }
    void  dessiner(Svgfile &f)

private :
    double m_x,m_y,m_masse,m_rayon;
    std::string m_couleur;
};
