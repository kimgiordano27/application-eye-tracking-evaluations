/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 07a09998
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MetaXRFeature__OnSessionEnd(long param_1,float param_2)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s10;
  float unaff_s11;
  float fVar13;
  float unaff_s14;
  float fVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000030;
  
                    /* try { // try from 07a0999c to 07b099a7 has its CatchHandler @ 07a09e28 */
  fVar6 = fmodf(param_2 * *(float *)(param_1 + 0x2c8),360.0);
                    /* try { // try from 07a099b4 to 07b099bb has its CatchHandler @ 07a09e24 */
  fVar7 = fmodf(in_stack_00000030,360.0);
  if (fVar6 <= fVar7 + 180.0) {
    if (fVar7 + -180.0 <= fVar6) goto LAB_07a09ac4;
    fVar10 = 360.0;
  }
  else {
    fVar10 = -360.0;
  }
  fVar6 = fVar6 + fVar10;
LAB_07a09ac4:
  fVar10 = unaff_s10 * 0.5 + fVar7;
  fVar7 = fVar7 - unaff_s10 * 0.5;
  if (fVar6 <= fVar10) {
    fVar10 = fVar6;
  }
  if (fVar7 <= fVar6) {
    fVar7 = fVar10;
  }
  fVar7 = fVar7 * DAT_01aed080;
  fVar6 = sinf(fVar7);
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
    fVar10 = *(float *)(lVar4 + 0x20);
    fVar6 = fVar6 * fVar10;
    fVar7 = cosf(fVar7);
    fVar7 = fVar7 * fVar10;
    if (DAT_098854e9 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e9 = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) {
      fVar10 = *(float *)(lVar4 + 0x20);
      if (DAT_098854e7 == '\0') {
        FUN_04077588(PTR_DAT_09285ae0);
        DAT_098854e7 = '\x01';
      }
      fVar12 = unaff_s14 - unaff_s14;
      fVar11 = 0.0 - fVar6;
      fVar13 = 0.0 - fVar7;
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      fVar2 = DAT_01aecf88;
      fVar8 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
      if (fVar8 <= DAT_01aecf88) {
        if (DAT_098854f1 == '\0') {
          FUN_04077588(PTR_DAT_09285d60);
          DAT_098854f1 = '\x01';
        }
        pfVar5 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
        fVar11 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar13 = pfVar5[2];
      }
      else {
        fVar11 = fVar11 / fVar8;
        fVar12 = fVar12 / fVar8;
        fVar13 = fVar13 / fVar8;
      }
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
        if ((iVar1 != 1) &&
           ((iVar1 == 2 ||
            (fVar10 < SQRT(in_stack_00000000._4_4_ * in_stack_00000000._4_4_ +
                           in_stack_00000010 * in_stack_00000010 +
                           (unaff_s11 - unaff_s14) * (unaff_s11 - unaff_s14)))))) {
          fVar11 = -fVar11;
          fVar12 = -fVar12;
          fVar13 = -fVar13;
        }
        unaff_x19[0] = 0.0;
        unaff_x19[1] = 0.0;
        unaff_x19[2] = 0.0;
        unaff_x19[3] = 0.0;
        unaff_x19[6] = 0.0;
        unaff_x19[4] = 0.0;
        unaff_x19[5] = 0.0;
        if (((*(long *)(unaff_x20 + 0x20) != 0) &&
            (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar4 != 0)) &&
           (lVar4 = FUN_089c7534(lVar4,0), lVar4 != 0)) {
          fVar6 = (float)FUN_089dd968(fVar6,lVar4,0);
          *unaff_x19 = fVar6;
          unaff_x19[1] = unaff_s14;
          unaff_x19[2] = fVar7;
          fVar10 = *unaff_x21;
          fVar14 = unaff_x21[1];
          fVar8 = unaff_x21[2];
          if (*(char *)(unaff_x23 + 0x5ad) == '\0') {
            FUN_04077588(PTR_DAT_09285ae0);
            *(undefined1 *)(unaff_x23 + 0x5ad) = 1;
          }
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar4 = *(long *)(unaff_x20 + 0x20);
          unaff_x19[6] = SQRT((fVar8 - fVar7) * (fVar8 - fVar7) +
                              (fVar10 - fVar6) * (fVar10 - fVar6) +
                              (fVar14 - unaff_s14) * (fVar14 - unaff_s14));
          if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
             (lVar4 = FUN_089c7534(lVar4,0), lVar4 != 0)) {
            fVar7 = (float)FUN_089dcd84(fVar11,lVar4,0);
            if (DAT_098854e7 == '\0') {
              FUN_04077588(PTR_DAT_09285ae0);
              DAT_098854e7 = '\x01';
            }
            if (*(int *)(*unaff_x22 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            fVar6 = SQRT(fVar13 * fVar13 + fVar7 * fVar7 + fVar12 * fVar12);
            if (fVar6 <= fVar2) {
              if (DAT_098854f1 == '\0') {
                FUN_04077588(PTR_DAT_09285d60);
                DAT_098854f1 = '\x01';
              }
              uVar9 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
              fVar13 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
            }
            else {
              fVar13 = fVar13 / fVar6;
              uVar9 = CONCAT44(fVar12 / fVar6,fVar7 / fVar6);
            }
            *(undefined8 *)(unaff_x19 + 3) = uVar9;
            unaff_x19[5] = fVar13;
            if (in_stack_00000008._4_4_ <= 0.0) {
              bVar3 = true;
            }
            else {
              bVar3 = unaff_x19[6] <= in_stack_00000008._4_4_;
            }
            return bVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


