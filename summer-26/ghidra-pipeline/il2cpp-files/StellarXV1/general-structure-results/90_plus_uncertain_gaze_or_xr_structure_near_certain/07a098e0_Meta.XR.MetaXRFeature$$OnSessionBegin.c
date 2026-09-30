/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 07a098e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;weak_pose_support;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;weak_vector_component_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MetaXRFeature__OnSessionBegin(float param_1,long param_2,float *param_3,float *param_4)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float __x;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  
  _fStack0000000000000030 = 0;
  _fStack0000000000000038 = 0;
                    /* try { // try from 07a09904 to 07b09907 has its CatchHandler @ 07a09e44 */
  uVar5 = FUN_07a09ff8(param_2,&stack0x00000030);
                    /* try { // try from 07a09908 to 07b0990f has its CatchHandler @ 07a09dd0 */
  if ((uVar5 & 1) == 0) {
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    param_4[3] = 0.0;
    param_4[6] = 0.0;
    param_4[4] = 0.0;
    param_4[5] = 0.0;
    return false;
  }
  if (((*(long *)(param_2 + 0x20) == 0) ||
      (lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x20), lVar6 == 0)) ||
     (lVar6 = FUN_089c7534(lVar6,0), lVar6 == 0)) goto LAB_07a09edc;
  fVar14 = param_3[1];
  __x = param_3[2];
  fVar8 = (float)FUN_089dda60(*param_3,lVar6,0);
  puVar2 = PTR_DAT_09285ae0;
                    /* try { // try from 07a09944 to 07b0996b has its CatchHandler @ 07a09e44 */
  fVar17 = fStack0000000000000034;
  fVar19 = fStack000000000000003c;
  if (fVar14 <= fStack000000000000003c) {
    fVar19 = fVar14;
  }
  fVar20 = fStack0000000000000038;
                    /* try { // try from 07a0996c to 07b09973 has its CatchHandler @ 07a09e34 */
  if (fStack0000000000000038 <= fVar14) {
    fVar20 = fVar19;
  }
  fVar19 = fVar14;
  if (fStack0000000000000038 <= fStack000000000000003c) {
    fVar19 = fVar20;
  }
  fVar20 = fVar19;
  if (360.0 <= fStack0000000000000034) {
    if (DAT_098855ad == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098855ad = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((*(long *)(param_2 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x20), lVar6 == 0)) goto LAB_07a09edc;
    fVar17 = fVar19 - fVar19;
    fVar9 = *(float *)(lVar6 + 0x20);
    if (DAT_09886a4f == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_09886a4f = '\x01';
    }
    fVar10 = 0.0;
    fVar18 = 0.0 - fVar8;
    fVar16 = 0.0 - __x;
    fVar15 = fVar16 * fVar16 + fVar18 * fVar18 + fVar17 * fVar17;
    if (fVar15 == 0.0) {
      fVar11 = 0.0;
    }
    else {
      fVar9 = SQRT(__x * __x + fVar8 * fVar8 + fVar17 * fVar17) - fVar9;
      fVar11 = fVar9 * fVar9;
      bVar3 = false;
      bVar4 = true;
      if (0.0 <= fVar9) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar15) && !NAN(fVar11)) {
          bVar3 = fVar15 == fVar11;
          bVar4 = fVar11 <= fVar15;
        }
      }
      fVar11 = 0.0;
      if (bVar4 && !bVar3) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar15 = SQRT(fVar15);
        fVar11 = fVar8 + (fVar18 / fVar15) * fVar9;
        fVar20 = fVar19 + (fVar17 / fVar15) * fVar9;
        fVar10 = __x + (fVar16 / fVar15) * fVar9;
      }
    }
  }
  else {
    fVar9 = atan2f(fVar8,__x);
    fVar10 = fmodf(fVar9 * DAT_01aec2c8,360.0);
    fVar9 = fmodf(fStack0000000000000030,360.0);
    if (fVar10 <= fVar9 + 180.0) {
      if (fVar10 < fVar9 + -180.0) {
        fVar15 = 360.0;
        goto LAB_07a09abc;
      }
    }
    else {
      fVar15 = -360.0;
LAB_07a09abc:
      fVar10 = fVar10 + fVar15;
    }
    fVar15 = fVar17 * 0.5 + fVar9;
    fVar9 = fVar9 - fVar17 * 0.5;
    if (fVar10 <= fVar15) {
      fVar15 = fVar10;
    }
    if (fVar9 <= fVar10) {
      fVar9 = fVar15;
    }
    fVar9 = fVar9 * DAT_01aed080;
    fVar11 = sinf(fVar9);
    if ((*(long *)(param_2 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x20), lVar6 == 0)) goto LAB_07a09edc;
    fVar17 = *(float *)(lVar6 + 0x20);
    fVar11 = fVar11 * fVar17;
    fVar10 = cosf(fVar9);
    fVar10 = fVar10 * fVar17;
  }
  if (DAT_098854e9 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if ((*(long *)(param_2 + 0x20) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x20), lVar6 != 0)) {
    fVar17 = *(float *)(lVar6 + 0x20);
    if (DAT_098854e7 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e7 = '\x01';
    }
    fVar9 = fVar19 - fVar20;
    fVar16 = 0.0 - fVar11;
    fVar15 = 0.0 - fVar10;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar18 = DAT_01aecf88;
    fVar12 = SQRT(fVar15 * fVar15 + fVar9 * fVar9 + fVar16 * fVar16);
    if (fVar12 <= DAT_01aecf88) {
      if (DAT_098854f1 == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854f1 = '\x01';
      }
      pfVar7 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
      fVar16 = *pfVar7;
      fVar9 = pfVar7[1];
      fVar15 = pfVar7[2];
    }
    else {
      fVar16 = fVar16 / fVar12;
      fVar9 = fVar9 / fVar12;
      fVar15 = fVar15 / fVar12;
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      iVar1 = *(int *)(*(long *)(param_2 + 0x20) + 0x28);
      if ((iVar1 != 1) &&
         ((iVar1 == 2 ||
          (fVar17 < SQRT(__x * __x + fVar8 * fVar8 + (fVar14 - fVar19) * (fVar14 - fVar19)))))) {
        fVar16 = -fVar16;
        fVar9 = -fVar9;
        fVar15 = -fVar15;
      }
      param_4[0] = 0.0;
      param_4[1] = 0.0;
      param_4[2] = 0.0;
      param_4[3] = 0.0;
      param_4[6] = 0.0;
      param_4[4] = 0.0;
      param_4[5] = 0.0;
      if (((*(long *)(param_2 + 0x20) != 0) &&
          (lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x20), lVar6 != 0)) &&
         (lVar6 = FUN_089c7534(lVar6,0), lVar6 != 0)) {
        fVar17 = (float)FUN_089dd968(fVar11,lVar6,0);
        *param_4 = fVar17;
        param_4[1] = fVar20;
        param_4[2] = fVar10;
        fVar19 = *param_3;
        fVar14 = param_3[1];
        fVar8 = param_3[2];
        if (DAT_098855ad == '\0') {
          FUN_04077588(PTR_DAT_09285ae0);
          DAT_098855ad = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar6 = *(long *)(param_2 + 0x20);
        param_4[6] = SQRT((fVar8 - fVar10) * (fVar8 - fVar10) +
                          (fVar19 - fVar17) * (fVar19 - fVar17) +
                          (fVar14 - fVar20) * (fVar14 - fVar20));
        if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) &&
           (lVar6 = FUN_089c7534(lVar6,0), lVar6 != 0)) {
          fVar17 = (float)FUN_089dcd84(fVar16,lVar6,0);
          if (DAT_098854e7 == '\0') {
            FUN_04077588(PTR_DAT_09285ae0);
            DAT_098854e7 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          fVar19 = SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar9 * fVar9);
          if (fVar19 <= fVar18) {
            if (DAT_098854f1 == '\0') {
              FUN_04077588(PTR_DAT_09285d60);
              DAT_098854f1 = '\x01';
            }
            uVar13 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
            fVar15 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
          }
          else {
            fVar15 = fVar15 / fVar19;
            uVar13 = CONCAT44(fVar9 / fVar19,fVar17 / fVar19);
          }
          *(undefined8 *)(param_4 + 3) = uVar13;
          param_4[5] = fVar15;
          if (param_1 <= 0.0) {
            bVar3 = true;
          }
          else {
            bVar3 = param_4[6] <= param_1;
          }
          return bVar3;
        }
      }
    }
  }
LAB_07a09edc:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


