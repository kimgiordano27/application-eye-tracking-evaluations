/*
FUNCTION_NAME: RootMotion.FinalIK.InteractionEffector$$Start
ENTRY_POINT: 029bf060
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


/* WARNING: Removing unreachable block (ram,0x029bf104) */

void RootMotion_FinalIK_InteractionEffector__Start(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01a89a98(param_1,&stack0x00000004);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02999124();
  if (*(int *)(*(long *)PTR_DAT_03d07e10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = FUN_0299a22c();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  uVar2 = FUN_0298d310();
  if ((uVar2 & 1) == 0) {
    if (lVar4 == 0) goto LAB_029bf100;
  }
  else {
    lVar3 = FUN_0298d32c();
    if ((lVar4 == 0) || (lVar3 == 0)) {
LAB_029bf100:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + *(int *)(lVar4 + 0x14);
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
  }
  iVar1 = FUN_029bfaf0();
  if (iVar1 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02992f5c(lVar4,0);
  }
  return;
}


