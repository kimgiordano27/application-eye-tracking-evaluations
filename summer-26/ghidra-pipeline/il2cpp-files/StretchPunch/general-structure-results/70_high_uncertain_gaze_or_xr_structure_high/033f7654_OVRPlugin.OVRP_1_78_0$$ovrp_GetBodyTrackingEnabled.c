/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 033f7654
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x033f7928) */
/* WARNING: Removing unreachable block (ram,0x033f7930) */

byte OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(void)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  int unaff_w21;
  int iVar7;
  long *unaff_x23;
  undefined8 uVar8;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  char cStack000000000000003c;
  
  puVar2 = StringLiteral_6721;
  cStack000000000000003c = '\0';
  lVar5 = *(long *)StringLiteral_6721;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *(long *)puVar2;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*unaff_x23);
  }
  puVar2 = StringLiteral_2260;
  FUN_033f3848(&stack0x00000020,&stack0x00000048,uVar8);
  in_stack_00000018 = 0;
  while (iVar7 = *(int *)(unaff_x19 + 0x10), thunk_FUN_01da0934(), iVar7 == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar6 = FUN_033f54e0(&stack0x00000018);
    if ((uVar6 & 1) != 0) break;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f53e0(&stack0x00000018);
  }
  FUN_033f4894(*(undefined8 *)(unaff_x19 + 0x20),&stack0x0000003c);
  if (cStack000000000000003c != '\0') {
    iVar7 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    *(int *)(unaff_x19 + 0x18) = iVar7 + 1;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) {
    iVar7 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    if (iVar7 == 0) {
      if (unaff_w21 == 0) {
        lVar5 = 0;
        bVar3 = false;
        iVar7 = 0xf;
        goto LAB_033f77f0;
      }
      uVar4 = FUN_033f7e34();
      uVar4 = uVar4 & 1;
    }
    else {
      uVar4 = 0;
    }
    iVar7 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    if (0 < iVar7) {
      iVar7 = *(int *)(unaff_x19 + 0x10);
      thunk_FUN_01da0934();
      thunk_FUN_01da0934();
      uVar4 = 1;
      *(int *)(unaff_x19 + 0x10) = iVar7 + -1;
    }
    lVar5 = *(long *)(unaff_x19 + 0x28);
    thunk_FUN_01da0934();
    if ((lVar5 != 0) && (iVar7 = *(int *)(unaff_x19 + 0x10), thunk_FUN_01da0934(), iVar7 == 0)) {
      lVar5 = *(long *)(unaff_x19 + 0x28);
      thunk_FUN_01da0934();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_033f7f00(lVar5);
    }
    bVar3 = uVar4 != 0;
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_033f7b10();
    bVar3 = false;
  }
  iVar7 = 0xc;
LAB_033f77f0:
  if (cStack000000000000003c != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_01dccd6c(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_033f597c(&stack0x00000020);
  if ((iVar7 == 0xc) || (iVar7 == 0)) {
    if (lVar5 != 0) {
      in_stack_00000010 = FUN_026c5398(lVar5,*(undefined8 *)StringLiteral_9425);
      bVar3 = FUN_026b841c(&stack0x00000010,*(undefined8 *)StringLiteral_9424);
    }
  }
  else {
    bVar3 = 0;
  }
  return bVar3 & 1;
}


