/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 03369758
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_fixedFoveatedRenderingLevel(long param_1)

{
  long *unaff_x19;
  
                    /* try { // try from 03369758 to 03469763 has its CatchHandler @ 033698e4 */
  if (*(int *)(**(long **)(param_1 + 0xa10) + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(**(long **)(param_1 + 0xa10));
  }
  FUN_03253790();
                    /* WARNING: Could not recover jumptable at 0x03369ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x328))();
  return;
}


