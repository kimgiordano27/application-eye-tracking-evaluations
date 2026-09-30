/*
FUNCTION_NAME: RootMotion.FinalIK.HitReaction.HitPointBone.BoneLink$$CrossFadeStart
ENTRY_POINT: 029d201c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029d20e8) */
/* WARNING: Removing unreachable block (ram,0x029d20c8) */

undefined4 RootMotion_FinalIK_HitReaction_HitPointBone_BoneLink__CrossFadeStart(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  char in_stack_00000008;
  
  lVar4 = *(long *)(unaff_x19 + 0x28);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = *(long *)PTR_DAT_03d08c10;
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  uVar2 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 200));
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(lVar4 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    if (0 < iVar1) {
      FUN_02793a34(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
    }
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_01b5f01c();
    if (in_stack_00000008 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (unaff_x20 != 0) {
      FUN_029da100();
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


