/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 03369610
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


void OVRManager__get_foveatedRenderingLevel(void)

{
  undefined8 uVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  uVar1 = (**(code **)(*unaff_x20 + 0x168))();
                    /* try { // try from 03369620 to 0346962f has its CatchHandler @ 03369630 */
  if (unaff_x19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033699f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x528))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4(uVar1,uVar1);
}


