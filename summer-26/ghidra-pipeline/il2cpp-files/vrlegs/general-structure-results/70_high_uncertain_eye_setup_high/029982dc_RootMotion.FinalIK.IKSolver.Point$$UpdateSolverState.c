/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolver.Point$$UpdateSolverState
ENTRY_POINT: 029982dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02998348) */

void RootMotion_FinalIK_IKSolver_Point__UpdateSolverState(void)

{
  undefined1 in_w8;
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  char cStack000000000000000c;
  
  *(undefined1 *)(unaff_x20 + 0x20) = in_w8;
  *(undefined4 *)(unaff_x20 + 0x54) = 0;
  uVar1 = *(undefined8 *)(unaff_x21 + 0x10);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar1,&stack0x0000000c,0);
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    FUN_02093610();
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar1,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


