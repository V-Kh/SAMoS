/* ***************************************************************************
 *
 *  Copyright (C) 2013-2016 University of Dundee
 *  All rights reserved. 
 *
 *  This file is part of SAMoS (Soft Active Matter on Surfaces) program.
 *
 *  SAMoS is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  SAMoS is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ****************************************************************************/

/*!
 * \file regster_pair_potentials.cpp
 * \author Rastko Sknepnek, sknepnek@gmail.com
 * \date 03-Mar-2015
 * \brief Register all pair potentials with the class factory.
*/

#include "register.hpp"

void register_pair_potentials(PairPotentialMap& pair_potentials)
{
  // Register Lennard-Jones pair potential with the pair potentials class factory
  pair_potentials["lj"] = boost::factory<PairLJPotentialPtr>();
  // Register Coulomb pair potential with the pair potentials class factory
  pair_potentials["coulomb"] = boost::factory<PairCoulombPotentialPtr>();
  // Register soft pair potential with the pair potentials class factory
  pair_potentials["soft"] = boost::factory<PairSoftPotentialPtr>();
  // Register Gaussian pair potential with the pair potentials class factory
  pair_potentials["gaussian"] = boost::factory<PairGaussianPotentialPtr>();  
  // Register Morse pair potential with the pair potentials class factory
  pair_potentials["morse"] = boost::factory<PairMorsePotentialPtr>();  
  // Register active pair potential with the pair potentials class factory
  pair_potentials["active"] = boost::factory<PairActivePotentialPtr>(); 
  // Register soft rod pair potential with the pair potentials class factory
  pair_potentials["rod"] = boost::factory<PairRodPotentialPtr>(); 
  // Register Lennard-Jones rod pair potential with the pair potentials class factory
  pair_potentials["ljrod"] = boost::factory<PairLJRodPotentialPtr>(); 
  // Register soft attractive pair potential with the pair potentials class factory
  pair_potentials["soft_attractive"] = boost::factory<PairSoftAttractivePotentialPtr>();
  // Register vertex particle pair potential for tissues with the pair potentials class factory
  pair_potentials["vp"] = boost::factory<PairVertexParticlePotentialPtr>();
  // Register line tension pair potential for tissues with the pair potentials class factory
  pair_potentials["line_tension"] = boost::factory<PairLineTensionPotentialPtr>();
  // Register boundary bending pair potential for tissues with the pair potentials class factory
  pair_potentials["boundary_bending"] = boost::factory<PairBoundaryBendingPotentialPtr>();
  // Register boundary attraction pair potential for tissues with the pair potentials class factory
  pair_potentials["boundary_attraction"] = boost::factory<PairBoundaryAttractionPotentialPtr>();
  // Register motor pair potential with the pair potentials class factory
  pair_potentials["motor"] = boost::factory<PairMotorPotentialPtr>();
  // Register active nematic pair potential with the pair potentials class factory
  pair_potentials["active_nematic"] = boost::factory<PairActiveNematicPotentialPtr>(); 
  // Register Yukawa pair potential with the pair potentials class factory
  pair_potentials["yukawa"] = boost::factory<PairYukawaPotentialPtr>(); 
}
