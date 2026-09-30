/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 073e1798
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingLevel(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_085b3aa8(*(long *)(param_1 + 0x68),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


