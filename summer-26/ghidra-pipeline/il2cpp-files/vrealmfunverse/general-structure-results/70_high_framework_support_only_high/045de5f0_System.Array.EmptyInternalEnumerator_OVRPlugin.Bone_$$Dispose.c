/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 045de5f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__Dispose(void)

{
  int in_w8;
  long lVar1;
  int *in_x11;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w24;
  long unaff_x26;
  undefined4 unaff_w27;
  undefined8 *unaff_x28;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000028;
  
  *(int *)(unaff_x20 + 0x28) = in_w8 + -1;
  if (unaff_w19 < unaff_w24) {
    lVar1 = unaff_x26 + (long)(int)unaff_w19 * 0x24;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar1 + 0x24);
    *(undefined4 *)(lVar1 + 0x20) = unaff_w27;
    *(int *)(lVar1 + 0x24) = *in_x11 + -1;
    *(undefined4 *)(lVar1 + 0x28) = in_stack_00000028._4_4_;
    uVar3 = unaff_x28[1];
    uVar2 = *unaff_x28;
    *(undefined8 *)(lVar1 + 0x3c) = unaff_x28[2];
    *(undefined8 *)(lVar1 + 0x34) = uVar3;
    *(undefined8 *)(lVar1 + 0x2c) = uVar2;
    *in_x11 = unaff_w19 + 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


