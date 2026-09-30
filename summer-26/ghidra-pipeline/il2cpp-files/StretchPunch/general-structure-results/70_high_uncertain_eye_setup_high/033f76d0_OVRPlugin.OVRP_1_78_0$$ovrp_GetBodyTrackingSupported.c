/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingSupported
ENTRY_POINT: 033f76d0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f7928) */
/* WARNING: Removing unreachable block (ram,0x033f7930) */

byte OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingSupported(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w21;
  int iVar6;
  long *unaff_x24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000038;
  
  while (uVar4 = FUN_033f54e0(&stack0x00000018), (uVar4 & 1) == 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f53e0(&stack0x00000018);
    iVar6 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    if (iVar6 != 0) break;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
  }
  FUN_033f4894(*(undefined8 *)(unaff_x19 + 0x20),(long)&stack0x00000038 + 4);
  if (in_stack_00000038._4_1_ != '\0') {
    iVar6 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    *(int *)(unaff_x19 + 0x18) = iVar6 + 1;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) {
    iVar6 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    if (iVar6 == 0) {
      if (unaff_w21 == 0) {
        lVar5 = 0;
        bVar2 = false;
        iVar6 = 0xf;
        goto LAB_033f77f0;
      }
      uVar3 = FUN_033f7e34();
      uVar3 = uVar3 & 1;
    }
    else {
      uVar3 = 0;
    }
    iVar6 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    if (0 < iVar6) {
      iVar6 = *(int *)(unaff_x19 + 0x10);
      thunk_FUN_01da0934();
      thunk_FUN_01da0934();
      uVar3 = 1;
      *(int *)(unaff_x19 + 0x10) = iVar6 + -1;
    }
    lVar5 = *(long *)(unaff_x19 + 0x28);
    thunk_FUN_01da0934();
    if ((lVar5 != 0) && (iVar6 = *(int *)(unaff_x19 + 0x10), thunk_FUN_01da0934(), iVar6 == 0)) {
      lVar5 = *(long *)(unaff_x19 + 0x28);
      thunk_FUN_01da0934();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_033f7f00(lVar5);
    }
    bVar2 = uVar3 != 0;
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_033f7b10();
    bVar2 = false;
  }
  iVar6 = 0xc;
LAB_033f77f0:
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_01dccd6c(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_033f597c(&stack0x00000020);
  if ((iVar6 == 0xc) || (iVar6 == 0)) {
    if (lVar5 != 0) {
      in_stack_00000010 = FUN_026c5398(lVar5,*(undefined8 *)StringLiteral_9425);
      bVar2 = FUN_026b841c(&stack0x00000010,*(undefined8 *)StringLiteral_9424);
    }
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


