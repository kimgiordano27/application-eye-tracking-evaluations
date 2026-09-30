/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$MoveNext
ENTRY_POINT: 021af8b8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext(uint param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  int iVar4;
  uint uVar5;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  param_1 = param_1 & 0x7fffffff;
  iVar4 = 0;
  if (uVar1 != 0) {
    iVar4 = (int)param_1 / (int)uVar1;
  }
  uVar5 = param_1 - iVar4 * uVar1;
  if (uVar5 < uVar1) {
    if (unaff_x23 == 0) {
LAB_021afae0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar5 = *(int *)(unaff_x22 + (ulong)uVar5 * 4 + 0x20) - 1;
    if (uVar5 < uVar1) {
      iVar4 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar5 * 0x18 + 0x20) == param_1) {
          plVar2 = (long *)FUN_01abe62c(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_021afadc;
          if (plVar2 == (long *)0x0) goto LAB_021afae0;
          uVar3 = (**(code **)(*plVar2 + 0x1b8))
                            (plVar2,*(undefined4 *)(unaff_x23 + (long)(int)uVar5 * 0x18 + 0x28),
                             in_stack_00000008._4_4_,*(undefined8 *)(*plVar2 + 0x1c0));
          if ((uVar3 & 1) != 0) {
            return uVar5;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar5) goto LAB_021afadc;
        uVar5 = *(uint *)(unaff_x23 + (long)(int)uVar5 * 0x18 + 0x24);
        if ((int)uVar1 <= iVar4) {
          FUN_02befd44(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar4 = iVar4 + 1;
      } while (uVar5 < uVar1);
    }
    return uVar5;
  }
LAB_021afadc:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


