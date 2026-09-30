/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 059cfb44
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose(long param_1,int param_2)

{
  int iVar1;
  int unaff_w20;
  int unaff_w21;
  
  if (param_2 < 0) {
    FUN_07506bd4(0);
  }
  if (unaff_w20 < 0) {
                    /* try { // try from 059cfbd4 to 05acfbe3 has its CatchHandler @ 059cfcc8 */
    FUN_07506818(0x10,4,0);
  }
                    /* try { // try from 059cfb50 to 05acfbb3 has its CatchHandler @ 059cfcd4 */
  if (*(int *)(param_1 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_0750636c(0x17,0);
  }
  if (0 < unaff_w20) {
    iVar1 = *(int *)(param_1 + 0x18) - unaff_w20;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 - unaff_w21 != 0 && unaff_w21 <= iVar1) {
      FUN_07508590(*(undefined8 *)(param_1 + 0x10),unaff_w20 + unaff_w21,
                   *(undefined8 *)(param_1 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
      iVar1 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    FUN_075082e0(*(undefined8 *)(param_1 + 0x10),iVar1,unaff_w20,0);
    return;
  }
                    /* try { // try from 059cfbf0 to 05acfbf3 has its CatchHandler @ 059cfccc */
  return;
}


