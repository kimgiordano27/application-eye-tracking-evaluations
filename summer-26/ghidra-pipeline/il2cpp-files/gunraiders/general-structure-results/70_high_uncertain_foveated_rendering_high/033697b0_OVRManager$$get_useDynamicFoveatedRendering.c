/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 033697b0
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


void OVRManager__get_useDynamicFoveatedRendering(void)

{
  long *unaff_x19;
  
  FUN_0336c7fc();
  if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03295500(0);
                    /* try { // try from 033697e4 to 034697e7 has its CatchHandler @ 033698d8 */
                    /* try { // try from 033697e8 to 034698fb has its CatchHandler @ 033696cc */
  if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
  }
  FUN_0325057c();
                    /* WARNING: Could not recover jumptable at 0x03369834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x338))();
  return;
}


