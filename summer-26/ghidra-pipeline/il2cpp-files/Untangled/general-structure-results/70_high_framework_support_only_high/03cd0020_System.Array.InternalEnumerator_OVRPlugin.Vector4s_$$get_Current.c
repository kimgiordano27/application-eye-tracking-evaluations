/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 03cd0020
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__get_Current(void)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong uVar3;
  long lVar4;
  long unaff_x26;
  long unaff_x29;
  
  if (in_NG == in_OV) {
    uVar3 = 0;
    lVar4 = 0x20;
    do {
      lVar2 = *(long *)(unaff_x20 + 0x18);
      if (lVar2 == 0) goto LAB_03cd00cc;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_03cd00d0:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      if (-1 < *(int *)(lVar2 + lVar4)) {
        if (unaff_x22 == 0) {
LAB_03cd00cc:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar1 = FUN_05b3a40c();
        if ((uVar1 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_03cd00cc;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar3) goto LAB_03cd00d0;
          FUN_03cccc58();
        }
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (unaff_x21 != uVar3);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


