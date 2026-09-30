/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetCurrentInteractionProfile
ENTRY_POINT: 06978750
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetCurrentInteractionProfile
               (float param_1,float param_2,float param_3,float param_4)

{
  char cVar1;
  ulong uVar2;
  float *pfVar3;
  long *unaff_x19;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined8 *unaff_x22;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
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
  float fVar21;
  float fVar22;
  
  *(float *)(unaff_x21 + 0x20) = param_3;
  fVar6 = 1.0;
  *(float *)(unaff_x21 + 0x30) = (param_4 - param_3) / param_1;
  if (param_2 != 0.0) {
    fVar6 = (param_2 - param_3) / param_2;
  }
  cVar1 = *(char *)((long)unaff_x19 + 0x9c);
  *(float *)(unaff_x21 + 0x10) = fVar6;
  if (cVar1 == '\0') {
    lVar4 = unaff_x19[5];
    *(undefined4 *)(unaff_x21 + 0x14) = 0;
LAB_06978838:
    if (lVar4 == 0) goto LAB_06978e5c;
    *(undefined4 *)(lVar4 + 0x30) = 0;
  }
  else {
    if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_06978e5c;
    fVar18 = *(float *)(unaff_x21 + 0x24);
    fVar6 = (float)FUN_07c42008(*(long *)(unaff_x21 + 0x18),0);
    cVar1 = *(char *)((long)unaff_x19 + 0x9c);
    lVar4 = unaff_x19[5];
    *(float *)(unaff_x21 + 0x14) = fVar18 * fVar6;
    if (cVar1 == '\0') goto LAB_06978838;
    lVar5 = unaff_x19[4];
    if ((lVar5 == 0) || (lVar4 == 0)) goto LAB_06978e5c;
    fVar6 = (float)FUN_069757c4(lVar4,lVar5 + 0x30);
    fVar18 = *(float *)(lVar5 + 0x28);
    *(float *)(lVar4 + 0x30) = fVar6;
    if ((fVar18 <= 0.0) || (*(float *)(lVar5 + 0x24) <= 0.0)) {
      *(int *)((long)unaff_x19 + 0x84) = (int)unaff_x19[0x11];
    }
    else {
      fVar6 = *(float *)(lVar5 + 0x14) + fVar6;
      fVar18 = 0.0;
      if (0.0 <= fVar6) {
        fVar18 = fVar6;
      }
      fVar6 = (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x54) >> 0x20) * fVar18;
      lVar4 = CONCAT44(fVar6,(float)*(undefined8 *)((long)unaff_x19 + 0x54) * fVar18);
      *(float *)((long)unaff_x19 + 0x84) = fVar18;
      *(float *)((long)unaff_x19 + 0x3d4) = *(float *)(unaff_x19 + 10) * fVar18;
      unaff_x19[0x7b] = lVar4;
      if (unaff_x19[0x14] == 0) goto LAB_06978e5c;
      FUN_07d32a2c(*(float *)(unaff_x19 + 10) * fVar18,lVar4,fVar6,(int)unaff_x19[0x4d],
                   *(undefined4 *)((long)unaff_x19 + 0x26c),(int)unaff_x19[0x4e],unaff_x19[0x14],0);
    }
  }
  FUN_06977c58();
  lVar4 = unaff_x19[6];
  if (lVar4 != 0) {
    fVar18 = *(float *)(lVar4 + 0x48);
    fVar20 = *(float *)(unaff_x19 + 0x7d);
    fVar6 = fmodf(*(float *)(lVar4 + 0x60),360.0);
    *(float *)(lVar4 + 0x60) = fVar6 + fVar18 * DAT_015c595c * fVar20;
    fVar20 = *(float *)(unaff_x19 + 0x68);
    fVar11 = *(float *)((long)unaff_x19 + 0x344);
    fVar15 = *(float *)(unaff_x19 + 0x69);
    fVar18 = (float)FUN_07c8b18c(0);
    fVar16 = *(float *)((long)unaff_x19 + 0x33c);
    fVar9 = *(float *)((long)unaff_x19 + 0x334);
    fVar6 = *(float *)(unaff_x19 + 0x10);
    if (0.0 <= *(float *)((long)unaff_x19 + 0x25c)) {
      fVar6 = -*(float *)(unaff_x19 + 0x10);
    }
    fVar12 = *(float *)(unaff_x19 + 0x67);
    fVar7 = (float)FUN_07c8b18c(fVar6,0);
    fVar19 = *(float *)(unaff_x19 + 0x7c);
    fVar21 = *(float *)((long)unaff_x19 + 0xb4);
    fVar6 = fVar11;
    fVar13 = fVar20;
    uVar8 = FUN_07c8b548(fVar18,fVar20,fVar11,fVar15,(int)unaff_x19[0x65],
                         *(undefined4 *)((long)unaff_x19 + 0x32c),(int)unaff_x19[0x66],0);
    fVar10 = fVar11;
    fVar17 = fVar20;
    uVar8 = FUN_07c8b548(fVar18,fVar20,fVar11,fVar15,uVar8,fVar13,fVar6,0);
    FUN_07c8b18c(fVar19 * fVar21,uVar8,fVar17,fVar10,0);
    lVar4 = unaff_x19[6];
    if (lVar4 != 0) {
      fVar17 = *(float *)((long)unaff_x19 + 0x324);
      fVar6 = ((fVar15 * fVar16 - fVar18 * fVar7) - fVar20 * fVar9) - fVar11 * fVar12;
      fVar10 = (fVar11 * fVar9 + fVar18 * fVar16 + fVar15 * fVar7) - fVar20 * fVar12;
      fVar19 = *(float *)(unaff_x19 + 99);
      fVar13 = (fVar18 * fVar12 + fVar20 * fVar16 + fVar15 * fVar9) - fVar11 * fVar7;
      fVar20 = (fVar20 * fVar7 + fVar11 * fVar16 + fVar15 * fVar12) - fVar18 * fVar9;
      fVar11 = *(float *)((long)unaff_x19 + 0x31c);
      fVar15 = *(float *)(unaff_x19 + 100);
      fVar18 = (fVar10 * fVar11 + fVar20 * fVar17 + fVar6 * fVar15) - fVar13 * fVar19;
      *(float *)(lVar4 + 0x30) =
           (fVar10 * fVar17 + fVar6 * fVar19 + fVar13 * fVar15) - fVar20 * fVar11;
      *(float *)(lVar4 + 0x34) =
           (fVar20 * fVar19 + fVar13 * fVar17 + fVar6 * fVar11) - fVar10 * fVar15;
      *(float *)(lVar4 + 0x38) = fVar18;
      *(float *)(lVar4 + 0x3c) =
           ((fVar6 * fVar17 - fVar10 * fVar19) - fVar13 * fVar11) - fVar20 * fVar15;
      (**(code **)(*unaff_x19 + 0x648))();
      if (unaff_x19[0x14] != 0) {
        fVar20 = *(float *)(unaff_x19 + 0xc);
        fVar10 = *(float *)((long)unaff_x19 + 100);
        fVar11 = *(float *)((long)unaff_x19 + 0x5c);
        fVar6 = fVar10;
        fVar15 = (float)FUN_07d310e8(unaff_x19[0x14],0);
        if (unaff_x19[8] != 0) {
          fVar19 = *(float *)(unaff_x19[8] + 0x10);
          fVar21 = *(float *)(unaff_x19 + 0x68);
          fVar13 = *(float *)((long)unaff_x19 + 0x344);
          fVar22 = *(float *)(unaff_x19 + 0x69);
          fVar17 = *(float *)((long)unaff_x19 + 0x8c);
          if (DAT_08974d90 == '\0') {
            FUN_03a8a718(PTR_DAT_08487160);
            DAT_08974d90 = '\x01';
          }
          fVar14 = fVar22 * fVar22 + fVar21 * fVar21 + fVar13 * fVar13;
          if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar14) {
            fVar10 = fVar10 - fVar18;
            fVar11 = fVar11 - fVar15;
            fVar20 = fVar22 * fVar17 * (fVar11 * fVar19 * fVar13 -
                                       (fVar20 - fVar6) * fVar19 * fVar21) +
                     fVar21 * fVar17 * ((fVar20 - fVar6) * fVar19 * fVar22 -
                                       fVar10 * fVar19 * fVar13) +
                     fVar13 * fVar17 * (fVar10 * fVar19 * fVar21 - fVar11 * fVar19 * fVar22);
            fVar6 = (fVar21 * fVar20) / fVar14;
            fVar18 = (fVar13 * fVar20) / fVar14;
            fVar14 = (fVar22 * fVar20) / fVar14;
          }
          else {
            if (DAT_08974d8f == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d8f = '\x01';
            }
            pfVar3 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fVar6 = *pfVar3;
            fVar18 = pfVar3[1];
            fVar14 = pfVar3[2];
          }
          if (unaff_x19[0x14] != 0) {
            FUN_07d32824(fVar6,fVar18,fVar14,unaff_x19[0x14],0);
            if (*(char *)((long)unaff_x19 + 0x9c) != '\0') {
              if ((unaff_x19[4] == 0) || (unaff_x19[0x14] == 0)) goto LAB_06978e5c;
              fVar6 = *(float *)(unaff_x19 + 0x15);
              fVar18 = *(float *)(unaff_x19[4] + 0x28);
              FUN_07d32a2c((int)unaff_x19[0x79],*(undefined4 *)((long)unaff_x19 + 0x3cc),
                           (int)unaff_x19[0x7a],
                           *(float *)((long)unaff_x19 + 0x5c) +
                           fVar18 * fVar6 * *(float *)((long)unaff_x19 + 0x284),
                           (float)unaff_x19[0xc] + (float)unaff_x19[0x51] * fVar6 * fVar18,
                           (float)((ulong)unaff_x19[0xc] >> 0x20) +
                           (float)((ulong)unaff_x19[0x51] >> 0x20) * fVar6 * fVar18,unaff_x19[0x14],
                           0);
              lVar4 = unaff_x19[0x77];
              if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar2 = FUN_07c9c218(lVar4,0,0);
              if ((uVar2 & 1) != 0) {
                if (unaff_x19[0x77] == 0) goto LAB_06978e5c;
                fVar18 = *(float *)(unaff_x19 + 0x17);
                fVar6 = -((float)((ulong)unaff_x19[0x79] >> 0x20) +
                         (float)((ulong)*unaff_x22 >> 0x20)) * fVar18;
                FUN_07d32a2c(CONCAT44(fVar6,-((float)unaff_x19[0x79] + (float)*unaff_x22) * fVar18),
                             fVar6,-((*(float *)(unaff_x19 + 0x7a) +
                                     *(float *)((long)unaff_x19 + 0x3dc)) * fVar18),
                             *(undefined4 *)((long)unaff_x19 + 0x5c),(int)unaff_x19[0xc],
                             *(undefined4 *)((long)unaff_x19 + 100),unaff_x19[0x77],0);
              }
            }
            lVar4 = unaff_x19[6];
            if ((lVar4 != 0) && (*(long *)(lVar4 + 0x20) != 0)) {
              FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                           *(undefined4 *)((long)unaff_x19 + 0x314),*(undefined4 *)(lVar4 + 0x30),
                           *(undefined4 *)(lVar4 + 0x34),*(undefined4 *)(lVar4 + 0x38),
                           *(undefined4 *)(lVar4 + 0x3c),*(long *)(lVar4 + 0x20),0);
              if ((unaff_x19[6] != 0) && (lVar4 = *(long *)(unaff_x19[6] + 0x28), lVar4 != 0)) {
                fVar6 = *(float *)((long)unaff_x19 + 0x324);
                fVar18 = *(float *)(unaff_x19 + 99);
                fVar20 = *(float *)(unaff_x19 + 100);
                fVar11 = *(float *)((long)unaff_x19 + 0x31c);
                FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                             *(undefined4 *)((long)unaff_x19 + 0x314),
                             (fVar7 * fVar6 + fVar16 * fVar18 + fVar9 * fVar20) - fVar12 * fVar11,
                             (fVar12 * fVar18 + fVar9 * fVar6 + fVar16 * fVar11) - fVar7 * fVar20,
                             (fVar7 * fVar11 + fVar12 * fVar6 + fVar16 * fVar20) - fVar9 * fVar18,
                             ((fVar16 * fVar6 - fVar7 * fVar18) - fVar9 * fVar11) - fVar12 * fVar20,
                             lVar4,0);
                if (((unaff_x19[6] != 0) && (lVar4 = *(long *)(unaff_x19[6] + 0x40), lVar4 != 0)) &&
                   (lVar4 = FUN_07c98f88(lVar4,0), lVar4 != 0)) {
                  fVar6 = *(float *)(unaff_x19 + 0x50);
                  fVar18 = *(float *)((long)unaff_x19 + 0x274);
                  fVar20 = *(float *)((long)unaff_x19 + 0x27c);
                  fVar11 = *(float *)(unaff_x19 + 0x4f);
                  FUN_07cad038((int)unaff_x19[0x4d],*(undefined4 *)((long)unaff_x19 + 0x26c),
                               (int)unaff_x19[0x4e],
                               (fVar7 * fVar6 + fVar16 * fVar18 + fVar9 * fVar20) - fVar12 * fVar11,
                               (fVar12 * fVar18 + fVar9 * fVar6 + fVar16 * fVar11) - fVar7 * fVar20,
                               (fVar7 * fVar11 + fVar12 * fVar6 + fVar16 * fVar20) - fVar9 * fVar18,
                               ((fVar16 * fVar6 - fVar7 * fVar18) - fVar9 * fVar11) -
                               fVar12 * fVar20,lVar4,0);
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


