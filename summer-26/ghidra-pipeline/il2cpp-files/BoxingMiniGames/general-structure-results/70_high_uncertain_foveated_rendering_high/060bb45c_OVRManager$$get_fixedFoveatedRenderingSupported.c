/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 060bb45c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingSupported(undefined4 param_1,long param_2)

{
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060bb444 with catch @ 060bb45c
                        */
  *(undefined4 *)(param_2 + 0x1a4) = param_1;
  *(undefined4 *)(param_2 + 0x1a8) = param_1;
  return;
}


