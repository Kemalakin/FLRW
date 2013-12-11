// flrw.hpp

// Author: Jonah Miller (jonah.maxwell.miller@gmail.com)\
// Time-stamp: <2013-12-11 02:34:13 (jonah)>

// This is the prototype and header file for the program that uses
// Runge-Kutta methods to numerically explore
// Friedmann-Lemaitre-Robertson-Walker metrics.

// Background
// ----------------------------------------------------------------------
// See the included pdf or latex file.
// ----------------------------------------------------------------------


// Dependencies
// ----------------------------------------------------------------------
// This program depends on the RKF45 package I wrote, which is an
// implementation of a fourth-order Runge-Kutte Fehlberg integration
// scheme. If you don't have it, you can find it here:
// https://github.com/Yurlungur/runge_kutta
// ----------------------------------------------------------------------


// Usage
// ----------------------------------------------------------------------
// STUB
// ----------------------------------------------------------------------


// Include guard
#pragma once
// Includes
#include "rkf45.hpp"


// The iteration function
// ----------------------------------------------------------------------

// Gets the pressure as a function of energy density and equation of
// state variable omega. The equation of state variable is assumed to
// be some function of rho.
double get_omega(double (*omega)(double), double rho);
// ----------------------------------------------------------------------
