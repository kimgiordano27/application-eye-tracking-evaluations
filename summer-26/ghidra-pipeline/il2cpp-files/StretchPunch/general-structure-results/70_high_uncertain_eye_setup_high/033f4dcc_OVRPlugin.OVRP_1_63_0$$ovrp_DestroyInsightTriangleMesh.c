/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_DestroyInsightTriangleMesh
ENTRY_POINT: 033f4dcc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f4ef4) */

byte OVRPlugin_OVRP_1_63_0__ovrp_DestroyInsightTriangleMesh(void)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  undefined8 uVar3;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  byte bVar4;
  undefined8 in_stack_00000010;
  
  while( true ) {
    FUN_033f453c();
    if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db68(unaff_x23);
    }
    if ((unaff_w25 != 0xb) && (unaff_w25 != 0)) break;
    uVar2 = FUN_033f42e8();
    if ((uVar2 & 1) != 0) {
      bVar4 = 0;
      unaff_w25 = 5;
      goto LAB_033f4e5c;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f3e58(&stack0x00000038);
    if (unaff_w21 != -1) {
      iVar1 = thunk_FUN_01dc9540(0);
      bVar4 = 0;
      unaff_w25 = 0xe;
      if ((iVar1 - unaff_w22 < 0) || (unaff_w24 = unaff_w21 - (iVar1 - unaff_w22), unaff_w24 < 1))
      goto LAB_033f4e5c;
    }
    FUN_033f44e0();
    FUN_033f453c();
    uVar2 = FUN_033f42e8();
    if ((uVar2 & 1) != 0) {
      FUN_033f44e0();
      FUN_033f453c();
      bVar4 = 1;
      unaff_w25 = 0xe;
      goto LAB_033f4e5c;
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    uVar2 = FUN_033fb87c(uVar3,unaff_w24,0);
    unaff_x23 = 0;
    unaff_w25 = unaff_w28;
    if ((uVar2 & 1) == 0) {
      unaff_w25 = unaff_w27;
    }
    FUN_033f44e0();
  }
  bVar4 = 0;
LAB_033f4e5c:
  if (in_stack_00000010._4_1_ != '\0') {
    FUN_01dccd6c();
  }
  FUN_033f597c(&stack0x00000018);
  return unaff_w25 != 0xe | bVar4;
}


