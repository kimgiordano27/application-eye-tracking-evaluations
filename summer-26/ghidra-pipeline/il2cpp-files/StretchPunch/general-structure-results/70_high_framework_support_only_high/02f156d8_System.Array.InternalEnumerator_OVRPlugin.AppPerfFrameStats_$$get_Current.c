/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 02f156d8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x26;
  long unaff_x29;
  
  while (*(long *)(unaff_x20 + 0x18) != 0) {
    if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= unaff_x23) {
LAB_02f15748:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    FUN_02f123d0();
    do {
      do {
        unaff_x23 = unaff_x23 + 1;
        unaff_x24 = unaff_x24 + 0x10;
        if (unaff_x21 == unaff_x23) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        lVar2 = *(long *)(unaff_x20 + 0x18);
        if (lVar2 == 0) goto LAB_02f15744;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x23) goto LAB_02f15748;
      } while (*(int *)(lVar2 + unaff_x24) < 0);
      if (unaff_x22 == 0) goto LAB_02f15744;
      uVar1 = FUN_03604bc4();
    } while ((uVar1 & 1) != 0);
  }
LAB_02f15744:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


