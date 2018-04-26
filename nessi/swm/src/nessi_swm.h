/* nessi_pso.h
 * 
 * Copyright (C) 2017, 2018 Damien Pageot
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __NESSI_SWM_H__
#define __NESSI_SWM_H__

#include <stdlib.h>
#include <stdio.h>
#include <tgmath.h>
#include <sys/time.h>

/*
   - nessi_swm_modext
 */

void
nessi_swm_modext (int n1, int n2, int npml, float v[n1][n2], float ve[n1+2*npml][n2+2*npml]);

#endif /* __NESSI_PSO_H_ */
