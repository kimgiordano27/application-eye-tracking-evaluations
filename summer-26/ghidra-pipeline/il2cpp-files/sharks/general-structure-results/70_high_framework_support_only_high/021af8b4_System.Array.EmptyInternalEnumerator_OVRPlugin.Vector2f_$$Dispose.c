/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 021af8b4
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose(void)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x19;
  int iVar5;
  uint uVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  uVar2 = FUN_02bccfd0();
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar5 = 0;
  if (uVar1 != 0) {
    iVar5 = (int)uVar2 / (int)uVar1;
  }
  uVar6 = uVar2 - iVar5 * uVar1;
  if (uVar6 < uVar1) {
    if (unaff_x23 == 0) {
LAB_021afae0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar6 = *(int *)(unaff_x22 + (ulong)uVar6 * 4 + 0x20) - 1;
    if (uVar6 < uVar1) {
      iVar5 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar6 * 0x18 + 0x20) == uVar2) {
          plVar3 = (long *)FUN_01abe62c(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_021afadc;
          if (plVar3 == (long *)0x0) goto LAB_021afae0;
          uVar4 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined4 *)(unaff_x23 + (long)(int)uVar6 * 0x18 + 0x28),
                             in_stack_00000008._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
          if ((uVar4 & 1) != 0) {
            return uVar6;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar6) goto LAB_021afadc;
        uVar6 = *(uint *)(unaff_x23 + (long)(int)uVar6 * 0x18 + 0x24);
        if ((int)uVar1 <= iVar5) {
          FUN_02befd44(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar5 = iVar5 + 1;
      } while (uVar6 < uVar1);
    }
    return uVar6;
  }
LAB_021afadc:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


