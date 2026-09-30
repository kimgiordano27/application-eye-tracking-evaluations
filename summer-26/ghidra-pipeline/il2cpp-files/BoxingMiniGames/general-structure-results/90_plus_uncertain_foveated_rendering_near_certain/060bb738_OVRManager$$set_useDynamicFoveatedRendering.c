/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 060bb738
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFoveatedRendering(void)

{
  undefined8 *puVar1;
  float fVar2;
  float unaff_s8;
  
  puVar1 = (undefined8 *)FUN_0367cd30();
  fVar2 = (float)(*(code *)*puVar1)();
  if (fVar2 < unaff_s8) {
                    /* try { // try from 060bb768 to 061bb773 has its CatchHandler @ 060bb96c */
    return;
  }
                    /* try { // try from 060bb778 to 061bb79f has its CatchHandler @ 060bb998 */
  FUN_060bc4f4();
  return;
}


