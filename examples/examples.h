#ifndef LIQUID_EXAMPLES_H
#define LIQUID_EXAMPLES_H

#ifdef LIQUID_BUILD_CPLUSPLUS
static inline liquid_float_complex cexpf(liquid_float_complex f) { return std::exp(f); }
static inline liquid_float_complex conjf(liquid_float_complex f) { return std::conj(f); }
static inline float crealf(liquid_float_complex f) { return std::real(f); }
static inline float cimagf(liquid_float_complex f) { return std::imag(f); }
static inline float cabsf(liquid_float_complex f) { return std::abs(f); }
static inline liquid_float_complex ccosf(liquid_float_complex f) { return std::cos(f); }
static inline liquid_float_complex csinf(liquid_float_complex f) { return std::sin(f); }
static inline liquid_float_complex csqrtf(liquid_float_complex f) { return std::sqrt(f); }
static inline float cargf(liquid_float_complex f) { return std::arg(f); }

static inline liquid_double_complex conj(liquid_double_complex d) { return std::conj(d); }
static inline double creal(liquid_double_complex d) { return std::real(d); }
static inline double cimag(liquid_double_complex d) { return std::imag(d); }
static inline double cabs(liquid_double_complex d) { return std::abs(d); }

static inline float conjf(float f) { return f; }
static inline double conj(double d) { return d; }

static const liquid_float_complex _Complex_I(0.0f, 1.0f);

#include <cmath>
#endif

#endif
