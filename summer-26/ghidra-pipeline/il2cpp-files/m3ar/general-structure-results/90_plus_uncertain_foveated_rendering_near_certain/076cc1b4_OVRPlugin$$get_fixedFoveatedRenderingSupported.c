/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 076cc1b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


bool OVRPlugin__get_fixedFoveatedRenderingSupported(long param_1)

{
  bool bVar1;
  int in_w8;
  
  if (in_w8 == 0) {
    bVar1 = false;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    bVar1 = *(char *)(*(long *)(param_1 + 0x20) + 0x5d) != '\0';
  }
  return bVar1;
}


