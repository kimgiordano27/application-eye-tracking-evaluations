/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 0747807c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering(undefined8 param_1)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(unaff_x21 + 0x4d0);
                    /* try { // try from 07478084 to 07578087 has its CatchHandler @ 07478474 */
  if ((*(byte *)(unaff_x20 + 0x8ff) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_092234d0);
    *(undefined1 *)(unaff_x20 + 0x8ff) = 1;
  }
                    /* try { // try from 074780a4 to 075780b3 has its CatchHandler @ 07478484 */
  FUN_05699814(param_1,*puVar1);
  return;
}


