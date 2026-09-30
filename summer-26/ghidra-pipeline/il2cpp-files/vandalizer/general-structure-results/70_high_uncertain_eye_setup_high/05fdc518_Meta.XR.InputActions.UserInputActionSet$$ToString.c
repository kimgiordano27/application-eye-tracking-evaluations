/*
FUNCTION_NAME: Meta.XR.InputActions.UserInputActionSet$$ToString
ENTRY_POINT: 05fdc518
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_InputActions_UserInputActionSet__ToString
               (float param_1,float param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  long unaff_x19;
  float unaff_s9;
  float unaff_s10;
  float fStack000000000000001c;
  
  fStack000000000000001c = param_2 + param_4;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06e6a69c(unaff_s9 + param_1,fStack000000000000001c,unaff_s10 + param_3,
                 *(long *)(unaff_x19 + 0x30),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar1 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0);
      FUN_05f9d090(uVar1,&stack0x00000020,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


