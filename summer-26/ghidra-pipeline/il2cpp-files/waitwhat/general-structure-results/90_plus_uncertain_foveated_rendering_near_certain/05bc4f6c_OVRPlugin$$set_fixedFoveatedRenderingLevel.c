/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 05bc4f6c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_fixedFoveatedRenderingLevel(long *param_1)

{
  long lVar1;
  undefined8 *unaff_x22;
  long lStack0000000000000008;
  undefined8 in_stack_00000010;
  
  lVar1 = *param_1;
  lStack0000000000000008 = lVar1;
  __cxa_end_catch();
  FUN_05510270(in_stack_00000010,*unaff_x22);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd0(lVar1);
  }
  return;
}


