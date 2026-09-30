/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 03156238
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingLevel(undefined8 *param_1)

{
  long unaff_x22;
  
  (*(code *)*param_1)();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab0160();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bbda54();
}


