/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 0513b3ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


long * OVRPlugin__get_fixedFoveatedRenderingLevel(void)

{
  byte bVar1;
  bool in_ZR;
  long *unaff_x19;
  
  if (in_ZR) {
    if (unaff_x19[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    unaff_x19 = *(long **)(unaff_x19[0xb] + 0x10);
    if (unaff_x19 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_067680b8 + 0x130);
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    return (long *)0x0;
  }
  if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067680b8) {
    return (long *)0x0;
  }
  return unaff_x19;
}


