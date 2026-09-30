/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopySafe
ENTRY_POINT: 0399aab4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopySafe
               (long param_1,long param_2,void *param_3)

{
  uint uVar1;
  undefined4 in_w9;
  
  *(undefined4 *)(param_2 + 0x1c) = in_w9;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)uVar1 * 0x1b0;
    *(uint *)(param_2 + 0x18) = uVar1 + 1;
    memmove((void *)(param_1 + 0x20),param_3,0x1b0);
    thunk_FUN_02bb0e9c(param_1 + 0x20,0);
    return;
  }
  memcpy(&stack0x00000000,param_3,0x1b0);
  FUN_0399ab40(param_2);
  return;
}


