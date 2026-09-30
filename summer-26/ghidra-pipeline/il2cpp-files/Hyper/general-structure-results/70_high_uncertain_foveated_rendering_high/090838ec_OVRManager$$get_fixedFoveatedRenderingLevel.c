/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 090838ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(long param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  fVar5 = *(float *)(param_1 + 0x20);
  FUN_0a12f64c(unaff_s14 * fVar5 + unaff_s13 * unaff_s11 + unaff_s12 * unaff_s10);
  fVar2 = (float)FUN_0a168d24(0);
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fVar3 = fVar5 * fVar5 + unaff_s11 * unaff_s11 + unaff_s10 * unaff_s10;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar3) {
    fVar4 = fVar5 * unaff_s14 + unaff_s11 * fVar2 + unaff_s10 * unaff_s12;
    fVar2 = fVar2 - (unaff_s11 * fVar4) / fVar3;
    unaff_s12 = unaff_s12 - (unaff_s10 * fVar4) / fVar3;
    unaff_s14 = unaff_s14 - (fVar5 * fVar4) / fVar3;
  }
  if (DAT_0b31f3e6 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b31f3e6 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if ((SQRT(unaff_s14 * unaff_s14 + fVar2 * fVar2 + unaff_s12 * unaff_s12) <= DAT_01df50c4) &&
     (DAT_0b31f3e7 == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b31f3e7 = '\x01';
  }
  if (*(char *)(unaff_x20 + 0x23b) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    *(undefined1 *)(unaff_x20 + 0x23b) = 1;
  }
  lVar1 = *(long *)(*unaff_x21 + 0xb8);
  FUN_0a16adac(uStack0000000000000018,uStack000000000000001c,uStack0000000000000068,
               uStack000000000000006c,*(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x4c),
               *(undefined4 *)(lVar1 + 0x50),0);
  FUN_0a16a4c4(0);
  return;
}


