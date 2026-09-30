/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 0908393c
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


void OVRManager__set_fixedFoveatedRenderingLevel
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  fVar2 = (float)FUN_0a168d24();
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fVar3 = unaff_s8 * unaff_s8 + unaff_s11 * unaff_s11 + unaff_s10 * unaff_s10;
  if (**(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) <= fVar3) {
    fVar4 = unaff_s8 * param_3 + unaff_s11 * fVar2 + unaff_s10 * param_2;
    fVar2 = fVar2 - (unaff_s11 * fVar4) / fVar3;
    param_2 = param_2 - (unaff_s10 * fVar4) / fVar3;
    param_3 = param_3 - (unaff_s8 * fVar4) / fVar3;
  }
  if (DAT_0b31f3e6 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b31f3e6 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if ((SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2) <= DAT_01df50c4) &&
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


