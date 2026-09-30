/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 060100e8
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


float OVRPlugin__set_fixedFoveatedRenderingLevel
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar3;
  
  fVar1 = (float)FUN_0600f88c();
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  fVar3 = unaff_s13 - fVar1;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar2 = SQRT((unaff_s11 - param_3) * (unaff_s11 - param_3) +
               fVar3 * fVar3 + (unaff_s12 - param_2) * (unaff_s12 - param_2));
  if (fVar2 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    fVar3 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  }
  else {
    fVar3 = fVar3 / fVar2;
  }
  fVar2 = (float)FUN_0600f8e8(param_4);
  return fVar1 + fVar3 * fVar2;
}


