/*
FUNCTION_NAME: OVRManager$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 0745d398
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFixedFoveatedRendering(void)

{
  long unaff_x20;
  
                    /* try { // try from 0745d398 to 0755d39f has its CatchHandler @ 0745d3a0 */
  thunk_FUN_03d2ef40();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0745d384 with catch @ 0745d3a0
                       catch(type#2 @ 00000000) { ... } // from try @ 0745d398 with catch @ 0745d3a0
                        */
  FUN_06bcef5c();
  if (unaff_x20 != 0) {
    FUN_0744dbc4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


