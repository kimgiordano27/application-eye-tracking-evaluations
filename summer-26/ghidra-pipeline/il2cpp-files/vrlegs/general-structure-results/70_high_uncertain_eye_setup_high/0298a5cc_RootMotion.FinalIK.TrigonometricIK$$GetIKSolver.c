/*
FUNCTION_NAME: RootMotion.FinalIK.TrigonometricIK$$GetIKSolver
ENTRY_POINT: 0298a5cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298a794) */
/* WARNING: Removing unreachable block (ram,0x0298a7a4) */

undefined8 RootMotion_FinalIK_TrigonometricIK__GetIKSolver(void)

{
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  long lVar3;
  undefined8 uVar4;
  long unaff_x21;
  uint unaff_w22;
  long *plVar5;
  char in_stack_00000018;
  char cStack000000000000001c;
  
  for (; unaff_w22 != 0x20; unaff_w22 = unaff_w22 + 1) {
    if (in_w8 >> (unaff_w22 & 0x1f) == 0) goto LAB_0298a5d8;
  }
  unaff_w22 = 0x20;
LAB_0298a5d8:
  uVar4 = *(undefined8 *)(unaff_x21 + 0x18);
  cStack000000000000001c = '\0';
  FUN_027e0bd8(uVar4,&stack0x0000001c,0);
  lVar3 = *(long *)(unaff_x21 + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar3 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar3 = *(long *)(lVar3 + (long)(int)unaff_w22 * 8 + 0x20);
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d07810);
    FUN_02092510(lVar3,*(undefined8 *)PTR_DAT_03d07808);
    plVar5 = *(long **)(unaff_x21 + 0x18);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar3 != 0) &&
       (lVar1 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar1 == 0)) {
      uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,0);
    }
    if (*(uint *)(plVar5 + 3) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[(long)(int)unaff_w22 + 4] = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (plVar5 + (long)(int)unaff_w22 + 4,lVar3);
  }
  in_stack_00000018 = '\0';
  FUN_027e0bd8(lVar3,&stack0x00000018,0);
  uVar2 = FUN_0298a8a4();
  if (in_stack_00000018 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar3,0);
  }
  if (cStack000000000000001c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return uVar2;
}


