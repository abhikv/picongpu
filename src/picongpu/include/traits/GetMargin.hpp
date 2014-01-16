/**
 * Copyright 2013 Rene Widera
 *
 * This file is part of PIConGPU. 
 * 
 * PIConGPU is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 3 of the License, or 
 * (at your option) any later version. 
 * 
 * PIConGPU is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details. 
 * 
 * You should have received a copy of the GNU General Public License 
 * along with PIConGPU.  
 * If not, see <http://www.gnu.org/licenses/>. 
 */ 

#pragma once

#include "simulation_defines.hpp"

namespace picongpu
{

namespace traits
{
/**Get margin of a solver
 * class must define a LowerMargin and UpperMargin for any valid solver
 * 
 * \tparam Solver solver which need goast cells for solving a problem
 * \tparam SubSetName a optinal name (id) if solver needs defferent goast cells
 * for different objects
 */
template<class Solver,unsigned int SubSetName=0>
struct GetMargin;

} //namespace traits

}// namespace picongpu