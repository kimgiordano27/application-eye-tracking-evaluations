/*
FUNCTION_NAME: RootMotion.FinalIK.HitReaction.HitPointBone$$CrossFadeStart
ENTRY_POINT: 029d1fc4
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

undefined4 RootMotion_FinalIK_HitReaction_HitPointBone__CrossFadeStart(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  long lVar6;
  undefined8 *unaff_x23;
  char in_stack_00000008;
  
  thunk_FUN_01a89e68(**(undefined8 **)(param_1 + 0xc00));
  FUN_02060754();
  lVar2 = thunk_FUN_01a89e68(*unaff_x23);
  FUN_029da054();
  uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
  in_stack_00000008 = '\0';
  FUN_027e0bd8(uVar5,&stack0x00000008,0);
  lVar6 = *(long *)(unaff_x19 + 0x28);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)PTR_DAT_03d08c10;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  uVar3 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(lVar6 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    if (0 < iVar1) {
      FUN_02793a34(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_01b5f01c(*(long *)(unaff_x19 + 0x28),lVar2,*(undefined8 *)PTR_DAT_03d08c08);
    if (in_stack_00000008 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
    if (lVar2 != 0) {
      FUN_029da100(lVar2);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


