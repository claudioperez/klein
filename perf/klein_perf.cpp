#include <klein/klein.hpp>
#include <mc_ruler.h>

kln::rotor rotor_composition(kln::rotor const& a, kln::rotor const& b)
{
    MC_MEASURE_BEGIN(rotor_composition);
    auto out = a * b;
    MC_MEASURE_END();
    return out;
}

kln::point motor_application(kln::motor const& m, kln::point const& p)
{
    MC_MEASURE_BEGIN(motor_application);
    auto out = m(p);
    MC_MEASURE_END();
    return out;
}

kln::mat4x4 motor_to_mat(kln::motor const& m)
{
    MC_MEASURE_BEGIN(motor_to_mat);
    auto out = m.as_matrix();
    MC_MEASURE_END();
    return out;
}