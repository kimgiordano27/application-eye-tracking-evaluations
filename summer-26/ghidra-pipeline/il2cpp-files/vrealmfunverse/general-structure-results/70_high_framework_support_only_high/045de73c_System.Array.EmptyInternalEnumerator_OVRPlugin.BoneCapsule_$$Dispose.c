/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 045de73c
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


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__Dispose(void)

{
  long lVar1;
  long unaff_x19;
  uint unaff_w25;
  long unaff_x26;
  undefined8 *unaff_x28;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (unaff_w25 < *(uint *)(unaff_x26 + 0x18)) {
    uVar3 = unaff_x28[1];
    uVar2 = *unaff_x28;
    lVar1 = unaff_x19 + (long)(int)unaff_w25 * 0x24;
    *(undefined8 *)(lVar1 + 0x1c) = unaff_x28[2];
    *(undefined8 *)(lVar1 + 0x14) = uVar3;
    *(undefined8 *)(lVar1 + 0xc) = uVar2;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


