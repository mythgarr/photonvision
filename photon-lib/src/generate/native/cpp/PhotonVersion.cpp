/*
 * Copyright (C) Photon Vision.
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <string.h>
#include <regex>

/*
 * Autogenerated file! Do not manually edit this file. This version is
 * regenerated any time the publish task is run, or when this file is deleted.
 */

static const char* dev_ = "dev";

namespace photon {
  namespace PhotonVersion {
    const char* versionString = "dev-v2024.3.1-22-g38e2fdef";
    const char* buildDate = "2024-5-29 10:05:11";
    const bool isRelease = strncmp(dev_, versionString, strlen(dev_)) != 0;
  }
}
