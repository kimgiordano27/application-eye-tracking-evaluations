/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 06e268d8
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe
               (long param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_08d9d780(0);
  }
  if (param_3 < 0) {
    FUN_08d9d3c4(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_08d9cf18(0x17,0);
  }
  if (0 < param_3) {
    iVar1 = *(int *)(param_1 + 0x18) - param_3;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 - param_2 != 0 && param_2 <= iVar1) {
      FUN_08d9f1fc(*(undefined8 *)(param_1 + 0x10),param_3 + param_2,*(undefined8 *)(param_1 + 0x10)
                   ,param_2,iVar1 - param_2,0);
      iVar1 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    FUN_08d9ef4c(*(undefined8 *)(param_1 + 0x10),iVar1,param_3,0);
    return;
  }
  return;
}


