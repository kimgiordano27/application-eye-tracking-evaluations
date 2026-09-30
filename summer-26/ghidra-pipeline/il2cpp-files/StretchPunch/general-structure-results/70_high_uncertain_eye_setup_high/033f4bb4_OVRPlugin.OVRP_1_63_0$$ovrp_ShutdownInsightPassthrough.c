/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_ShutdownInsightPassthrough
ENTRY_POINT: 033f4bb4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f4ef4) */
/* WARNING: Removing unreachable block (ram,0x033f4ea4) */

byte OVRPlugin_OVRP_1_63_0__ovrp_ShutdownInsightPassthrough(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  int unaff_w21;
  undefined8 uVar8;
  long *unaff_x26;
  byte bVar9;
  char cStack0000000000000014;
  int in_stack_00000030;
  
  uVar5 = FUN_033f42e8();
  if ((uVar5 & 1) == 0) {
    if (unaff_w21 == 0) {
      return 0;
    }
    if (unaff_w21 == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = thunk_FUN_01dc9540(0);
    }
    iVar3 = FUN_033f4444();
    puVar1 = StringLiteral_2260;
    in_stack_00000030 = 0;
    iVar4 = 0;
    while( true ) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      if (iVar3 <= iVar4) {
        FUN_033f4814();
        puVar1 = StringLiteral_9379;
        lVar6 = *(long *)StringLiteral_9379;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar6 = *(long *)puVar1;
        }
        uVar7 = **(undefined8 **)(lVar6 + 0xb8);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*unaff_x26);
        }
        FUN_033f3848(&stack0x00000018,&stack0x00000038,uVar7);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
        thunk_FUN_01da0934();
        cStack0000000000000014 = '\0';
        FUN_033f4894(uVar7,&stack0x00000014);
        iVar4 = unaff_w21;
        goto LAB_033f4d2c;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f5020(&stack0x00000030,0x28);
      uVar5 = FUN_033f42e8();
      if ((uVar5 & 1) != 0) break;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar4 = in_stack_00000030;
      if (99 < in_stack_00000030) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (((uint)(iVar4 * -0x33333333) >> 1 | iVar4 * -0x80000000) < 0x1999999a) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_033f3e58(&stack0x00000038);
        }
      }
    }
  }
  return 1;
LAB_033f4d2c:
  uVar5 = FUN_033f42e8();
  if ((uVar5 & 1) != 0) {
    bVar9 = 0;
    iVar3 = 5;
    goto LAB_033f4e5c;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033f3e58(&stack0x00000038);
  if (unaff_w21 != -1) {
    iVar4 = thunk_FUN_01dc9540(0);
    bVar9 = 0;
    iVar3 = 0xe;
    if ((iVar4 - iVar2 < 0) || (iVar4 = unaff_w21 - (iVar4 - iVar2), iVar4 < 1)) goto LAB_033f4e5c;
  }
  FUN_033f44e0();
  FUN_033f453c();
  uVar5 = FUN_033f42e8();
  if ((uVar5 & 1) != 0) {
    FUN_033f44e0();
    FUN_033f453c();
    bVar9 = 1;
    iVar3 = 0xe;
    goto LAB_033f4e5c;
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x10);
  thunk_FUN_01da0934();
  uVar5 = FUN_033fb87c(uVar8,iVar4,0);
  iVar3 = 0xb;
  if ((uVar5 & 1) == 0) {
    iVar3 = 0xe;
  }
  FUN_033f44e0();
  FUN_033f453c();
  if ((iVar3 != 0xb) && (iVar3 != 0)) {
    bVar9 = 0;
LAB_033f4e5c:
    if (cStack0000000000000014 != '\0') {
      FUN_01dccd6c(uVar7);
    }
    FUN_033f597c(&stack0x00000018);
    return iVar3 != 0xe | bVar9;
  }
  goto LAB_033f4d2c;
}


