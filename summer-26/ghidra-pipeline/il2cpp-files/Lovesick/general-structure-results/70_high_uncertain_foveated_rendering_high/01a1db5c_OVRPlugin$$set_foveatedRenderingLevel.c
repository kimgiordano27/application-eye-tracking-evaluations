/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 01a1db5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_foveatedRenderingLevel(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = StringLiteral_2598;
                    /* try { // try from 01a1db6c to 01b1db7f has its CatchHandler @ 01a1e008 */
  if ((DAT_0377a9e4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_2598);
    DAT_0377a9e4 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
                    /* try { // try from 01a1db94 to 01b1db97 has its CatchHandler @ 01a1e028 */
  uVar2 = thunk_FUN_00d6225c(uVar3,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
                    /* try { // try from 01a1dbac to 01b1dbaf has its CatchHandler @ 01a1dfd4 */
  thunk_FUN_00d6225c(uVar3,*(undefined8 *)puVar1);
  return;
}


