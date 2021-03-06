
/*  © Copyright CERN, 2015. All rights not expressly granted are reserved.

    The stub of this file was generated by quasar (https://github.com/quasar-team/quasar/)

    Quasar is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public Licence as published by
    the Free Software Foundation, either version 3 of the Licence.
    Quasar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public Licence for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Quasar.  If not, see <http://www.gnu.org/licenses/>.


 */


#include <Configuration.hxx> // TODO; should go away, is already in Base class for ages

#include <DSensors.h>
#include <DWIB.h>
#include <ASSensors.h>

namespace Device
{
// 1111111111111111111111111111111111111111111111111111111111111111111111111
// 1     GENERATED CODE STARTS HERE AND FINISHES AT SECTION 2              1
// 1     Users don't modify this code!!!!                                  1
// 1     If you modify this code you may start a fire or a flood somewhere,1
// 1     and some human being may possible cease to exist. You don't want  1
// 1     to be charged with that!                                          1
// 1111111111111111111111111111111111111111111111111111111111111111111111111






// 2222222222222222222222222222222222222222222222222222222222222222222222222
// 2     SEMI CUSTOM CODE STARTS HERE AND FINISHES AT SECTION 3            2
// 2     (code for which only stubs were generated automatically)          2
// 2     You should add the implementation but dont alter the headers      2
// 2     (apart from constructor, in which you should complete initializati2
// 2     on list)                                                          2
// 2222222222222222222222222222222222222222222222222222222222222222222222222

/* sample ctr */
DSensors::DSensors (
    const Configuration::Sensors& config,
    Parent_DSensors* parent
):
    Base_DSensors( config, parent)

    /* fill up constructor initialization list here */
{
    /* fill up constructor body here */
}

/* sample dtr */
DSensors::~DSensors ()
{
}

/* delegates for cachevariables */



/* delegators for methods */
UaStatus DSensors::callPoll (
    OpcUa_Boolean& success
)
{
    wib::GetSensors req;
    wib::GetSensors::Sensors rep;
    if (getParent()->wib.send_command(req,rep,10000)) {
        auto *as = getAddressSpaceLink();
        as->setLtc2990_4e_v0(rep.ltc2990_4e_voltages(0), OpcUa_Good);
        as->setLtc2990_4e_v1(rep.ltc2990_4e_voltages(1), OpcUa_Good);
        as->setLtc2990_4e_v2(rep.ltc2990_4e_voltages(2), OpcUa_Good);
        as->setLtc2990_4e_v3(rep.ltc2990_4e_voltages(3), OpcUa_Good);
        
        as->setLtc2990_4c_v0(rep.ltc2990_4c_voltages(0), OpcUa_Good);
        as->setLtc2990_4c_v1(rep.ltc2990_4c_voltages(1), OpcUa_Good);
        as->setLtc2990_4c_v2(rep.ltc2990_4c_voltages(2), OpcUa_Good);
        as->setLtc2990_4c_v3(rep.ltc2990_4c_voltages(3), OpcUa_Good);
        
        as->setLtc2991_48_v0(rep.ltc2991_48_voltages(0), OpcUa_Good);
        as->setLtc2991_48_v1(rep.ltc2991_48_voltages(1), OpcUa_Good);
        as->setLtc2991_48_v2(rep.ltc2991_48_voltages(2), OpcUa_Good);
        as->setLtc2991_48_v3(rep.ltc2991_48_voltages(3), OpcUa_Good);
        as->setLtc2991_48_v4(rep.ltc2991_48_voltages(4), OpcUa_Good);
        as->setLtc2991_48_v5(rep.ltc2991_48_voltages(5), OpcUa_Good);
        as->setLtc2991_48_v6(rep.ltc2991_48_voltages(6), OpcUa_Good);
        as->setLtc2991_48_v7(rep.ltc2991_48_voltages(7), OpcUa_Good);
        
        as->setAd7414_49_temp(rep.ad7414_49_temp(), OpcUa_Good);
        as->setAd7414_4d_temp(rep.ad7414_4d_temp(), OpcUa_Good);
        as->setAd7414_4a_temp(rep.ad7414_4a_temp(), OpcUa_Good);
        
        as->setLtc2499_15_temp0(rep.ltc2499_15_temps(0), OpcUa_Good);
        as->setLtc2499_15_temp1(rep.ltc2499_15_temps(1), OpcUa_Good);
        as->setLtc2499_15_temp2(rep.ltc2499_15_temps(2), OpcUa_Good);
        as->setLtc2499_15_temp3(rep.ltc2499_15_temps(3), OpcUa_Good);
        as->setLtc2499_15_temp4(rep.ltc2499_15_temps(4), OpcUa_Good);
        as->setLtc2499_15_temp5(rep.ltc2499_15_temps(5), OpcUa_Good);
        as->setLtc2499_15_temp6(rep.ltc2499_15_temps(6), OpcUa_Good);
        
        as->setFemb0_dc2dc_ltc2991_v0(rep.femb0_dc2dc_ltc2991_voltages(0), OpcUa_Good);
        as->setFemb0_dc2dc_ltc2991_v1(rep.femb0_dc2dc_ltc2991_voltages(1), OpcUa_Good);
        as->setFemb0_dc2dc_ltc2991_v2(rep.femb0_dc2dc_ltc2991_voltages(2), OpcUa_Good);
        as->setFemb0_dc2dc_ltc2991_v3(rep.femb0_dc2dc_ltc2991_voltages(3), OpcUa_Good);
        as->setFemb0_dc2dc_ltc2991_v4(rep.femb0_dc2dc_ltc2991_voltages(4), OpcUa_Good);
        as->setFemb0_dc2dc_ltc2991_v5(rep.femb0_dc2dc_ltc2991_voltages(5), OpcUa_Good);
        as->setFemb0_dc2dc_ltc2991_v6(rep.femb0_dc2dc_ltc2991_voltages(6), OpcUa_Good);
        as->setFemb0_dc2dc_ltc2991_v7(rep.femb0_dc2dc_ltc2991_voltages(7), OpcUa_Good);
        
        as->setFemb1_dc2dc_ltc2991_v0(rep.femb1_dc2dc_ltc2991_voltages(0), OpcUa_Good);
        as->setFemb1_dc2dc_ltc2991_v1(rep.femb1_dc2dc_ltc2991_voltages(1), OpcUa_Good);
        as->setFemb1_dc2dc_ltc2991_v2(rep.femb1_dc2dc_ltc2991_voltages(2), OpcUa_Good);
        as->setFemb1_dc2dc_ltc2991_v3(rep.femb1_dc2dc_ltc2991_voltages(3), OpcUa_Good);
        as->setFemb1_dc2dc_ltc2991_v4(rep.femb1_dc2dc_ltc2991_voltages(4), OpcUa_Good);
        as->setFemb1_dc2dc_ltc2991_v5(rep.femb1_dc2dc_ltc2991_voltages(5), OpcUa_Good);
        as->setFemb1_dc2dc_ltc2991_v6(rep.femb1_dc2dc_ltc2991_voltages(6), OpcUa_Good);
        as->setFemb1_dc2dc_ltc2991_v7(rep.femb1_dc2dc_ltc2991_voltages(7), OpcUa_Good);
        
        as->setFemb2_dc2dc_ltc2991_v0(rep.femb2_dc2dc_ltc2991_voltages(0), OpcUa_Good);
        as->setFemb2_dc2dc_ltc2991_v1(rep.femb2_dc2dc_ltc2991_voltages(1), OpcUa_Good);
        as->setFemb2_dc2dc_ltc2991_v2(rep.femb2_dc2dc_ltc2991_voltages(2), OpcUa_Good);
        as->setFemb2_dc2dc_ltc2991_v3(rep.femb2_dc2dc_ltc2991_voltages(3), OpcUa_Good);
        as->setFemb2_dc2dc_ltc2991_v4(rep.femb2_dc2dc_ltc2991_voltages(4), OpcUa_Good);
        as->setFemb2_dc2dc_ltc2991_v5(rep.femb2_dc2dc_ltc2991_voltages(5), OpcUa_Good);
        as->setFemb2_dc2dc_ltc2991_v6(rep.femb2_dc2dc_ltc2991_voltages(6), OpcUa_Good);
        as->setFemb2_dc2dc_ltc2991_v7(rep.femb2_dc2dc_ltc2991_voltages(7), OpcUa_Good);
        
        as->setFemb3_dc2dc_ltc2991_v0(rep.femb3_dc2dc_ltc2991_voltages(0), OpcUa_Good);
        as->setFemb3_dc2dc_ltc2991_v1(rep.femb3_dc2dc_ltc2991_voltages(1), OpcUa_Good);
        as->setFemb3_dc2dc_ltc2991_v2(rep.femb3_dc2dc_ltc2991_voltages(2), OpcUa_Good);
        as->setFemb3_dc2dc_ltc2991_v3(rep.femb3_dc2dc_ltc2991_voltages(3), OpcUa_Good);
        as->setFemb3_dc2dc_ltc2991_v4(rep.femb3_dc2dc_ltc2991_voltages(4), OpcUa_Good);
        as->setFemb3_dc2dc_ltc2991_v5(rep.femb3_dc2dc_ltc2991_voltages(5), OpcUa_Good);
        as->setFemb3_dc2dc_ltc2991_v6(rep.femb3_dc2dc_ltc2991_voltages(6), OpcUa_Good);
        as->setFemb3_dc2dc_ltc2991_v7(rep.femb3_dc2dc_ltc2991_voltages(7), OpcUa_Good);
        
        as->setFemb_ldo_a0_ltc2991_v0(rep.femb_ldo_a0_ltc2991_voltages(0), OpcUa_Good);
        as->setFemb_ldo_a0_ltc2991_v1(rep.femb_ldo_a0_ltc2991_voltages(1), OpcUa_Good);
        as->setFemb_ldo_a0_ltc2991_v2(rep.femb_ldo_a0_ltc2991_voltages(2), OpcUa_Good);
        as->setFemb_ldo_a0_ltc2991_v3(rep.femb_ldo_a0_ltc2991_voltages(3), OpcUa_Good);
        as->setFemb_ldo_a0_ltc2991_v4(rep.femb_ldo_a0_ltc2991_voltages(4), OpcUa_Good);
        as->setFemb_ldo_a0_ltc2991_v5(rep.femb_ldo_a0_ltc2991_voltages(5), OpcUa_Good);
        as->setFemb_ldo_a0_ltc2991_v6(rep.femb_ldo_a0_ltc2991_voltages(6), OpcUa_Good);
        as->setFemb_ldo_a0_ltc2991_v7(rep.femb_ldo_a0_ltc2991_voltages(7), OpcUa_Good);
        
        as->setFemb_ldo_a1_ltc2991_v0(rep.femb_ldo_a1_ltc2991_voltages(0), OpcUa_Good);
        as->setFemb_ldo_a1_ltc2991_v1(rep.femb_ldo_a1_ltc2991_voltages(1), OpcUa_Good);
        as->setFemb_ldo_a1_ltc2991_v2(rep.femb_ldo_a1_ltc2991_voltages(2), OpcUa_Good);
        as->setFemb_ldo_a1_ltc2991_v3(rep.femb_ldo_a1_ltc2991_voltages(3), OpcUa_Good);
        as->setFemb_ldo_a1_ltc2991_v4(rep.femb_ldo_a1_ltc2991_voltages(4), OpcUa_Good);
        as->setFemb_ldo_a1_ltc2991_v5(rep.femb_ldo_a1_ltc2991_voltages(5), OpcUa_Good);
        as->setFemb_ldo_a1_ltc2991_v6(rep.femb_ldo_a1_ltc2991_voltages(6), OpcUa_Good);
        as->setFemb_ldo_a1_ltc2991_v7(rep.femb_ldo_a1_ltc2991_voltages(7), OpcUa_Good);
        
        as->setFemb_bias_ltc2991_v0(rep.femb_bias_ltc2991_voltages(0), OpcUa_Good);
        as->setFemb_bias_ltc2991_v1(rep.femb_bias_ltc2991_voltages(1), OpcUa_Good);
        as->setFemb_bias_ltc2991_v2(rep.femb_bias_ltc2991_voltages(2), OpcUa_Good);
        as->setFemb_bias_ltc2991_v3(rep.femb_bias_ltc2991_voltages(3), OpcUa_Good);
        as->setFemb_bias_ltc2991_v4(rep.femb_bias_ltc2991_voltages(4), OpcUa_Good);
        as->setFemb_bias_ltc2991_v5(rep.femb_bias_ltc2991_voltages(5), OpcUa_Good);
        as->setFemb_bias_ltc2991_v6(rep.femb_bias_ltc2991_voltages(6), OpcUa_Good);
        as->setFemb_bias_ltc2991_v7(rep.femb_bias_ltc2991_voltages(7), OpcUa_Good);
        
        success = true;
        return OpcUa_Good;
    } else {
        return OpcUa_Bad;
    }
}

// 3333333333333333333333333333333333333333333333333333333333333333333333333
// 3     FULLY CUSTOM CODE STARTS HERE                                     3
// 3     Below you put bodies for custom methods defined for this class.   3
// 3     You can do whatever you want, but please be decent.               3
// 3333333333333333333333333333333333333333333333333333333333333333333333333

void DSensors::update() {
    auto *as = getAddressSpaceLink();
    if (as->getPoll_period() > 0 && poll_timer.elapsed() > as->getPoll_period()) {
        poll_timer.reset();
        OpcUa_Boolean success;
        callPoll(success);
    }
}

}
