/*
This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this
file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#pragma once
//#include <list>
#include "EZ-Template/Auton.hpp"

#include <tuple>

using namespace std;
class AutonSelector
{
public:
  std::vector<Auton> Autons;
  int CurrentAutonPage;
  int AutonCount;
  AutonSelector();
  AutonSelector(std::vector<Auton> autons);
  void CallSelectedAuto();
  void PrintSelectedAuto();
  void AddAutons(std::vector<Auton> autons);
  //void AddAutons(std::vector<Auton> autons);
};
