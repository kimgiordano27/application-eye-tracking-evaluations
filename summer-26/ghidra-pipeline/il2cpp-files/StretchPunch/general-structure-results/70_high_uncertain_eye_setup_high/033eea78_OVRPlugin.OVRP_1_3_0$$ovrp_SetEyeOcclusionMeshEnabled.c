/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_SetEyeOcclusionMeshEnabled
ENTRY_POINT: 033eea78
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0__ovrp_SetEyeOcclusionMeshEnabled(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int iStack0000000000000008;
  int iStack000000000000000c;
  long in_stack_00000010;
  long in_stack_00000018;
  
  FUN_01d7d918(StringLiteral_1209);
  *(undefined1 *)(unaff_x22 + 0xb4f) = 1;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if (DAT_044a6c26 == '\0') {
    FUN_01d7d918(StringLiteral_9323);
    FUN_01d7d918(StringLiteral_1209);
    DAT_044a6c26 = '\x01';
  }
  if ((unaff_x19 & 0xff0000) == 0) {
    iStack000000000000000c = (int)(unaff_x19 >> 0x20);
  }
  else {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (*(int *)(*(long *)StringLiteral_9323 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033edad0(&stack0x00000008,(uint)unaff_x19 >> 0x10 & 0xff,2);
  }
  if (iStack000000000000000c == 0) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if ((DAT_044a6b30 & 1) == 0) {
      FUN_01d7d918(StringLiteral_1209);
      DAT_044a6b30 = 1;
    }
    if ((in_stack_00000010 == 0) || (-1 < iStack0000000000000008)) {
      if (*(long *)(unaff_x20 + 0x28) == in_stack_00000018) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar1 = thunk_FUN_01de27b8();
  uVar2 = thunk_FUN_01dd295c(StringLiteral_4789);
  FUN_03390704(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01dd295c(StringLiteral_9344);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar1,uVar2);
}


