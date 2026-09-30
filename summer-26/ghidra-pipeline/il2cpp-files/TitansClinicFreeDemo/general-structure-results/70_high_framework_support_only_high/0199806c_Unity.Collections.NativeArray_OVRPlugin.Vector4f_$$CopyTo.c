/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 0199806c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo(void)

{
  long unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  memcpy(&stack0x00000000,&stack0x00000070,0x6c);
  if (unaff_w20 < *(uint *)(unaff_x22 + 0x18)) {
    memcpy((void *)(unaff_x22 + (long)(int)unaff_w20 * 0x6c + 0x20),&stack0x00000000,0x6c);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


