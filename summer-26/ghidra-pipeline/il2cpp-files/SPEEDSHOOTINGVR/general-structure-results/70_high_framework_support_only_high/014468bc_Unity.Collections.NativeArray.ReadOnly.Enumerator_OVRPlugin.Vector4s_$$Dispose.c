/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 014468bc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__Dispose(void)

{
  long lVar1;
  undefined4 in_w8;
  undefined4 unaff_w19;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x26;
  undefined4 unaff_w27;
  int *unaff_x28;
  undefined8 in_stack_00000008;
  
  *(undefined4 *)(unaff_x20 + 0x20) = in_w8;
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (unaff_w22 < *(uint *)(unaff_x26 + 0x18)) {
    lVar1 = unaff_x26 + (long)(int)unaff_w22 * 0x10;
    *(undefined4 *)(lVar1 + 0x20) = unaff_w27;
    *(int *)(lVar1 + 0x24) = *unaff_x28 + -1;
    *(undefined4 *)(lVar1 + 0x28) = in_stack_00000008._4_4_;
    *(undefined4 *)(lVar1 + 0x2c) = unaff_w19;
    *unaff_x28 = unaff_w22 + 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


