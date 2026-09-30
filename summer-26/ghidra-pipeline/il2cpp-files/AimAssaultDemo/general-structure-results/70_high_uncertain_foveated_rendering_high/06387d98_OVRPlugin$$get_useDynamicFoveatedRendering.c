/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 06387d98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFoveatedRendering(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
                    /* try { // try from 06387da4 to 06487dbb has its CatchHandler @ 06387e20 */
  uVar1 = thunk_FUN_037788cc();
  uVar2 = thunk_FUN_037a15ac(PTR_DAT_07d88698);
                    /* try { // try from 06387dbc to 06487def has its CatchHandler @ 06387d10 */
  FUN_061a1b40(uVar1,uVar2,0);
  uVar2 = thunk_FUN_037a15ac(PTR_DAT_07db6328);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar1,uVar2);
}


