/*
 *  In The Name Of God.
 * <main.cpp>
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * @MG_Ramezani. 2019 10 9
 * g1999raemzani@gmail.com
 */
#include <iostream>
#include <ctime>
#include "calcpraye.h"
#include <fstream>
#include <string>
#include <string.h>

int main (void)
{
    /*double times[AzanTimesCount];
    giveMeAllTime(times);
    for(int i=0; i < AzanTimesCount; ++i)
        std::cout << TimeName[i] << " : " <<
            AzanTime::float_time_to_time24(times[i]).c_str() << std::endl;*/
    for(int i=0; i < 1000; ++i)
        std::cout << (strcmp(cityName[i][i], "استان تهران") == 0 ? cityName[i][i] : " ") << std::endl;
    return 0;
}
