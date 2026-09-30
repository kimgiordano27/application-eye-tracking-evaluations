/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 033c335c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingSupported(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_01dd295c(*(undefined8 *)(param_1 + 0xaa0));
                    /* try { // try from 033c3364 to 034c3367 has its CatchHandler @ 033c39c0 */
  uVar1 = FUN_033d6e4c(uVar1,0);
  thunk_FUN_01dd295c(StringLiteral_5868);
  uVar2 = thunk_FUN_01de27b8();
                    /* try { // try from 033c3384 to 034c3387 has its CatchHandler @ 033c39e0 */
  FUN_033063d0(uVar2,uVar1,0);
  uVar1 = thunk_FUN_01dd295c(StringLiteral_8818);
                    /* try { // try from 033c339c to 034c339f has its CatchHandler @ 033c39bc */
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar2,uVar1);
}


