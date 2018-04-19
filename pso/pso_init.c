/* pso/nessi_pso_init.c
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

#include <nessi_pso.h>

/*
 initswarm()
   Initialize particle positions with respect to parameter space boundaries

 Inputs:

 Return:
 */
void
nessi_pso_init (const int nindv, const int npts, const int npar,
		  const float modinit[npts][npar][3],
		  float q[nindv][npts][npar])
{
    for(unsigned int indv=0; indv<nindv; indv++){
        for(unsigned int ipts=0; ipts<npts; ipts++){
            for(unsigned int ipar=0; ipar<npar; ipar++){
                q[indv][ipts][ipar] = nessi_randpar(modinit[ipts][ipar][0],
						    modinit[ipts][ipar][1]);
            }
        }
    }   
    return;
}
