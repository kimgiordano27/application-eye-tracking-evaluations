/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 07a09a50
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MetaXRFeature__OnSessionExiting(long param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  float *pfVar6;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float in_s4;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float fVar12;
  float unaff_s11;
  float fVar13;
  float unaff_s13;
  float fVar14;
  float fVar15;
  float unaff_s14;
  float unaff_s15;
  float fVar16;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xae0));
  *(undefined1 *)(unaff_x24 + 0xa4f) = 1;
  fVar13 = 0.0;
  fVar12 = 0.0 - unaff_s13;
  fVar11 = 0.0 - unaff_s9;
  fVar14 = fVar11 * fVar11 + fVar12 * fVar12 + unaff_s14;
  fVar8 = unaff_s15;
  if (fVar14 == 0.0) {
                    /* try { // try from 07a09a98 to 07b09aa3 has its CatchHandler @ 07a09e3c */
    fVar15 = 0.0;
  }
  else {
    fVar10 = SQRT(unaff_s9 * unaff_s9 + unaff_s13 * unaff_s13 + unaff_s14) - unaff_s8;
    fVar15 = fVar10 * fVar10;
    bVar3 = false;
    bVar4 = true;
    if (0.0 <= fVar10) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar14) && !NAN(fVar15)) {
        bVar3 = fVar14 == fVar15;
        bVar4 = fVar15 <= fVar14;
      }
    }
    fVar15 = 0.0;
    if (bVar4 && !bVar3) {
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      fVar14 = SQRT(fVar14);
      fVar15 = in_stack_00000010 + (fVar12 / fVar14) * fVar10;
      fVar8 = unaff_s15 + (in_s4 / fVar14) * fVar10;
      fVar13 = in_stack_00000000._4_4_ + (fVar11 / fVar14) * fVar10;
    }
  }
  if (DAT_098854e9 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar5 != 0)) {
    fVar14 = *(float *)(lVar5 + 0x20);
    if (DAT_098854e7 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e7 = '\x01';
    }
    fVar11 = unaff_s15 - fVar8;
    fVar10 = 0.0 - fVar15;
    fVar12 = 0.0 - fVar13;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar2 = DAT_01aecf88;
    fVar7 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
    if (fVar7 <= DAT_01aecf88) {
      if (DAT_098854f1 == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854f1 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
      fVar10 = *pfVar6;
      fVar11 = pfVar6[1];
      fVar12 = pfVar6[2];
    }
    else {
      fVar10 = fVar10 / fVar7;
      fVar11 = fVar11 / fVar7;
      fVar12 = fVar12 / fVar7;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x28);
      if ((iVar1 != 1) &&
         ((iVar1 == 2 ||
          (fVar14 < SQRT(in_stack_00000000._4_4_ * in_stack_00000000._4_4_ +
                         in_stack_00000010 * in_stack_00000010 +
                         (unaff_s11 - unaff_s15) * (unaff_s11 - unaff_s15)))))) {
        fVar10 = -fVar10;
        fVar11 = -fVar11;
        fVar12 = -fVar12;
      }
      unaff_x19[0] = 0.0;
      unaff_x19[1] = 0.0;
      unaff_x19[2] = 0.0;
      unaff_x19[3] = 0.0;
      unaff_x19[6] = 0.0;
      unaff_x19[4] = 0.0;
      unaff_x19[5] = 0.0;
      if (((*(long *)(unaff_x20 + 0x20) != 0) &&
          (lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar5 != 0)) &&
         (lVar5 = FUN_089c7534(lVar5,0), lVar5 != 0)) {
        fVar14 = (float)FUN_089dd968(fVar15,lVar5,0);
        *unaff_x19 = fVar14;
        unaff_x19[1] = fVar8;
        unaff_x19[2] = fVar13;
        fVar15 = *unaff_x21;
        fVar16 = unaff_x21[1];
        fVar7 = unaff_x21[2];
        if (*(char *)(unaff_x23 + 0x5ad) == '\0') {
          FUN_04077588(PTR_DAT_09285ae0);
          *(undefined1 *)(unaff_x23 + 0x5ad) = 1;
        }
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar5 = *(long *)(unaff_x20 + 0x20);
        unaff_x19[6] = SQRT((fVar7 - fVar13) * (fVar7 - fVar13) +
                            (fVar15 - fVar14) * (fVar15 - fVar14) +
                            (fVar16 - fVar8) * (fVar16 - fVar8));
        if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
           (lVar5 = FUN_089c7534(lVar5,0), lVar5 != 0)) {
          fVar8 = (float)FUN_089dcd84(fVar10,lVar5,0);
          if (DAT_098854e7 == '\0') {
            FUN_04077588(PTR_DAT_09285ae0);
            DAT_098854e7 = '\x01';
          }
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          fVar14 = SQRT(fVar12 * fVar12 + fVar8 * fVar8 + fVar11 * fVar11);
          if (fVar14 <= fVar2) {
            if (DAT_098854f1 == '\0') {
              FUN_04077588(PTR_DAT_09285d60);
              DAT_098854f1 = '\x01';
            }
            uVar9 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
            fVar12 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
          }
          else {
            fVar12 = fVar12 / fVar14;
            uVar9 = CONCAT44(fVar11 / fVar14,fVar8 / fVar14);
          }
          *(undefined8 *)(unaff_x19 + 3) = uVar9;
          unaff_x19[5] = fVar12;
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
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


