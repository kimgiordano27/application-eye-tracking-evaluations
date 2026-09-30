/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 07a09bc8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 124
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MetaXRFoveationFeature__OnSessionCreate(float param_1,float param_2)

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
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar9;
  float unaff_s14;
  float fVar10;
  float unaff_s15;
  float fVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  undefined4 in_stack_00000020;
  
  param_1 = SQRT(param_1);
  if (param_1 <= param_2) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar7 = *pfVar4;
    fVar8 = pfVar4[1];
    param_1 = pfVar4[2];
  }
  else {
    fVar7 = unaff_s8 / param_1;
    fVar8 = unaff_s9 / param_1;
                    /* try { // try from 07a09be0 to 07b09be3 has its CatchHandler @ 07a09e44 */
    param_1 = unaff_s13 / param_1;
                    /* try { // try from 07a09be4 to 07b09beb has its CatchHandler @ 07a09da4 */
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    if ((iVar1 != 1) &&
       ((iVar1 == 2 ||
        (unaff_s10 <
         SQRT(in_stack_00000000._4_4_ * in_stack_00000000._4_4_ +
              in_stack_00000010 * in_stack_00000010 +
              (unaff_s11 - unaff_s15) * (unaff_s11 - unaff_s15)))))) {
      fVar7 = -fVar7;
      fVar8 = -fVar8;
      param_1 = -param_1;
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
      fVar9 = *unaff_x21;
      fVar11 = unaff_x21[1];
      fVar10 = unaff_x21[2];
      if (*(char *)(unaff_x23 + 0x5ad) == '\0') {
        FUN_04077588(PTR_DAT_09285ae0);
        *(undefined1 *)(unaff_x23 + 0x5ad) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar3 = *(long *)(unaff_x20 + 0x20);
      unaff_x19[6] = SQRT((fVar10 - unaff_s12) * (fVar10 - unaff_s12) +
                          (fVar9 - fVar5) * (fVar9 - fVar5) +
                          (fVar11 - unaff_s14) * (fVar11 - unaff_s14));
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
         (lVar3 = FUN_089c7534(lVar3,0), lVar3 != 0)) {
        fVar7 = (float)FUN_089dcd84(fVar7,lVar3,0);
        if (*(char *)(unaff_x24 + 0x4e7) == '\0') {
          FUN_04077588(PTR_DAT_09285ae0);
          *(undefined1 *)(unaff_x24 + 0x4e7) = 1;
        }
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar5 = SQRT(param_1 * param_1 + fVar7 * fVar7 + fVar8 * fVar8);
        if (fVar5 <= param_2) {
          if (DAT_098854f1 == '\0') {
            FUN_04077588(PTR_DAT_09285d60);
            DAT_098854f1 = '\x01';
          }
          uVar6 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
          param_1 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
        }
        else {
          param_1 = param_1 / fVar5;
          uVar6 = CONCAT44(fVar8 / fVar5,fVar7 / fVar5);
        }
        *(undefined8 *)(unaff_x19 + 3) = uVar6;
        unaff_x19[5] = param_1;
        if (in_stack_00000008._4_4_ <= 0.0) {
          bVar2 = true;
        }
        else {
          bVar2 = unaff_x19[6] <= in_stack_00000008._4_4_;
        }
        return bVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


