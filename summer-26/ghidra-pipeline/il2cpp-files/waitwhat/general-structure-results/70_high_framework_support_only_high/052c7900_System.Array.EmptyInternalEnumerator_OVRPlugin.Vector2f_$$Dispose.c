/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 052c7900
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined2 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose(void)

{
  uint uVar1;
  long lVar2;
  int unaff_w19;
  long *unaff_x20;
  
                    /* try { // try from 052c7900 to 053c7903 has its CatchHandler @ 052c79b8 */
  FUN_05950954(0x32,0);
  if ((unaff_w19 < 0) || (*(int *)((long)unaff_x20 + 0xc) <= unaff_w19)) {
    FUN_05950c3c(0);
  }
  lVar2 = *unaff_x20;
  if (lVar2 != 0) {
    uVar1 = (int)unaff_x20[1] + unaff_w19;
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined2 *)(lVar2 + (long)(int)uVar1 * 2 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


