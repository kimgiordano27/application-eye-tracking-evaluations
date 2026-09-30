/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 03d50f80
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__Dispose(void)

{
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x24 + 0xc0) + 0x10) + 0x28)) {
    unaff_x21 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x23,unaff_x21,unaff_x22);
  if ((*(byte *)(unaff_x24 + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  FUN_032d5cbc();
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  FUN_02da0a44();
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


