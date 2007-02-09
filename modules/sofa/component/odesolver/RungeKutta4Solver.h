#ifndef SOFA_COMPONENT_ODESOLVER_RUNGEKUTTA4SOLVER_H
#define SOFA_COMPONENT_ODESOLVER_RUNGEKUTTA4SOLVER_H

#include <sofa/core/componentmodel/behavior/OdeSolver.h>

namespace sofa
{

namespace component
{

namespace odesolver
{

/* A popular time integration method, much more precise than the EulerSolver */
class RungeKutta4Solver : public core::componentmodel::behavior::OdeSolver
{
public:
    void solve (double dt);
};

} // namespace odesolver

} // namespace component

} // namespace sofa

#endif
