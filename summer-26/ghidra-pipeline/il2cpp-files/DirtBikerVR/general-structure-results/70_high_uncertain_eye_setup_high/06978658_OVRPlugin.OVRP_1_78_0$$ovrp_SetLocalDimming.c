/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetLocalDimming
ENTRY_POINT: 06978658
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetLocalDimming
               (float param_1,float param_2,undefined1 param_3 [16],undefined8 param_4)

{
  char cVar1;
  ulong uVar2;
  float *pfVar3;
  long in_x9;
  long *unaff_x19;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x22;
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
  float fVar21;
  float fVar22;
  
  *(float *)(in_x9 + 0x20) =
       param_3._4_4_ * (float)((ulong)param_4 >> 0x20) +
       param_1 * param_2 + param_3._0_4_ * (float)param_4;
  lVar5 = unaff_x19[4];
  if (lVar5 == 0) goto LAB_06978e5c;
  cVar1 = *(char *)((long)unaff_x19 + 0x9c);
  *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar5 + 0x20);
  if (cVar1 == '\0') {
    fVar9 = *(float *)(lVar5 + 0x28);
    fVar11 = fVar9;
  }
  else {
    fVar8 = *(float *)(unaff_x19 + 0xc);
    fVar11 = *(float *)((long)unaff_x19 + 100);
    uVar6 = FUN_07c888bc(*(undefined4 *)((long)unaff_x19 + 0x5c),(long)unaff_x19 + 0x21c,0);
    *(undefined4 *)(unaff_x19 + 0x89) = uVar6;
    *(float *)((long)unaff_x19 + 0x44c) = fVar8;
    *(float *)(unaff_x19 + 0x8a) = fVar11;
    if ((unaff_x19[6] == 0) || (lVar5 = unaff_x19[4], lVar5 == 0)) goto LAB_06978e5c;
    fVar20 = *(float *)(unaff_x19[6] + 0x58);
    fVar11 = fVar11 / fVar20;
    fVar9 = 1.0;
    if (fVar11 <= 1.0) {
      fVar9 = fVar11;
    }
    fVar15 = -1.0;
    if (-1.0 <= fVar11) {
      fVar15 = fVar9;
    }
    fVar11 = asinf(fVar15);
    fVar11 = cosf(fVar11);
    fVar9 = *(float *)(lVar5 + 0x28);
    fVar8 = fVar8 + fVar20 * fVar11;
    fVar11 = -fVar8;
    fVar20 = fVar9;
    if (fVar11 <= fVar9) {
      fVar20 = fVar11;
    }
    fVar11 = 0.0;
    if (fVar8 <= 0.0) {
      fVar11 = fVar20;
    }
  }
  fVar15 = *(float *)(lVar5 + 0x20);
  fVar20 = *(float *)(unaff_x19 + 0x7d);
  fVar8 = fVar11;
  if (fVar15 < fVar11) {
    fVar18 = *(float *)(unaff_x19 + 0x16) * fVar20;
    fVar8 = -(*(float *)(unaff_x19 + 0x16) * fVar20);
    if (0.0 <= fVar11 - fVar15) {
      fVar8 = fVar18;
    }
    fVar8 = fVar15 + fVar8;
    if (ABS(fVar11 - fVar15) <= fVar18) {
      fVar8 = fVar11;
    }
  }
  *(float *)(lVar5 + 0x20) = fVar8;
  fVar11 = 1.0;
  *(float *)(lVar5 + 0x30) = (*(float *)(lVar5 + 0x2c) - fVar8) / fVar20;
  if (fVar9 != 0.0) {
    fVar11 = (fVar9 - fVar8) / fVar9;
  }
  cVar1 = *(char *)((long)unaff_x19 + 0x9c);
  *(float *)(lVar5 + 0x10) = fVar11;
  if (cVar1 == '\0') {
    lVar4 = unaff_x19[5];
    *(undefined4 *)(lVar5 + 0x14) = 0;
LAB_06978838:
    if (lVar4 == 0) goto LAB_06978e5c;
    *(undefined4 *)(lVar4 + 0x30) = 0;
  }
  else {
    if (*(long *)(lVar5 + 0x18) == 0) goto LAB_06978e5c;
    fVar9 = *(float *)(lVar5 + 0x24);
    fVar11 = (float)FUN_07c42008(*(long *)(lVar5 + 0x18),0);
    cVar1 = *(char *)((long)unaff_x19 + 0x9c);
    lVar4 = unaff_x19[5];
    *(float *)(lVar5 + 0x14) = fVar9 * fVar11;
    if (cVar1 == '\0') goto LAB_06978838;
    lVar5 = unaff_x19[4];
    if ((lVar5 == 0) || (lVar4 == 0)) goto LAB_06978e5c;
    fVar11 = (float)FUN_069757c4(lVar4,lVar5 + 0x30);
    fVar9 = *(float *)(lVar5 + 0x28);
    *(float *)(lVar4 + 0x30) = fVar11;
    if ((fVar9 <= 0.0) || (*(float *)(lVar5 + 0x24) <= 0.0)) {
      *(int *)((long)unaff_x19 + 0x84) = (int)unaff_x19[0x11];
    }
    else {
      fVar11 = *(float *)(lVar5 + 0x14) + fVar11;
      fVar9 = 0.0;
      if (0.0 <= fVar11) {
        fVar9 = fVar11;
      }
      fVar11 = (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x54) >> 0x20) * fVar9;
      lVar5 = CONCAT44(fVar11,(float)*(undefined8 *)((long)unaff_x19 + 0x54) * fVar9);
      *(float *)((long)unaff_x19 + 0x84) = fVar9;
      *(float *)((long)unaff_x19 + 0x3d4) = *(float *)(unaff_x19 + 10) * fVar9;
      unaff_x19[0x7b] = lVar5;
      if (unaff_x19[0x14] == 0) goto LAB_06978e5c;
      FUN_07d32a2c(*(float *)(unaff_x19 + 10) * fVar9,lVar5,fVar11,(int)unaff_x19[0x4d],
                   *(undefined4 *)((long)unaff_x19 + 0x26c),(int)unaff_x19[0x4e],unaff_x19[0x14],0);
    }
  }
  FUN_06977c58();
  lVar5 = unaff_x19[6];
  if (lVar5 != 0) {
    fVar9 = *(float *)(lVar5 + 0x48);
    fVar8 = *(float *)(unaff_x19 + 0x7d);
    fVar11 = fmodf(*(float *)(lVar5 + 0x60),360.0);
    *(float *)(lVar5 + 0x60) = fVar11 + fVar9 * DAT_015c595c * fVar8;
    fVar8 = *(float *)(unaff_x19 + 0x68);
    fVar15 = *(float *)((long)unaff_x19 + 0x344);
    fVar18 = *(float *)(unaff_x19 + 0x69);
    fVar9 = (float)FUN_07c8b18c(0);
    fVar16 = *(float *)((long)unaff_x19 + 0x33c);
    fVar20 = *(float *)((long)unaff_x19 + 0x334);
    fVar11 = *(float *)(unaff_x19 + 0x10);
    if (0.0 <= *(float *)((long)unaff_x19 + 0x25c)) {
      fVar11 = -*(float *)(unaff_x19 + 0x10);
    }
    fVar12 = *(float *)(unaff_x19 + 0x67);
    fVar7 = (float)FUN_07c8b18c(fVar11,0);
    fVar19 = *(float *)(unaff_x19 + 0x7c);
    fVar21 = *(float *)((long)unaff_x19 + 0xb4);
    fVar11 = fVar15;
    fVar13 = fVar8;
    uVar6 = FUN_07c8b548(fVar9,fVar8,fVar15,fVar18,(int)unaff_x19[0x65],
                         *(undefined4 *)((long)unaff_x19 + 0x32c),(int)unaff_x19[0x66],0);
    fVar10 = fVar15;
    fVar17 = fVar8;
    uVar6 = FUN_07c8b548(fVar9,fVar8,fVar15,fVar18,uVar6,fVar13,fVar11,0);
    FUN_07c8b18c(fVar19 * fVar21,uVar6,fVar17,fVar10,0);
    lVar5 = unaff_x19[6];
    if (lVar5 != 0) {
      fVar17 = *(float *)((long)unaff_x19 + 0x324);
      fVar11 = ((fVar18 * fVar16 - fVar9 * fVar7) - fVar8 * fVar20) - fVar15 * fVar12;
      fVar10 = (fVar15 * fVar20 + fVar9 * fVar16 + fVar18 * fVar7) - fVar8 * fVar12;
      fVar19 = *(float *)(unaff_x19 + 99);
      fVar13 = (fVar9 * fVar12 + fVar8 * fVar16 + fVar18 * fVar20) - fVar15 * fVar7;
      fVar8 = (fVar8 * fVar7 + fVar15 * fVar16 + fVar18 * fVar12) - fVar9 * fVar20;
      fVar15 = *(float *)((long)unaff_x19 + 0x31c);
      fVar18 = *(float *)(unaff_x19 + 100);
      fVar9 = (fVar10 * fVar15 + fVar8 * fVar17 + fVar11 * fVar18) - fVar13 * fVar19;
      *(float *)(lVar5 + 0x30) =
           (fVar10 * fVar17 + fVar11 * fVar19 + fVar13 * fVar18) - fVar8 * fVar15;
      *(float *)(lVar5 + 0x34) =
           (fVar8 * fVar19 + fVar13 * fVar17 + fVar11 * fVar15) - fVar10 * fVar18;
      *(float *)(lVar5 + 0x38) = fVar9;
      *(float *)(lVar5 + 0x3c) =
           ((fVar11 * fVar17 - fVar10 * fVar19) - fVar13 * fVar15) - fVar8 * fVar18;
      (**(code **)(*unaff_x19 + 0x648))();
      if (unaff_x19[0x14] != 0) {
        fVar8 = *(float *)(unaff_x19 + 0xc);
        fVar10 = *(float *)((long)unaff_x19 + 100);
        fVar15 = *(float *)((long)unaff_x19 + 0x5c);
        fVar11 = fVar10;
        fVar18 = (float)FUN_07d310e8(unaff_x19[0x14],0);
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
            fVar10 = fVar10 - fVar9;
            fVar15 = fVar15 - fVar18;
            fVar8 = fVar22 * fVar17 * (fVar15 * fVar19 * fVar13 - (fVar8 - fVar11) * fVar19 * fVar21
                                      ) +
                    fVar21 * fVar17 * ((fVar8 - fVar11) * fVar19 * fVar22 - fVar10 * fVar19 * fVar13
                                      ) +
                    fVar13 * fVar17 * (fVar10 * fVar19 * fVar21 - fVar15 * fVar19 * fVar22);
            fVar11 = (fVar21 * fVar8) / fVar14;
            fVar9 = (fVar13 * fVar8) / fVar14;
            fVar14 = (fVar22 * fVar8) / fVar14;
          }
          else {
            if (DAT_08974d8f == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d8f = '\x01';
            }
            pfVar3 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fVar11 = *pfVar3;
            fVar9 = pfVar3[1];
            fVar14 = pfVar3[2];
          }
          if (unaff_x19[0x14] != 0) {
            FUN_07d32824(fVar11,fVar9,fVar14,unaff_x19[0x14],0);
            if (*(char *)((long)unaff_x19 + 0x9c) != '\0') {
              if ((unaff_x19[4] == 0) || (unaff_x19[0x14] == 0)) goto LAB_06978e5c;
              fVar11 = *(float *)(unaff_x19 + 0x15);
              fVar9 = *(float *)(unaff_x19[4] + 0x28);
              FUN_07d32a2c((int)unaff_x19[0x79],*(undefined4 *)((long)unaff_x19 + 0x3cc),
                           (int)unaff_x19[0x7a],
                           *(float *)((long)unaff_x19 + 0x5c) +
                           fVar9 * fVar11 * *(float *)((long)unaff_x19 + 0x284),
                           (float)unaff_x19[0xc] + (float)unaff_x19[0x51] * fVar11 * fVar9,
                           (float)((ulong)unaff_x19[0xc] >> 0x20) +
                           (float)((ulong)unaff_x19[0x51] >> 0x20) * fVar11 * fVar9,unaff_x19[0x14],
                           0);
              lVar5 = unaff_x19[0x77];
              if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar2 = FUN_07c9c218(lVar5,0,0);
              if ((uVar2 & 1) != 0) {
                if (unaff_x19[0x77] == 0) goto LAB_06978e5c;
                fVar9 = *(float *)(unaff_x19 + 0x17);
                fVar11 = -((float)((ulong)unaff_x19[0x79] >> 0x20) +
                          (float)((ulong)*unaff_x22 >> 0x20)) * fVar9;
                FUN_07d32a2c(CONCAT44(fVar11,-((float)unaff_x19[0x79] + (float)*unaff_x22) * fVar9),
                             fVar11,-((*(float *)(unaff_x19 + 0x7a) +
                                      *(float *)((long)unaff_x19 + 0x3dc)) * fVar9),
                             *(undefined4 *)((long)unaff_x19 + 0x5c),(int)unaff_x19[0xc],
                             *(undefined4 *)((long)unaff_x19 + 100),unaff_x19[0x77],0);
              }
            }
            lVar5 = unaff_x19[6];
            if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
              FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                           *(undefined4 *)((long)unaff_x19 + 0x314),*(undefined4 *)(lVar5 + 0x30),
                           *(undefined4 *)(lVar5 + 0x34),*(undefined4 *)(lVar5 + 0x38),
                           *(undefined4 *)(lVar5 + 0x3c),*(long *)(lVar5 + 0x20),0);
              if ((unaff_x19[6] != 0) && (lVar5 = *(long *)(unaff_x19[6] + 0x28), lVar5 != 0)) {
                fVar11 = *(float *)((long)unaff_x19 + 0x324);
                fVar9 = *(float *)(unaff_x19 + 99);
                fVar8 = *(float *)(unaff_x19 + 100);
                fVar15 = *(float *)((long)unaff_x19 + 0x31c);
                FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                             *(undefined4 *)((long)unaff_x19 + 0x314),
                             (fVar7 * fVar11 + fVar16 * fVar9 + fVar20 * fVar8) - fVar12 * fVar15,
                             (fVar12 * fVar9 + fVar20 * fVar11 + fVar16 * fVar15) - fVar7 * fVar8,
                             (fVar7 * fVar15 + fVar12 * fVar11 + fVar16 * fVar8) - fVar20 * fVar9,
                             ((fVar16 * fVar11 - fVar7 * fVar9) - fVar20 * fVar15) - fVar12 * fVar8,
                             lVar5,0);
                if (((unaff_x19[6] != 0) && (lVar5 = *(long *)(unaff_x19[6] + 0x40), lVar5 != 0)) &&
                   (lVar5 = FUN_07c98f88(lVar5,0), lVar5 != 0)) {
                  fVar11 = *(float *)(unaff_x19 + 0x50);
                  fVar9 = *(float *)((long)unaff_x19 + 0x274);
                  fVar8 = *(float *)((long)unaff_x19 + 0x27c);
                  fVar15 = *(float *)(unaff_x19 + 0x4f);
                  FUN_07cad038((int)unaff_x19[0x4d],*(undefined4 *)((long)unaff_x19 + 0x26c),
                               (int)unaff_x19[0x4e],
                               (fVar7 * fVar11 + fVar16 * fVar9 + fVar20 * fVar8) - fVar12 * fVar15,
                               (fVar12 * fVar9 + fVar20 * fVar11 + fVar16 * fVar15) - fVar7 * fVar8,
                               (fVar7 * fVar15 + fVar12 * fVar11 + fVar16 * fVar8) - fVar20 * fVar9,
                               ((fVar16 * fVar11 - fVar7 * fVar9) - fVar20 * fVar15) -
                               fVar12 * fVar8,lVar5,0);
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


