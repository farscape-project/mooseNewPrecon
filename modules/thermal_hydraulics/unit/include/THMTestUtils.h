#pragma once

#include "SinglePhaseFluidPropertiesTestUtils.h"
#include "MooseTypes.h"

// Absolute tolerance to use for calculations that should only differ by the
// accumulation of roundoff
#define ABS_TOL_ROUNDOFF 1e-12

// Minimum perturbation to be used in FD Jacobian computations
#define PERTURBATION_MIN 1e-12

inline Real
computeFDPerturbation(const Real & value, const Real & relative_perturbation = REL_PERTURBATION)
{
  return std::max(relative_perturbation * std::abs(value), PERTURBATION_MIN);
}