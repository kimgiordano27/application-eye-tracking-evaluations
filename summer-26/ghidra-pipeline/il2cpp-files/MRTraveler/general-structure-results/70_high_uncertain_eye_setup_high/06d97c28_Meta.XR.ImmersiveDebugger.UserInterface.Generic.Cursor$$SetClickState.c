/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetClickState
ENTRY_POINT: 06d97c28
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d97ce4) */
/* WARNING: Removing unreachable block (ram,0x06d97c98) */
/* WARNING: Removing unreachable block (ram,0x06d97eac) */
/* WARNING: Removing unreachable block (ram,0x06d97ea4) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetClickState(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  uVar1 = FUN_0716fa40(*(undefined8 *)(unaff_x20 + 0x40),1000,0);
  plVar2 = *(long **)(unaff_x20 + 0x40);
  if ((uVar1 & 1) == 0) {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = (**(code **)(*plVar2 + 0x1a8))
                      (plVar2,0x3f3,**(undefined8 **)(*(long *)PTR_DAT_08e69d78 + 0xb8),
                       *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(*plVar2 + 0x1b0));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_071787d8(lVar3,0);
    uVar1 = FUN_0701d1d0(&stack0x00000008,0);
    if ((uVar1 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_045273d8(unaff_x19 + 2,&stack0x00000008);
      return;
    }
    FUN_0701d29c(&stack0x00000008,0);
  }
  else {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = (**(code **)(*plVar2 + 0x1e8))
                      (plVar2,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                       unaff_x19[0xe],1,*(undefined8 *)(unaff_x20 + 0x30),
                       *(undefined8 *)(*plVar2 + 0x1f0));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0717efdc(lVar3,*(undefined8 *)(unaff_x20 + 0x30),0);
    if (unaff_w25 < 0) {
      thunk_FUN_03cdf404(*(undefined8 *)(unaff_x20 + 0x40),0);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    in_stack_00000018._4_1_ = '\0';
    FUN_0716f8f0(uVar4,(long)&stack0x00000018 + 4,0);
    *(undefined1 *)(unaff_x20 + 0x28) = 0;
    if ((unaff_w25 < 0) && (in_stack_00000018._4_1_ != '\0')) {
      thunk_FUN_03cdf404(uVar4,0);
    }
    lVar3 = FUN_06d95dc8();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_071787d8(lVar3,0);
    uVar1 = FUN_0701d1d0(&stack0x00000008,0);
    if ((uVar1 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_045273d8(unaff_x19 + 2,&stack0x00000008);
      return;
    }
    FUN_0701d29c(&stack0x00000008,0);
  }
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701e078(unaff_x19 + 2,0);
  return;
}


