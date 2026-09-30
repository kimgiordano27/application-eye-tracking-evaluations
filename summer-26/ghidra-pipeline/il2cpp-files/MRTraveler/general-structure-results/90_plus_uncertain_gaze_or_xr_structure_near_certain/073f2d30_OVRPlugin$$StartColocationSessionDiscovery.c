/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 073f2d30
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16] OVRPlugin__StartColocationSessionDiscovery(long param_1)

{
  bool in_ZR;
  undefined4 unaff_w19;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (!in_ZR) {
    return ZEXT816(0);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_073f00a0(param_1,unaff_w19);
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}


