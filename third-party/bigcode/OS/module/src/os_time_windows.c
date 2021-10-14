/****************************************************************
 *
 *        Copyright 2013, Big Switch Networks, Inc.
 *
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *        http://www.eclipse.org/legal/epl-v10.html
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 *
 ***************************************************************/

#include <target_utils/OS/os_config.h>
#include <target_utils/OS/os_time.h>

#if OS_CONFIG_INCLUDE_WINDOWS == 1

uint64_t
os_time_monotonic(void)
{
    return 0;
}

uint64_t
os_time_realtime(void)
{
    return 0;
}

uint64_t
os_time_thread(void)
{
    return 0;
}

#else
//int __not_empty__;
#endif

