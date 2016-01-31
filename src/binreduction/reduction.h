// ----------------------------------------------------------------------------
// Title      : Reduction
// Project    : LWE Sampler
// ----------------------------------------------------------------------------
// File       : reduction.h
// Author     : Friedrich Wiemer <friedrich.wiemer@rub.de>
//              Elena Kirshanova <elena.kirshanova@rub.de>
// Company    : Ruhr-University Bochum
// Created    : 2015-10-28
// Last update: 2015-10-28
// ----------------------------------------------------------------------------
// Description:
//     Implementation of small wrapper around NTLs BKZ reduction
// ----------------------------------------------------------------------------
// Revisions  :
// Date        Version  Author  Description
// 2015-10-28  1.0      fwi     Created
// ----------------------------------------------------------------------------

#ifndef __REDUCTION_NTL_H__
#define __REDUCTION_NTL_H__

#include <NTL/matrix.h>
#include <NTL/ZZ.h>

NTL::Mat<NTL::ZZ> ReduceMatrix(NTL::Mat<NTL::ZZ> A, double delta, int beta,
							   int prune);

#endif // __REDUCTION_NTL_H__
