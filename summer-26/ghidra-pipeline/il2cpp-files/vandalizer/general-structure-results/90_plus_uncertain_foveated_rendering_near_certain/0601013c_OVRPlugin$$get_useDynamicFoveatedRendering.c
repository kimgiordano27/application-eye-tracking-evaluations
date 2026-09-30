/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 0601013c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRPlugin__get_useDynamicFoveatedRendering(void)

{
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  fVar1 = SQRT(unaff_s12 * unaff_s12 + unaff_s14 * unaff_s14 + unaff_s13 * unaff_s13);
  if (fVar1 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    fVar1 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  }
  else {
    fVar1 = unaff_s14 / fVar1;
  }
  fVar2 = (float)FUN_0600f8e8();
  return unaff_s8 + fVar1 * fVar2;
}


