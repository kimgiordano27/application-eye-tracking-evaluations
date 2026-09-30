/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 023433a8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  if (in_NG != in_OV) {
    FUN_033b2d60(0x17,0);
  }
  if ((*(byte *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  lVar1 = thunk_FUN_01de27b8();
  FUN_02341c2c(lVar1,unaff_w19,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148));
  if (lVar1 != 0) {
    FUN_033b4f38(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(lVar1 + 0x10),0,
                 unaff_w19,0);
    *(undefined4 *)(lVar1 + 0x18) = unaff_w19;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


