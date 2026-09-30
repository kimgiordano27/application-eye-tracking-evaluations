/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 06ad7f84
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__Dispose(void)

{
  long lVar1;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar2;
  
  lVar2 = unaff_x22 + 0x30;
  while (unaff_x23 < *(uint *)(unaff_x22 + 0x18)) {
    if (-1 < *(int *)(lVar2 + -0x10)) {
      FUN_05063ae4();
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) break;
      lVar1 = unaff_x20 + (long)(int)unaff_w21 * 0x10;
      unaff_w21 = unaff_w21 + 1;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    unaff_x23 = unaff_x23 + 1;
    lVar2 = lVar2 + 0x18;
    if (unaff_x24 == unaff_x23) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


