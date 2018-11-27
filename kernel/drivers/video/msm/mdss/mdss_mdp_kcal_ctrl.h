/*
 * drivers/video kcal
 *
 * Copyright (c) 2018, Andrei Cojocar <cojocar.andrei@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _LINUX_KCAL_HUAWEI_NOVA_H
#define _LINUX_KCAL_HUAWEI_NOVA_H

#define DEBUG_KCAL				0

extern int get_adjust_value(void);

extern int mdp_pp_lut_set_external(struct mdp_pcc_cfg_data *config);

#endif	/* _LINUX_KCAL_HUAWEI_NOVA_H */
