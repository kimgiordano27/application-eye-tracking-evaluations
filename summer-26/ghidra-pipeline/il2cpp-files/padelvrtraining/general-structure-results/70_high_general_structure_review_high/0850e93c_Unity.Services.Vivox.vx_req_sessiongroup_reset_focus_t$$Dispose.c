/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_reset_focus_t$$Dispose
ENTRY_POINT: 0850e93c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Unity_Services_Vivox_vx_req_sessiongroup_reset_focus_t__Dispose(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 == 0) {
                    /* try { // try from 0850e954 to 0860e95f has its CatchHandler @ 0850ee94 */
                    /* try { // try from 0850e964 to 0860e96b has its CatchHandler @ 0850eda4 */
    uStack_20 = 0;
    uStack_18 = 0;
    FUN_0708717c(&uStack_20,0,0,0);
  }
  else {
    uStack_18 = *(undefined8 *)(param_1 + 0x18);
    uStack_20 = *(undefined8 *)(param_1 + 0x10);
  }
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
                    /* try { // try from 0850e970 to 0860e977 has its CatchHandler @ 0850eda0 */
  return auVar1;
}


