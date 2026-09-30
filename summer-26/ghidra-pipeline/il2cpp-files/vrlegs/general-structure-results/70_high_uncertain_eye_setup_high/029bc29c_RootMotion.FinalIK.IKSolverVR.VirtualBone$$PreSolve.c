/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.VirtualBone$$PreSolve
ENTRY_POINT: 029bc29c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bc3fc) */
/* WARNING: Removing unreachable block (ram,0x029bc318) */
/* WARNING: Removing unreachable block (ram,0x029bc39c) */
/* WARNING: Removing unreachable block (ram,0x029bc408) */
/* WARNING: Removing unreachable block (ram,0x029bc3dc) */

undefined1 RootMotion_FinalIK_IKSolverVR_VirtualBone__PreSolve(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x23;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long lStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000048;
  
  puVar4 = PTR_DAT_03d08790;
  puVar3 = PTR_DAT_03d08788;
  puVar2 = PTR_DAT_03d08780;
  uStack0000000000000028 = in_stack_00000010;
  lStack0000000000000020 = in_stack_00000008;
  uStack0000000000000030 = in_stack_00000018;
  while (uVar5 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
    FUN_01b7a454(&stack0x00000020,&stack0x00000008,*(undefined8 *)puVar4);
    if (in_stack_00000008 != 0) {
      FUN_027e3250(in_stack_00000008,0);
    }
  }
  FUN_021b51c4(&stack0x00000020,*(undefined8 *)puVar2);
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *unaff_x23;
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    lVar7 = *(long *)PTR_DAT_03d08798;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    uVar5 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
    if ((uVar5 & 1) == 0) {
      *(undefined4 *)(lVar6 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
    }
    if (in_stack_00000048._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


