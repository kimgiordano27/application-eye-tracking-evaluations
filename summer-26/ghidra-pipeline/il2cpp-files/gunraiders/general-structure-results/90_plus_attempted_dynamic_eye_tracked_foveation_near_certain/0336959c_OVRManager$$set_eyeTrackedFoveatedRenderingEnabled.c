/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0336959c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  long *unaff_x19;
  long *unaff_x20;
  
  FUN_0336c7fc();
  if (unaff_x20 != (long *)0x0) {
                    /* catch() { ... } // from try @ 033695c8 with catch @ 033695bc
                       catch() { ... } // from try @ 03369600 with catch @ 033695bc
                       catch() { ... } // from try @ 03369638 with catch @ 033695bc */
                    /* try { // try from 033695c0 to 034695c7 has its CatchHandler @ 033695d0 */
    (**(code **)(*unaff_x20 + 0x168))();
                    /* try { // try from 033695c8 to 034695e7 has its CatchHandler @ 033695bc */
                    /* WARNING: Could not recover jumptable at 0x033699f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x1e8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


