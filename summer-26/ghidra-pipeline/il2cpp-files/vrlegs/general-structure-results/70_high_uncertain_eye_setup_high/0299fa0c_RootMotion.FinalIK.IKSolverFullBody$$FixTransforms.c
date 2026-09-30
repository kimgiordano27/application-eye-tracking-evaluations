/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverFullBody$$FixTransforms
ENTRY_POINT: 0299fa0c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0299fcc4) */
/* WARNING: Removing unreachable block (ram,0x0299fccc) */

bool RootMotion_FinalIK_IKSolverFullBody__FixTransforms(void)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x26;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 in_stack_00000018;
  undefined8 in_stack_00000020;
  char cStack0000000000000028;
  char cStack000000000000002c;
  
  if (*(long *)(unaff_x21 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(*(long *)(unaff_x21 + 200) + 0xb0) = unaff_x23;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x21 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(*(long *)(unaff_x21 + 200) + 0xa0) = unaff_x22;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x21 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(*(long *)(unaff_x21 + 200) + 0xa8) = unaff_x26;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  in_stack_00000020 = 0;
  if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,*(undefined1 *)(unaff_x21 + 0x84));
  uVar3 = FUN_0219f8b8(*(long *)(unaff_x21 + 0x30),&stack0x00000008,&stack0x00000020,
                       *(undefined8 *)PTR_DAT_03d08030);
  if ((uVar3 & 1) == 0) {
    lVar7 = *(long *)(unaff_x21 + 200);
    in_stack_00000018 = *(undefined1 *)(unaff_x21 + 0x84);
    in_stack_00000008 = *(undefined8 *)PTR_DAT_03cca1f8;
    in_stack_00000010 = 0xffffffffffffffff;
    uVar8 = FUN_027a62b8(&stack0x00000008,0);
    uVar6 = *(undefined8 *)(unaff_x21 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_03cc9f98 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_029bc5e8(uVar6,0,0);
    uVar8 = FUN_025be45c(*(undefined8 *)PTR_DAT_03d08040,uVar8,*(undefined8 *)PTR_DAT_03cc0b80,uVar6
                         ,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0298e564(lVar7,1,uVar8,0);
    uVar2 = 0;
  }
  else {
    *(undefined8 *)(unaff_x21 + 0x38) = in_stack_00000020;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar7 = *(long *)(unaff_x21 + 200);
    uVar8 = *(undefined8 *)(unaff_x21 + 0x38);
    plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = *(long *)(unaff_x21 + 200);
    if ((lVar9 != 0) &&
       (lVar5 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar8 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[4] = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar9);
    plVar4 = (long *)FUN_0279a64c(uVar8,plVar4,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (plVar4 == (long *)0x0) {
      *(undefined8 *)(lVar7 + 0x28) = 0;
    }
    else {
      lVar9 = *(long *)PTR_DAT_03d07ca8;
      bVar1 = *(byte *)(lVar9 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar1 - 1) * 8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar4);
      }
      *(long **)(lVar7 + 0x28) = plVar4;
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar1 - 1) * 8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar4);
      }
    }
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar7 + 0x28,plVar4);
    if (*(long **)(unaff_x21 + 200) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = (**(code **)(**(long **)(unaff_x21 + 200) + 0x1a8))();
    uVar2 = uVar2 & 1;
  }
  if (cStack0000000000000028 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (cStack000000000000002c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return uVar2 != 0;
}


