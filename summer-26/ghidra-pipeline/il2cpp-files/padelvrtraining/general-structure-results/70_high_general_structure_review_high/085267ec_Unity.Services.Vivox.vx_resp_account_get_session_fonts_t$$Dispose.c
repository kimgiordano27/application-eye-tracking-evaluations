/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_account_get_session_fonts_t$$Dispose
ENTRY_POINT: 085267ec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
Unity_Services_Vivox_vx_resp_account_get_session_fonts_t__Dispose(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  if (param_1 == 0) {
    uVar2 = thunk_FUN_03d2f1fc();
    *(undefined8 *)(unaff_x22 + 0xda8) = uVar2;
  }
  uVar2 = thunk_FUN_03d2f51c(param_2);
  uVar1 = (**(code **)(unaff_x22 + 0xda8))();
  thunk_FUN_03d2f510(uVar2);
  return uVar1;
}


