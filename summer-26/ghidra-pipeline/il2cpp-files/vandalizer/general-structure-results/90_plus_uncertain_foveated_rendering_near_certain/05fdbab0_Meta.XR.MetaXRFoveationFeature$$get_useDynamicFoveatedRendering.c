/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering
ENTRY_POINT: 05fdbab0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 91
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__get_useDynamicFoveatedRendering(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x378));
  *(undefined1 *)(unaff_x20 + 0xaf2) = 1;
  puVar1 = PTR_DAT_0759b378;
  lVar3 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
  fVar10 = *(float *)(lVar3 + 0x18);
  fVar9 = *(float *)(lVar3 + 0x1c);
  fVar8 = *(float *)(lVar3 + 0x20);
  if (DAT_07a44545 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a44545 = '\x01';
  }
  puVar2 = PTR_DAT_075b9420;
  fVar5 = fVar8 * fVar8;
  fVar4 = fVar5 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar7 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8);
  if (fVar7 <= fVar4) {
    fVar6 = unaff_s9 * fVar8 + unaff_s10 * fVar10 + unaff_s11 * fVar9;
    fVar5 = fVar8 * fVar6;
    fVar7 = (fVar10 * fVar6) / fVar4;
    unaff_s10 = unaff_s10 - fVar7;
    unaff_s8 = unaff_s11 - (fVar9 * fVar6) / fVar4;
    unaff_s9 = unaff_s9 - fVar5 / fVar4;
  }
  fVar8 = (float)FUN_06eec180(unaff_x19 + 0xec,0);
  if (DAT_07a44545 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a44545 = '\x01';
  }
  fVar9 = fVar7 * fVar7 + fVar8 * fVar8 + fVar5 * fVar5;
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar9) {
    fVar10 = unaff_s9 * fVar7 + unaff_s10 * fVar8 + unaff_s8 * fVar5;
    unaff_s10 = unaff_s10 - (fVar8 * fVar10) / fVar9;
    unaff_s8 = unaff_s8 - (fVar5 * fVar10) / fVar9;
    unaff_s9 = unaff_s9 - (fVar7 * fVar10) / fVar9;
  }
  if (*(char *)(unaff_x20 + 0xaf2) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x20 + 0xaf2) = 1;
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar9 = unaff_s8 + unaff_s11 * *(float *)(lVar3 + 0x1c);
  fVar10 = unaff_s9 + unaff_s11 * *(float *)(lVar3 + 0x20);
  fVar8 = (float)FUN_05fddf5c(unaff_s10 + unaff_s11 * *(float *)(lVar3 + 0x18),fVar9,fVar10);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar4 = fVar9, fVar5 = fVar10, lVar3 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0), lVar3 != 0
     )) {
    fVar7 = (float)FUN_06e6a5c4(lVar3,0);
    FUN_06e6a69c(fVar8 + fVar7,fVar9 + fVar4,fVar10 + fVar5,lVar3,0);
    FUN_05fdd668();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


