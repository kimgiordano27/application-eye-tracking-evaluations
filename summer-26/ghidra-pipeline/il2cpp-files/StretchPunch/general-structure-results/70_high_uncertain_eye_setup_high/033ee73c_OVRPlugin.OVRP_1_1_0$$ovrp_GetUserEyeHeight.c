/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeHeight
ENTRY_POINT: 033ee73c
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeHeight(ulong param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iStack0000000000000008;
  int iStack000000000000000c;
  long lStack0000000000000010;
  long lStack0000000000000018;
  
  puVar3 = StringLiteral_1209;
  lVar1 = tpidr_el0;
  lStack0000000000000018 = *(long *)(lVar1 + 0x28);
  _iStack0000000000000008 = param_1;
  lStack0000000000000010 = param_2;
  if ((DAT_044a6b4c & 1) == 0) {
    FUN_01d7d918(StringLiteral_1209);
    DAT_044a6b4c = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if (DAT_044a6c26 == '\0') {
    FUN_01d7d918(StringLiteral_9323);
    FUN_01d7d918(StringLiteral_1209);
    DAT_044a6c26 = '\x01';
  }
  if ((param_1 & 0xff0000) == 0) {
    iVar2 = (int)(param_1 >> 0x20);
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (*(int *)(*(long *)StringLiteral_9323 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033edad0(&stack0x00000008,(uint)param_1 >> 0x10 & 0xff,2);
    iVar2 = iStack000000000000000c;
  }
  if (iVar2 == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if ((DAT_044a6b30 & 1) == 0) {
      FUN_01d7d918(StringLiteral_1209);
      DAT_044a6b30 = 1;
    }
    if (iStack0000000000000008 < 0) {
      if (-lStack0000000000000010 < 1) goto LAB_033ee84c;
    }
    else if (-1 < lStack0000000000000010) {
LAB_033ee84c:
      if (*(long *)(lVar1 + 0x28) == lStack0000000000000018) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar4 = thunk_FUN_01de27b8();
  uVar5 = thunk_FUN_01dd295c(StringLiteral_4787);
  FUN_03390704(uVar4,uVar5,0);
  uVar5 = thunk_FUN_01dd295c(StringLiteral_9342);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar4,uVar5);
}


