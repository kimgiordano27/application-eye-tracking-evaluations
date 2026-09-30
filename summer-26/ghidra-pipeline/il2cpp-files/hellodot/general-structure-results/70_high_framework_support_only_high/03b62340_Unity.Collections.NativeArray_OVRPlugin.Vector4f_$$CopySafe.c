/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 03b62340
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(void)

{
  long unaff_x19;
  uint unaff_w20;
  void *unaff_x21;
  long lVar1;
  
  FUN_04f522b8(0);
  lVar1 = *(long *)(unaff_x19 + 0x10);
  memcpy(&stack0x000000b0,unaff_x21,0xb0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  memcpy(&stack0x00000000,&stack0x000000b0,0xb0);
  if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
    memcpy((void *)(lVar1 + (long)(int)unaff_w20 * 0xb0 + 0x20),&stack0x00000000,0xb0);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


