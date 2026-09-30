/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_add_session_t$$Dispose
ENTRY_POINT: 08620928
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16] Unity_Services_Vivox_vx_req_sessiongroup_add_session_t__Dispose(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  if (param_1 == 0) {
    uStack0000000000000000 = 0;
    uStack0000000000000008 = 0;
    FUN_0758bea0();
  }
  else {
    uStack0000000000000008 = *(undefined8 *)(param_1 + 0x18);
    uStack0000000000000000 = *(undefined8 *)(param_1 + 0x10);
  }
  auVar1._8_8_ = uStack0000000000000008;
  auVar1._0_8_ = uStack0000000000000000;
  return auVar1;
}


