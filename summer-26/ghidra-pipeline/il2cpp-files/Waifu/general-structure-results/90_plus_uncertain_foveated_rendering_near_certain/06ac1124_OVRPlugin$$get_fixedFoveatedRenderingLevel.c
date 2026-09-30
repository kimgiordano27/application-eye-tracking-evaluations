/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 06ac1124
PROGRAM: Waifu-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel(void)

{
  int in_w8;
  long unaff_x19;
  
  if (in_w8 == 0) {
    return;
  }
  if (unaff_x19 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06ac1144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x19 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


