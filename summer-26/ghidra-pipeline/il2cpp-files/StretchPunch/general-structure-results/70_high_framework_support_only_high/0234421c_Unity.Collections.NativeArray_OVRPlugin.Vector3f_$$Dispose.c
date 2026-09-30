/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 0234421c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose(void)

{
  uint in_w8;
  long lVar1;
  long unaff_x19;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  lVar1 = *(long *)(unaff_x19 + 0x10);
  uStack0000000000000070 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (in_w8 < *(uint *)(lVar1 + 0x18)) {
    lVar1 = lVar1 + (long)(int)in_w8 * 0x38;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    thunk_FUN_01e10808(lVar1 + 0x20,0);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


