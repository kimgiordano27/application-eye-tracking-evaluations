/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 047a77f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom
               (long param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint in_w9;
  uint in_w10;
  
                    /* try { // try from 047a77fc to 048a7857 has its CatchHandler @ 047a7690 */
  if (in_w10 <= in_w9) {
    in_w9 = in_w10;
  }
  uVar1 = 4;
  if (param_1 != 0) {
    uVar1 = in_w9;
  }
  if ((int)uVar1 <= (int)param_3) {
    uVar1 = param_3;
  }
  FUN_047a6b6c(param_2,uVar1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xf0));
  return;
}


