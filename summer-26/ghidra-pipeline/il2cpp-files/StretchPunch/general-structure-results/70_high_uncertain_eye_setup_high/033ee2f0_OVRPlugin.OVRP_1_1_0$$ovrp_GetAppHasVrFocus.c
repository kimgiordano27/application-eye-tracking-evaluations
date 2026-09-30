/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppHasVrFocus
ENTRY_POINT: 033ee2f0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_1_0__ovrp_GetAppHasVrFocus(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  long in_stack_00000018;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x468));
  *(undefined1 *)(unaff_x23 + 0xb4b) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if (DAT_044a6c26 == '\0') {
    FUN_01d7d918(StringLiteral_9323);
    FUN_01d7d918(StringLiteral_1209);
    DAT_044a6c26 = '\x01';
  }
  if ((unaff_x19 & 0xff0000) == 0) {
    iStack000000000000000c = (int)(unaff_x19 >> 0x20);
    iStack0000000000000014 = (int)((ulong)unaff_x20 >> 0x20);
  }
  else {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (*(int *)(*(long *)StringLiteral_9323 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033edad0(&stack0x00000008,(uint)unaff_x19 >> 0x10 & 0xff,2);
  }
  iVar3 = iStack0000000000000010;
  if (iStack0000000000000014 == 0 && iStack000000000000000c == 0) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (iStack0000000000000008 < 0) {
      iVar3 = -iVar3;
      if (0 < iVar3) goto LAB_033ee3ec;
    }
    else if (iVar3 < 0) goto LAB_033ee3ec;
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000018) {
      return iVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_033ee3ec:
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar1 = thunk_FUN_01de27b8();
  uVar2 = thunk_FUN_01dd295c(StringLiteral_4783);
  FUN_03390704(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01dd295c(StringLiteral_9340);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar1,uVar2);
}


