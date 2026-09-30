/*
FUNCTION_NAME: RootMotion.FinalIK.HitReaction.HitPointBone$$GetLength
ENTRY_POINT: 029d1f38
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029d20c8) */
/* WARNING: Removing unreachable block (ram,0x029d20e8) */

uint RootMotion_FinalIK_HitReaction_HitPointBone__GetLength(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long lVar8;
  long unaff_x23;
  long *plVar9;
  char cStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000018;
  
  iVar1 = iStack000000000000000c;
  plVar9 = *(long **)(unaff_x23 + 0xc40);
  lVar3 = *plVar9;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *plVar9;
  }
  if (*(int *)(*(long *)(lVar3 + 0xb8) + 8) <= iVar1) {
    uVar2 = FUN_029d9ce0();
LAB_029d1d7c:
    return uVar2 & 1;
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x38) = iStack000000000000000c;
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08c30);
  FUN_0225a3e8();
  if (lVar3 != 0) {
    FUN_02216dac(lVar3,uVar4,&stack0x00000018,*(undefined8 *)PTR_DAT_03d08c18);
    uVar4 = in_stack_00000018;
    uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08c00);
    FUN_02060754();
    lVar3 = thunk_FUN_01a89e68(*plVar9);
    FUN_029da054(lVar3,uVar4,uVar5);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    cStack0000000000000008 = '\0';
    FUN_027e0bd8(uVar4,&stack0x00000008,0);
    lVar8 = *(long *)(unaff_x19 + 0x28);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *(long *)PTR_DAT_03d08c10;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    uVar6 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(*(long *)(unaff_x19 + 0x28),lVar3,*(undefined8 *)PTR_DAT_03d08c08);
    if (cStack0000000000000008 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
    if (lVar3 != 0) {
      FUN_029da100(lVar3);
      uVar2 = 1;
      goto LAB_029d1d7c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


