/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeIntArray
ENTRY_POINT: 07533284
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeIntArray(void)

{
  bool in_ZR;
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (in_ZR) {
    *(code **)(unaff_x19 + 0x18) = FUN_03c67364;
  }
  else {
    if (unaff_x20 == 0) {
                    /* try { // try from 075332c8 to 076332ef has its CatchHandler @ 07533344 */
      uVar1 = thunk_FUN_03d3be88(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar1,0);
    }
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
  }
  *(code **)(unaff_x19 + 0x38) = FUN_03c67304;
  return;
}


