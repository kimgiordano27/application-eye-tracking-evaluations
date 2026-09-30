/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 02f15688
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext(code *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong uVar3;
  long unaff_x24;
  long lVar4;
  long unaff_x26;
  long unaff_x29;
  
  (*param_1)();
  if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68();
  }
  if (0 < (int)unaff_x21) {
    uVar3 = 0;
    lVar4 = 0x20;
    do {
      lVar2 = *(long *)(unaff_x20 + 0x18);
      if (lVar2 == 0) goto LAB_02f15744;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_02f15748:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar2 + lVar4)) {
        if (unaff_x22 == 0) {
LAB_02f15744:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar1 = FUN_03604bc4();
        if ((uVar1 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15744;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar3) goto LAB_02f15748;
          FUN_02f123d0();
        }
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (unaff_x21 != uVar3);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


