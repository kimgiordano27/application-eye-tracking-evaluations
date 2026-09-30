/*
FUNCTION_NAME: RootMotion.FinalIK.IKEffector$$OnPreSolve
ENTRY_POINT: 02993b88
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


/* WARNING: Removing unreachable block (ram,0x02993c68) */

void RootMotion_FinalIK_IKEffector__OnPreSolve(void)

{
  int in_w8;
  long unaff_x20;
  long unaff_x22;
  int unaff_w24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  do {
    if (unaff_w24 <= in_w8) {
      if (*(long *)(unaff_x20 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0221099c(*(long *)(unaff_x20 + 0x100),unaff_x22);
LAB_02993be0:
      if (in_stack_00000008._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      return;
    }
    unaff_x22 = FUN_0220fecc(unaff_x22,*unaff_x26);
    if (unaff_x22 == 0) {
      if (*(long *)(unaff_x20 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02210dd4(*(long *)(unaff_x20 + 0x100));
      goto LAB_02993be0;
    }
    FUN_01ea4674(unaff_x22,&stack0x00000018,*unaff_x25);
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_w8 = *(int *)(in_stack_00000018 + 0x18);
  } while( true );
}


