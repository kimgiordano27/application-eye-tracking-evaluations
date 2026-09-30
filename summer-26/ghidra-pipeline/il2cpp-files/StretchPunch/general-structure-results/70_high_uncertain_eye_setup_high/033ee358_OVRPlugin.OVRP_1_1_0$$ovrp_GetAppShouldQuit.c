/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppShouldQuit
ENTRY_POINT: 033ee358
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_1_0__ovrp_GetAppShouldQuit(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint unaff_w19;
  int iVar3;
  long unaff_x21;
  long *unaff_x22;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  long in_stack_00000018;
  
  if (*(int *)(**(long **)(param_1 + 0x1f8) + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033edad0(&stack0x00000008,unaff_w19 >> 0x10 & 0xff,2);
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


