/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 069787d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsAmplitudeEnvelope(float param_1,float param_2)

{
  ulong uVar1;
  float *pfVar2;
  long *unaff_x19;
  long lVar3;
  long unaff_x21;
  undefined8 *unaff_x22;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (param_2 <= 0.0) {
    *(int *)((long)unaff_x19 + 0x84) = (int)unaff_x19[0x11];
  }
  else {
    param_1 = *(float *)(unaff_x21 + 0x14) + param_1;
    fVar4 = 0.0;
    if (0.0 <= param_1) {
      fVar4 = param_1;
    }
    fVar9 = (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x54) >> 0x20) * fVar4;
    lVar3 = CONCAT44(fVar9,(float)*(undefined8 *)((long)unaff_x19 + 0x54) * fVar4);
    *(float *)((long)unaff_x19 + 0x84) = fVar4;
    *(float *)((long)unaff_x19 + 0x3d4) = *(float *)(unaff_x19 + 10) * fVar4;
    unaff_x19[0x7b] = lVar3;
    if (unaff_x19[0x14] == 0) goto LAB_06978e5c;
    FUN_07d32a2c(*(float *)(unaff_x19 + 10) * fVar4,lVar3,fVar9,(int)unaff_x19[0x4d],
                 *(undefined4 *)((long)unaff_x19 + 0x26c),(int)unaff_x19[0x4e],unaff_x19[0x14],0);
  }
                    /* try { // try from 06978850 to 06a7885b has its CatchHandler @ 069788e0 */
  FUN_06977c58();
  lVar3 = unaff_x19[6];
  if (lVar3 != 0) {
                    /* try { // try from 06978860 to 06a7886b has its CatchHandler @ 06978908 */
    fVar9 = *(float *)(lVar3 + 0x48);
    fVar18 = *(float *)(unaff_x19 + 0x7d);
    fVar4 = fmodf(*(float *)(lVar3 + 0x60),360.0);
    *(float *)(lVar3 + 0x60) = fVar4 + fVar9 * DAT_015c595c * fVar18;
    fVar18 = *(float *)(unaff_x19 + 0x68);
    fVar10 = *(float *)((long)unaff_x19 + 0x344);
    fVar14 = *(float *)(unaff_x19 + 0x69);
    fVar9 = (float)FUN_07c8b18c(0);
    fVar15 = *(float *)((long)unaff_x19 + 0x33c);
    fVar7 = *(float *)((long)unaff_x19 + 0x334);
    fVar4 = *(float *)(unaff_x19 + 0x10);
    if (0.0 <= *(float *)((long)unaff_x19 + 0x25c)) {
      fVar4 = -*(float *)(unaff_x19 + 0x10);
    }
    fVar11 = *(float *)(unaff_x19 + 0x67);
    fVar5 = (float)FUN_07c8b18c(fVar4,0);
    fVar17 = *(float *)(unaff_x19 + 0x7c);
    fVar19 = *(float *)((long)unaff_x19 + 0xb4);
    fVar4 = fVar10;
    fVar12 = fVar18;
    uVar6 = FUN_07c8b548(fVar9,fVar18,fVar10,fVar14,(int)unaff_x19[0x65],
                         *(undefined4 *)((long)unaff_x19 + 0x32c),(int)unaff_x19[0x66],0);
    fVar8 = fVar10;
    fVar16 = fVar18;
    uVar6 = FUN_07c8b548(fVar9,fVar18,fVar10,fVar14,uVar6,fVar12,fVar4,0);
    FUN_07c8b18c(fVar17 * fVar19,uVar6,fVar16,fVar8,0);
    lVar3 = unaff_x19[6];
    if (lVar3 != 0) {
      fVar16 = *(float *)((long)unaff_x19 + 0x324);
      fVar4 = ((fVar14 * fVar15 - fVar9 * fVar5) - fVar18 * fVar7) - fVar10 * fVar11;
      fVar8 = (fVar10 * fVar7 + fVar9 * fVar15 + fVar14 * fVar5) - fVar18 * fVar11;
      fVar17 = *(float *)(unaff_x19 + 99);
      fVar12 = (fVar9 * fVar11 + fVar18 * fVar15 + fVar14 * fVar7) - fVar10 * fVar5;
      fVar18 = (fVar18 * fVar5 + fVar10 * fVar15 + fVar14 * fVar11) - fVar9 * fVar7;
      fVar10 = *(float *)((long)unaff_x19 + 0x31c);
      fVar14 = *(float *)(unaff_x19 + 100);
      fVar9 = (fVar8 * fVar10 + fVar18 * fVar16 + fVar4 * fVar14) - fVar12 * fVar17;
      *(float *)(lVar3 + 0x30) =
           (fVar8 * fVar16 + fVar4 * fVar17 + fVar12 * fVar14) - fVar18 * fVar10;
      *(float *)(lVar3 + 0x34) =
           (fVar18 * fVar17 + fVar12 * fVar16 + fVar4 * fVar10) - fVar8 * fVar14;
      *(float *)(lVar3 + 0x38) = fVar9;
      *(float *)(lVar3 + 0x3c) =
           ((fVar4 * fVar16 - fVar8 * fVar17) - fVar12 * fVar10) - fVar18 * fVar14;
      (**(code **)(*unaff_x19 + 0x648))();
      if (unaff_x19[0x14] != 0) {
        fVar18 = *(float *)(unaff_x19 + 0xc);
        fVar8 = *(float *)((long)unaff_x19 + 100);
        fVar10 = *(float *)((long)unaff_x19 + 0x5c);
        fVar4 = fVar8;
        fVar14 = (float)FUN_07d310e8(unaff_x19[0x14],0);
        if (unaff_x19[8] != 0) {
          fVar17 = *(float *)(unaff_x19[8] + 0x10);
          fVar19 = *(float *)(unaff_x19 + 0x68);
          fVar12 = *(float *)((long)unaff_x19 + 0x344);
          fVar20 = *(float *)(unaff_x19 + 0x69);
          fVar16 = *(float *)((long)unaff_x19 + 0x8c);
          if (DAT_08974d90 == '\0') {
            FUN_03a8a718(PTR_DAT_08487160);
            DAT_08974d90 = '\x01';
          }
          fVar13 = fVar20 * fVar20 + fVar19 * fVar19 + fVar12 * fVar12;
          if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar13) {
            fVar8 = fVar8 - fVar9;
            fVar10 = fVar10 - fVar14;
            fVar18 = fVar20 * fVar16 * (fVar10 * fVar17 * fVar12 -
                                       (fVar18 - fVar4) * fVar17 * fVar19) +
                     fVar19 * fVar16 * ((fVar18 - fVar4) * fVar17 * fVar20 - fVar8 * fVar17 * fVar12
                                       ) +
                     fVar12 * fVar16 * (fVar8 * fVar17 * fVar19 - fVar10 * fVar17 * fVar20);
            fVar4 = (fVar19 * fVar18) / fVar13;
            fVar9 = (fVar12 * fVar18) / fVar13;
            fVar13 = (fVar20 * fVar18) / fVar13;
          }
          else {
            if (DAT_08974d8f == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d8f = '\x01';
            }
            pfVar2 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fVar4 = *pfVar2;
            fVar9 = pfVar2[1];
            fVar13 = pfVar2[2];
          }
          if (unaff_x19[0x14] != 0) {
            FUN_07d32824(fVar4,fVar9,fVar13,unaff_x19[0x14],0);
            if (*(char *)((long)unaff_x19 + 0x9c) != '\0') {
              if ((unaff_x19[4] == 0) || (unaff_x19[0x14] == 0)) goto LAB_06978e5c;
              fVar4 = *(float *)(unaff_x19 + 0x15);
              fVar9 = *(float *)(unaff_x19[4] + 0x28);
              FUN_07d32a2c((int)unaff_x19[0x79],*(undefined4 *)((long)unaff_x19 + 0x3cc),
                           (int)unaff_x19[0x7a],
                           *(float *)((long)unaff_x19 + 0x5c) +
                           fVar9 * fVar4 * *(float *)((long)unaff_x19 + 0x284),
                           (float)unaff_x19[0xc] + (float)unaff_x19[0x51] * fVar4 * fVar9,
                           (float)((ulong)unaff_x19[0xc] >> 0x20) +
                           (float)((ulong)unaff_x19[0x51] >> 0x20) * fVar4 * fVar9,unaff_x19[0x14],0
                          );
              lVar3 = unaff_x19[0x77];
              if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar1 = FUN_07c9c218(lVar3,0,0);
              if ((uVar1 & 1) != 0) {
                if (unaff_x19[0x77] == 0) goto LAB_06978e5c;
                fVar9 = *(float *)(unaff_x19 + 0x17);
                fVar4 = -((float)((ulong)unaff_x19[0x79] >> 0x20) +
                         (float)((ulong)*unaff_x22 >> 0x20)) * fVar9;
                FUN_07d32a2c(CONCAT44(fVar4,-((float)unaff_x19[0x79] + (float)*unaff_x22) * fVar9),
                             fVar4,-((*(float *)(unaff_x19 + 0x7a) +
                                     *(float *)((long)unaff_x19 + 0x3dc)) * fVar9),
                             *(undefined4 *)((long)unaff_x19 + 0x5c),(int)unaff_x19[0xc],
                             *(undefined4 *)((long)unaff_x19 + 100),unaff_x19[0x77],0);
              }
            }
            lVar3 = unaff_x19[6];
            if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
              FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                           *(undefined4 *)((long)unaff_x19 + 0x314),*(undefined4 *)(lVar3 + 0x30),
                           *(undefined4 *)(lVar3 + 0x34),*(undefined4 *)(lVar3 + 0x38),
                           *(undefined4 *)(lVar3 + 0x3c),*(long *)(lVar3 + 0x20),0);
              if ((unaff_x19[6] != 0) && (lVar3 = *(long *)(unaff_x19[6] + 0x28), lVar3 != 0)) {
                fVar4 = *(float *)((long)unaff_x19 + 0x324);
                fVar9 = *(float *)(unaff_x19 + 99);
                fVar18 = *(float *)(unaff_x19 + 100);
                fVar10 = *(float *)((long)unaff_x19 + 0x31c);
                FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                             *(undefined4 *)((long)unaff_x19 + 0x314),
                             (fVar5 * fVar4 + fVar15 * fVar9 + fVar7 * fVar18) - fVar11 * fVar10,
                             (fVar11 * fVar9 + fVar7 * fVar4 + fVar15 * fVar10) - fVar5 * fVar18,
                             (fVar5 * fVar10 + fVar11 * fVar4 + fVar15 * fVar18) - fVar7 * fVar9,
                             ((fVar15 * fVar4 - fVar5 * fVar9) - fVar7 * fVar10) - fVar11 * fVar18,
                             lVar3,0);
                if (((unaff_x19[6] != 0) && (lVar3 = *(long *)(unaff_x19[6] + 0x40), lVar3 != 0)) &&
                   (lVar3 = FUN_07c98f88(lVar3,0), lVar3 != 0)) {
                  fVar4 = *(float *)(unaff_x19 + 0x50);
                  fVar9 = *(float *)((long)unaff_x19 + 0x274);
                  fVar18 = *(float *)((long)unaff_x19 + 0x27c);
                  fVar10 = *(float *)(unaff_x19 + 0x4f);
                  FUN_07cad038((int)unaff_x19[0x4d],*(undefined4 *)((long)unaff_x19 + 0x26c),
                               (int)unaff_x19[0x4e],
                               (fVar5 * fVar4 + fVar15 * fVar9 + fVar7 * fVar18) - fVar11 * fVar10,
                               (fVar11 * fVar9 + fVar7 * fVar4 + fVar15 * fVar10) - fVar5 * fVar18,
                               (fVar5 * fVar10 + fVar11 * fVar4 + fVar15 * fVar18) - fVar7 * fVar9,
                               ((fVar15 * fVar4 - fVar5 * fVar9) - fVar7 * fVar10) - fVar11 * fVar18
                               ,lVar3,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06978e5c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


