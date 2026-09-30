/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_foveatedRenderingLevel
ENTRY_POINT: 07a09c14
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 97
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_foveation_hits_4;functionality_foveated_rendering
*/


bool Meta_XR_MetaXRFoveationFeature__get_foveatedRenderingLevel(long param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar10;
  float unaff_s14;
  float fVar11;
  float unaff_s15;
  float fVar12;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  undefined4 in_stack_00000020;
  
                    /* try { // try from 07a09c14 to 07b09c17 has its CatchHandler @ 07a09d74 */
  pfVar4 = *(float **)(param_1 + 0xb8);
                    /* try { // try from 07a09c18 to 07b09c27 has its CatchHandler @ 07a09ddc */
  fVar8 = *pfVar4;
  fVar9 = pfVar4[1];
  fVar7 = pfVar4[2];
                    /* try { // try from 07a09c28 to 07b09c6b has its CatchHandler @ 07a09038 */
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    if ((iVar1 != 1) &&
       ((iVar1 == 2 ||
        (unaff_s10 <
         SQRT(in_stack_00000000._4_4_ * in_stack_00000000._4_4_ +
              in_stack_00000010 * in_stack_00000010 +
              (unaff_s11 - unaff_s15) * (unaff_s11 - unaff_s15)))))) {
      fVar8 = -fVar8;
      fVar9 = -fVar9;
      fVar7 = -fVar7;
    }
    unaff_x19[0] = 0.0;
    unaff_x19[1] = 0.0;
    unaff_x19[2] = 0.0;
    unaff_x19[3] = 0.0;
    unaff_x19[6] = 0.0;
    unaff_x19[4] = 0.0;
    unaff_x19[5] = 0.0;
    if (((*(long *)(unaff_x20 + 0x20) != 0) &&
        (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar3 != 0)) &&
       (lVar3 = FUN_089c7534(lVar3,0), lVar3 != 0)) {
      fVar5 = (float)FUN_089dd968(in_stack_00000020,lVar3,0);
      *unaff_x19 = fVar5;
      unaff_x19[1] = unaff_s14;
      unaff_x19[2] = unaff_s12;
      fVar10 = *unaff_x21;
      fVar12 = unaff_x21[1];
      fVar11 = unaff_x21[2];
      if (*(char *)(unaff_x23 + 0x5ad) == '\0') {
        FUN_04077588(PTR_DAT_09285ae0);
        *(undefined1 *)(unaff_x23 + 0x5ad) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar3 = *(long *)(unaff_x20 + 0x20);
      unaff_x19[6] = SQRT((fVar11 - unaff_s12) * (fVar11 - unaff_s12) +
                          (fVar10 - fVar5) * (fVar10 - fVar5) +
                          (fVar12 - unaff_s14) * (fVar12 - unaff_s14));
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
         (lVar3 = FUN_089c7534(lVar3,0), lVar3 != 0)) {
        fVar8 = (float)FUN_089dcd84(fVar8,lVar3,0);
        if (*(char *)(unaff_x24 + 0x4e7) == '\0') {
          FUN_04077588(PTR_DAT_09285ae0);
          *(undefined1 *)(unaff_x24 + 0x4e7) = 1;
        }
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar5 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
        if (fVar5 <= fStack0000000000000008) {
          if (DAT_098854f1 == '\0') {
            FUN_04077588(PTR_DAT_09285d60);
            DAT_098854f1 = '\x01';
          }
          uVar6 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
          fVar7 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
        }
        else {
          fVar7 = fVar7 / fVar5;
          uVar6 = CONCAT44(fVar9 / fVar5,fVar8 / fVar5);
        }
        *(undefined8 *)(unaff_x19 + 3) = uVar6;
        unaff_x19[5] = fVar7;
        if (fStack000000000000000c <= 0.0) {
          bVar2 = true;
        }
        else {
          bVar2 = unaff_x19[6] <= fStack000000000000000c;
        }
        return bVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


