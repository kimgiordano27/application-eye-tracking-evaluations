/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 060d5f30
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingSupported(float param_1,float param_2,float param_3)

{
  long unaff_x19;
  float fVar1;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  fVar1 = SQRT(param_3 + param_1 + param_2);
  FUN_071d0c1c(unaff_s11 * fVar1,unaff_s12 * fVar1,unaff_s13 * fVar1);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_0718a8f8(*(long *)(unaff_x19 + 0x48),1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


