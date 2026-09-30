/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 03b613bc
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe(long param_1,uint param_2)

{
  uint in_w8;
  long lVar1;
  uint uVar2;
  
  if (in_w8 <= param_2) {
    FUN_04f522b8(0);
    in_w8 = *(uint *)(param_1 + 0x18);
  }
  uVar2 = in_w8 - 1;
  *(uint *)(param_1 + 0x18) = uVar2;
  if (uVar2 - param_2 != 0 && (int)param_2 <= (int)uVar2) {
    FUN_04f53d58(*(undefined8 *)(param_1 + 0x10),param_2 + 1,*(undefined8 *)(param_1 + 0x10),param_2
                 ,uVar2 - param_2,0);
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  memset(&stack0x00000160,0,0x160);
  if (lVar1 != 0) {
    memcpy(&stack0x00000000,&stack0x00000160,0x160);
    if (uVar2 < *(uint *)(lVar1 + 0x18)) {
      memcpy((void *)(lVar1 + (long)(int)uVar2 * 0x160 + 0x20),&stack0x00000000,0x160);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


