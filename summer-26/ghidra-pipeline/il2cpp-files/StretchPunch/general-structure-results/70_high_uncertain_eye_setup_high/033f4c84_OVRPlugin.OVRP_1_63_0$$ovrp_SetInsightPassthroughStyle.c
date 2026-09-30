/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_SetInsightPassthroughStyle
ENTRY_POINT: 033f4c84
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
/* WARNING: Removing unreachable block (ram,0x033f4ea4) */

byte OVRPlugin_OVRP_1_63_0__ovrp_SetInsightPassthroughStyle(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar5;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  undefined8 uVar6;
  int unaff_w24;
  uint unaff_w25;
  long *unaff_x26;
  int unaff_w27;
  int iVar7;
  byte bVar8;
  char cStack0000000000000014;
  int in_stack_00000030;
  
  do {
    thunk_FUN_01dc4f30();
    do {
      if (((uint)(unaff_w27 * unaff_w24) >> 1 | unaff_w27 * unaff_w24 * -0x80000000) <= unaff_w25) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f3e58(&stack0x00000038);
      }
      do {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (unaff_w20 <= unaff_w27) {
          FUN_033f4814();
          puVar1 = StringLiteral_9379;
          lVar4 = *(long *)StringLiteral_9379;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar4 = *(long *)puVar1;
          }
          uVar5 = **(undefined8 **)(lVar4 + 0xb8);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*unaff_x26);
          }
          FUN_033f3848(&stack0x00000018,&stack0x00000038,uVar5);
          uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
          thunk_FUN_01da0934();
          cStack0000000000000014 = '\0';
          FUN_033f4894(uVar5,&stack0x00000014);
          iVar2 = unaff_w21;
          goto LAB_033f4d2c;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f5020(&stack0x00000030,0x28);
        uVar3 = FUN_033f42e8();
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        unaff_w27 = in_stack_00000030;
      } while (in_stack_00000030 < 100);
    } while (*(int *)(*unaff_x23 + 0xe0) != 0);
  } while( true );
LAB_033f4d2c:
  uVar3 = FUN_033f42e8();
  if ((uVar3 & 1) != 0) {
    bVar8 = 0;
    iVar7 = 5;
    goto LAB_033f4e5c;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033f3e58(&stack0x00000038);
  if (unaff_w21 != -1) {
    iVar2 = thunk_FUN_01dc9540(0);
    bVar8 = 0;
    iVar7 = 0xe;
    if ((iVar2 - unaff_w22 < 0) || (iVar2 = unaff_w21 - (iVar2 - unaff_w22), iVar2 < 1))
    goto LAB_033f4e5c;
  }
  FUN_033f44e0();
  FUN_033f453c();
  uVar3 = FUN_033f42e8();
  if ((uVar3 & 1) != 0) {
    FUN_033f44e0();
    FUN_033f453c();
    bVar8 = 1;
    iVar7 = 0xe;
    goto LAB_033f4e5c;
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
  thunk_FUN_01da0934();
  uVar3 = FUN_033fb87c(uVar6,iVar2,0);
  iVar7 = 0xb;
  if ((uVar3 & 1) == 0) {
    iVar7 = 0xe;
  }
  FUN_033f44e0();
  FUN_033f453c();
  if ((iVar7 != 0xb) && (iVar7 != 0)) {
    bVar8 = 0;
LAB_033f4e5c:
    if (cStack0000000000000014 != '\0') {
      FUN_01dccd6c(uVar5);
    }
    FUN_033f597c(&stack0x00000018);
    return iVar7 != 0xe | bVar8;
  }
  goto LAB_033f4d2c;
}


