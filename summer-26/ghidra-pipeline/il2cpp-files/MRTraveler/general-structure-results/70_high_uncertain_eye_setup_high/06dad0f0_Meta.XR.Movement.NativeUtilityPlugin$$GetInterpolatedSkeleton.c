/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin$$GetInterpolatedSkeleton
ENTRY_POINT: 06dad0f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dad300) */

long Meta_XR_Movement_NativeUtilityPlugin__GetInterpolatedSkeleton(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  int unaff_w23;
  undefined8 in_stack_00000028;
  long in_stack_00000048;
  
  lVar4 = *(long *)(unaff_x21 + 0x30);
  *(long *)(unaff_x21 + 0x50) = param_1 + unaff_w23;
  if (lVar4 == 0) {
    if (*(long *)(unaff_x21 + 0x28) == 0) {
      lVar4 = FUN_06dac2d8();
      *(long *)(in_stack_00000048 + 0x28) = lVar4;
      thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x28),lVar4);
      unaff_x21 = in_stack_00000048;
      if (lVar4 != 0) {
        unaff_x20 = FUN_06dacd0c(in_stack_00000048);
        goto LAB_06dad068;
      }
    }
    *(undefined4 *)(unaff_x20 + 0x38) = 0;
    *(long *)(unaff_x21 + 0x40) = unaff_x20;
    thunk_FUN_03d233cc((long *)(unaff_x21 + 0x40));
    *(long *)(in_stack_00000048 + 0x30) = unaff_x20;
    thunk_FUN_03d233cc();
  }
  else {
    iVar1 = FUN_06dac99c();
    iVar2 = FUN_06dac99c(lVar4);
    if (iVar1 != iVar2) {
      *(undefined1 *)(unaff_x21 + 0x6a) = 1;
    }
    lVar4 = *(long *)(unaff_x21 + 0x40);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar3 = FUN_06dac99c(lVar4);
    *(ulong *)(unaff_x20 + 0x50) = *(long *)(lVar4 + 0x50) + (uVar3 & 0xffffffff);
    *(int *)(unaff_x20 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
    *(long *)(lVar4 + 0x30) = unaff_x20;
    thunk_FUN_03d233cc((long *)(lVar4 + 0x30));
    *(long *)(in_stack_00000048 + 0x40) = unaff_x20;
    thunk_FUN_03d233cc();
  }
  if ((*(byte *)(unaff_x20 + 0x3d) & 0xf0) == 0) {
    *(long *)(in_stack_00000048 + 0x48) = unaff_x20;
    thunk_FUN_03d233cc();
  }
LAB_06dad068:
  FUN_03bbe424(&stack0x00000008);
  if (in_stack_00000028._4_1_ != '\0') {
    thunk_FUN_03cdf404();
  }
  return unaff_x20;
}


