/*
FUNCTION_NAME: RootMotion.FinalIK.FBIKChain$$SolveChildConstraints
ENTRY_POINT: 029924e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02992798) */

void RootMotion_FinalIK_FBIKChain__SolveChildConstraints(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long unaff_x19;
  char in_stack_00000018;
  
  FUN_027e0bd8();
  lVar2 = *(long *)(unaff_x19 + 0x188);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar4 = *(long *)(lVar2 + (long)(int)uVar3 * 8 + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar4 + 0x6c) = 0;
      *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x68) + 1;
    } while ((int)uVar3 < (int)uVar1);
  }
  if (in_stack_00000018 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


