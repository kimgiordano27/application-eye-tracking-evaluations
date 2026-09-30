/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_sessiongroup_reset_focus_t$$Dispose
ENTRY_POINT: 0865d524
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_resp_sessiongroup_reset_focus_t__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x21;
  
  if (*(long *)(unaff_x21 + 0x280) == 0) {
    uVar1 = thunk_FUN_040b519c();
    *(undefined8 *)(unaff_x21 + 0x280) = uVar1;
  }
  uVar1 = thunk_FUN_040b5448();
  (**(code **)(unaff_x21 + 0x280))(param_2,uVar1);
  thunk_FUN_040b543c(uVar1);
  return;
}


