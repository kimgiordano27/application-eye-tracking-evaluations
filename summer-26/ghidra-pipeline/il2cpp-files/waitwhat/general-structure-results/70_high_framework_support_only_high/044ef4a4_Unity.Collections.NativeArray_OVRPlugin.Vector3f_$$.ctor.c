/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 044ef4a4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint unaff_w21;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_05950c3c();
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (unaff_w21 < *(uint *)(lVar1 + 0x18)) {
    uVar3 = unaff_x20[1];
    uVar2 = *unaff_x20;
    lVar1 = lVar1 + (long)(int)unaff_w21 * 0x18;
    *(undefined8 *)(lVar1 + 0x30) = unaff_x20[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


