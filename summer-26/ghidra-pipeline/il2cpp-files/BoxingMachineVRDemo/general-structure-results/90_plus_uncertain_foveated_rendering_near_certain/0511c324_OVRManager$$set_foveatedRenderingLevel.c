/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 0511c324
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_foveatedRenderingLevel(void)

{
  long lVar1;
  
  lVar1 = thunk_FUN_02d9d534();
  FUN_0511c35c();
  if (lVar1 != 0) {
    FUN_0511c3e4(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


