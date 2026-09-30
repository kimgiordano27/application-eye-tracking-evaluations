/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 07a09cac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_foveation_hits_4;functionality_foveated_rendering
*/


bool Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar3;
  undefined8 uVar4;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  
  fVar3 = (float)FUN_089dd968(param_4,0);
  *unaff_x19 = fVar3;
  unaff_x19[1] = param_2;
                    /* try { // try from 07a09cc4 to 07b09cf3 has its CatchHandler @ 07a09e18 */
  unaff_x19[2] = param_3;
  fVar5 = *unaff_x21;
  fVar7 = unaff_x21[1];
  fVar6 = unaff_x21[2];
  if (*(char *)(unaff_x23 + 0x5ad) == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x23 + 0x5ad) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  unaff_x19[6] = SQRT((fVar6 - param_3) * (fVar6 - param_3) +
                      (fVar5 - fVar3) * (fVar5 - fVar3) + (fVar7 - param_2) * (fVar7 - param_2));
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
     (lVar2 = FUN_089c7534(lVar2,0), lVar2 != 0)) {
    fVar3 = (float)FUN_089dcd84(unaff_s8,lVar2,0);
    if (*(char *)(unaff_x24 + 0x4e7) == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      *(undefined1 *)(unaff_x24 + 0x4e7) = 1;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar5 = SQRT(in_stack_00000010 * in_stack_00000010 + fVar3 * fVar3 + unaff_s9 * unaff_s9);
    if (fVar5 <= fStack0000000000000008) {
      if (DAT_098854f1 == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854f1 = '\x01';
      }
      uVar4 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
      in_stack_00000010 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
    }
    else {
      in_stack_00000010 = in_stack_00000010 / fVar5;
      uVar4 = CONCAT44(unaff_s9 / fVar5,fVar3 / fVar5);
    }
    *(undefined8 *)(unaff_x19 + 3) = uVar4;
    unaff_x19[5] = in_stack_00000010;
    if (fStack000000000000000c <= 0.0) {
      bVar1 = true;
    }
    else {
      bVar1 = unaff_x19[6] <= fStack000000000000000c;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


