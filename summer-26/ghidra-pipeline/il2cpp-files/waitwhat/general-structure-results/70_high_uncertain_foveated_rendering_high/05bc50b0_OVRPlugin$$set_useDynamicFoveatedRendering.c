/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05bc50b0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


uint OVRPlugin__set_useDynamicFoveatedRendering(void)

{
  ulong uVar1;
  long unaff_x20;
  uint unaff_w21;
  undefined8 uVar2;
  long *unaff_x23;
  
  uVar1 = FUN_069d69b8();
  if ((((uVar1 & 1) != 0) && ((unaff_w21 >> 1 & 1) != 0)) &&
     (uVar1 = FUN_05bc5218(), (uVar1 & 1) == 0)) {
    unaff_w21 = unaff_w21 & 0xfffffffd;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x160);
                    /* try { // try from 05bc50e0 to 05cc50e3 has its CatchHandler @ 05bc5158 */
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
                    /* try { // try from 05bc50f0 to 05cc50f7 has its CatchHandler @ 05bc5160 */
  uVar1 = FUN_069d69b8(uVar2,0,0);
                    /* try { // try from 05bc510c to 05cc5113 has its CatchHandler @ 05bc515c */
  if ((((uVar1 & 1) != 0) && ((unaff_w21 & 1) != 0)) && (uVar1 = FUN_05bc5218(), (uVar1 & 1) == 0))
  {
    unaff_w21 = unaff_w21 & 0xfffffffe;
  }
  return unaff_w21;
}


