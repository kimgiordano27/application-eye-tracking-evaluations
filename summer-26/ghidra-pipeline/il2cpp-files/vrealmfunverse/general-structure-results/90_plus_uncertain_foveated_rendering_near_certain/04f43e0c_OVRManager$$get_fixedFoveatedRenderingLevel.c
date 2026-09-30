/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 04f43e0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  
  FUN_04f3eaf4();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_04f3f86c((unaff_s8 - unaff_s11) + fStack0000000000000000,
                 (unaff_s9 - unaff_s12) + fStack0000000000000004,
                 (unaff_s10 - param_3) + in_stack_00000008,*(long *)(unaff_x19 + 0x20),0);
    *(undefined1 *)(unaff_x19 + 0xc0) = 1;
    FUN_04f438f8();
    FUN_03ade98c();
    *(undefined8 *)(unaff_x19 + 0xcc) = 0;
    *(undefined8 *)(unaff_x19 + 0xc4) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


