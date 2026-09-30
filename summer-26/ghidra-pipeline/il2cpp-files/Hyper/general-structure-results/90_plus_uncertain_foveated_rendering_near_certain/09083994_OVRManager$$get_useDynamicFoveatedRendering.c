/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 09083994
PROGRAM: Hyper-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFoveatedRendering(float *param_1,float param_2)

{
  long unaff_x20;
  float fVar1;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if (*param_1 <= param_2) {
    fVar1 = unaff_s8 * unaff_s14 + unaff_s11 * unaff_s12 + unaff_s10 * unaff_s13;
    unaff_s12 = unaff_s12 - (unaff_s11 * fVar1) / param_2;
    unaff_s13 = unaff_s13 - (unaff_s10 * fVar1) / param_2;
    unaff_s14 = unaff_s14 - (unaff_s8 * fVar1) / param_2;
  }
  if (DAT_0b31f3e6 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b31f3e6 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if ((SQRT(unaff_s14 * unaff_s14 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13) <= DAT_01df50c4)
     && (DAT_0b31f3e7 == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e7 = '\x01';
  }
  if (*(char *)(unaff_x20 + 0x23b) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    *(undefined1 *)(unaff_x20 + 0x23b) = 1;
  }
  FUN_0a16adac(uStack0000000000000018,uStack000000000000001c,0);
  FUN_0a16a4c4(0);
  return;
}


