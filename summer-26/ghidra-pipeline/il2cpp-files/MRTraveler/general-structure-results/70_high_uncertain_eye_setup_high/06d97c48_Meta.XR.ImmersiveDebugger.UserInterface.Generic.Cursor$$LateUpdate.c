/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$LateUpdate
ENTRY_POINT: 06d97c48
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d97ce4) */
/* WARNING: Removing unreachable block (ram,0x06d97c98) */
/* WARNING: Removing unreachable block (ram,0x06d97eac) */
/* WARNING: Removing unreachable block (ram,0x06d97ea4) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000008;
  char cStack000000000000001c;
  
  lVar1 = (**(code **)(*param_1 + 0x1e8))
                    (param_1,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                     unaff_x19[0xe],1,*(undefined8 *)(unaff_x20 + 0x30),
                     *(undefined8 *)(*param_1 + 0x1f0));
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_0717efdc(lVar1,*(undefined8 *)(unaff_x20 + 0x30),0);
  if (unaff_w25 < 0) {
                    /* try { // try from 06d97c80 to 06e980d7 has its CatchHandler @ 06d97c80
                       catch() { ... } // from try @ 06d97c80 with catch @ 06d97c80
                       catch() { ... } // from try @ 06d98124 with catch @ 06d97c80
                       catch() { ... } // from try @ 06d981c8 with catch @ 06d97c80
                       catch() { ... } // from try @ 06d98228 with catch @ 06d97c80
                       catch() { ... } // from try @ 06d98260 with catch @ 06d97c80
                       catch() { ... } // from try @ 06d98670 with catch @ 06d97c80 */
    thunk_FUN_03cdf404(*(undefined8 *)(unaff_x20 + 0x40),0);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  cStack000000000000001c = '\0';
  FUN_0716f8f0(uVar3,&stack0x0000001c,0);
  *(undefined1 *)(unaff_x20 + 0x28) = 0;
  if ((unaff_w25 < 0) && (cStack000000000000001c != '\0')) {
    thunk_FUN_03cdf404(uVar3,0);
  }
  lVar1 = FUN_06d95dc8();
  if (lVar1 != 0) {
    in_stack_00000008 = FUN_071787d8(lVar1,0);
    uVar2 = FUN_0701d1d0(&stack0x00000008,0);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_045273d8(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      FUN_0701d29c(&stack0x00000008,0);
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0701e078(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


