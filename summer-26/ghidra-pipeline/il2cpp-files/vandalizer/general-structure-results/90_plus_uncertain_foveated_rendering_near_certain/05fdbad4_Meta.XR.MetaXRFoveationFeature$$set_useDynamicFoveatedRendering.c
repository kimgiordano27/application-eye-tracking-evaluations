/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05fdbad4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  fVar9 = *(float *)(lVar2 + 0x18);
  fVar8 = *(float *)(lVar2 + 0x1c);
  fVar7 = *(float *)(lVar2 + 0x20);
  if (in_w9 == 0) {
    FUN_031f20f4(PTR_DAT_075b9420);
    *(undefined1 *)(unaff_x22 + 0x545) = 1;
  }
  puVar1 = PTR_DAT_075b9420;
  fVar4 = fVar7 * fVar7;
  fVar3 = fVar4 + fVar9 * fVar9 + fVar8 * fVar8;
  fVar6 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8);
  if (fVar6 <= fVar3) {
    fVar5 = unaff_s9 * fVar7 + unaff_s10 * fVar9 + unaff_s11 * fVar8;
    fVar4 = fVar7 * fVar5;
    fVar6 = (fVar9 * fVar5) / fVar3;
    unaff_s10 = unaff_s10 - fVar6;
    unaff_s8 = unaff_s11 - (fVar8 * fVar5) / fVar3;
    unaff_s9 = unaff_s9 - fVar4 / fVar3;
  }
  fVar7 = (float)FUN_06eec180(unaff_x19 + 0xec,0);
  if (*(char *)(unaff_x22 + 0x545) == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    *(undefined1 *)(unaff_x22 + 0x545) = 1;
  }
  fVar8 = fVar6 * fVar6 + fVar7 * fVar7 + fVar4 * fVar4;
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar8) {
    fVar9 = unaff_s9 * fVar6 + unaff_s10 * fVar7 + unaff_s8 * fVar4;
    unaff_s10 = unaff_s10 - (fVar7 * fVar9) / fVar8;
    unaff_s8 = unaff_s8 - (fVar4 * fVar9) / fVar8;
    unaff_s9 = unaff_s9 - (fVar6 * fVar9) / fVar8;
  }
  if (*(char *)(unaff_x20 + 0xaf2) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x20 + 0xaf2) = 1;
  }
  lVar2 = *(long *)(*unaff_x21 + 0xb8);
  fVar8 = unaff_s8 + unaff_s11 * *(float *)(lVar2 + 0x1c);
  fVar9 = unaff_s9 + unaff_s11 * *(float *)(lVar2 + 0x20);
  fVar7 = (float)FUN_05fddf5c(unaff_s10 + unaff_s11 * *(float *)(lVar2 + 0x18),fVar8,fVar9);
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (fVar3 = fVar8, fVar4 = fVar9, lVar2 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)
     ) {
    fVar6 = (float)FUN_06e6a5c4(lVar2,0);
    FUN_06e6a69c(fVar7 + fVar6,fVar8 + fVar3,fVar9 + fVar4,lVar2,0);
    FUN_05fdd668();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


