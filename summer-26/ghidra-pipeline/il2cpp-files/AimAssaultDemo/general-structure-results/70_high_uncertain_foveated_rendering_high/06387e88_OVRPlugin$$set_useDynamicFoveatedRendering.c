/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 06387e88
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


void OVRPlugin__set_useDynamicFoveatedRendering(undefined8 param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 06387e88 to 06487e93 has its CatchHandler @ 06387d10 */
  FUN_062453d8(param_1,0);
                    /* try { // try from 06387e94 to 06487e9b has its CatchHandler @ 06387e9c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06387e78 with catch @ 06387e9c
                       catch(type#2 @ 00000000) { ... } // from try @ 06387e94 with catch @ 06387e9c
                        */
  uVar1 = thunk_FUN_037a15ac(PTR_DAT_07db6330);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(param_1,uVar1);
}


