/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 060bb608
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


void OVRManager__set_fixedFoveatedRenderingLevel(void)

{
  uint uVar1;
  uint uVar2;
  long unaff_x19;
  uint unaff_w20;
  
  uVar2 = FUN_060bb8a8();
  uVar1 = (*(uint *)(unaff_x19 + 0x178) | unaff_w20) & (uVar2 ^ 0xffffffff);
  *(uint *)(unaff_x19 + 0x178) = uVar1;
                    /* try { // try from 060bb620 to 061bb62b has its CatchHandler @ 060bb98c */
  if ((uVar2 != 0) && (uVar1 == 0)) {
    *(undefined1 *)(unaff_x19 + 0x169) = 1;
  }
  return;
}


