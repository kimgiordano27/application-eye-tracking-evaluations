/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimmingSupported
ENTRY_POINT: 069785dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimmingSupported
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  char cVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  long *unaff_x19;
  long lVar5;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar6 = (float)FUN_07d32394(*(undefined4 *)((long)unaff_x19 + 0x5c),param_4,0);
  *(float *)(unaff_x19 + 0x75) = fVar6;
  uVar15 = *unaff_x24;
  fVar16 = *(float *)((long)unaff_x19 + 0x3a4);
  *(float *)((long)unaff_x19 + 0x3ac) = param_2;
  *(float *)(unaff_x19 + 0x76) = param_3;
  *unaff_x24 = CONCAT44((float)((ulong)uVar15 >> 0x20) - param_2,(float)uVar15 - fVar6);
  *(float *)((long)unaff_x19 + 0x3a4) = fVar16 - param_3;
  if (unaff_x19[8] == 0) goto LAB_06978e5c;
  lVar4 = unaff_x19[7];
  *(float *)(unaff_x19[8] + 0x20) =
       (float)((ulong)unaff_x19[0x74] >> 0x20) * (float)((ulong)unaff_x19[0x67] >> 0x20) +
       *(float *)((long)unaff_x19 + 0x39c) * *(float *)((long)unaff_x19 + 0x334) +
       (float)unaff_x19[0x74] * (float)unaff_x19[0x67];
  if (lVar4 == 0) goto LAB_06978e5c;
  *(float *)(lVar4 + 0x20) =
       (float)((ulong)unaff_x19[0x74] >> 0x20) * (float)((ulong)*unaff_x23 >> 0x20) +
       *(float *)((long)unaff_x19 + 0x39c) * *(float *)(unaff_x19 + 0x68) +
       (float)unaff_x19[0x74] * (float)*unaff_x23;
  lVar4 = unaff_x19[4];
  if (lVar4 == 0) goto LAB_06978e5c;
  cVar1 = *(char *)((long)unaff_x19 + 0x9c);
  *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar4 + 0x20);
  if (cVar1 == '\0') {
    fVar16 = *(float *)(lVar4 + 0x28);
    fVar6 = fVar16;
  }
  else {
    fVar9 = *(float *)(unaff_x19 + 0xc);
    fVar6 = *(float *)((long)unaff_x19 + 100);
    uVar7 = FUN_07c888bc(*(undefined4 *)((long)unaff_x19 + 0x5c),(long)unaff_x19 + 0x21c,0);
    *(undefined4 *)(unaff_x19 + 0x89) = uVar7;
    *(float *)((long)unaff_x19 + 0x44c) = fVar9;
    *(float *)(unaff_x19 + 0x8a) = fVar6;
    if ((unaff_x19[6] == 0) || (lVar4 = unaff_x19[4], lVar4 == 0)) goto LAB_06978e5c;
    fVar21 = *(float *)(unaff_x19[6] + 0x58);
    fVar6 = fVar6 / fVar21;
    fVar16 = 1.0;
    if (fVar6 <= 1.0) {
      fVar16 = fVar6;
    }
    fVar14 = -1.0;
    if (-1.0 <= fVar6) {
      fVar14 = fVar16;
    }
    fVar6 = asinf(fVar14);
    fVar6 = cosf(fVar6);
    fVar16 = *(float *)(lVar4 + 0x28);
    fVar9 = fVar9 + fVar21 * fVar6;
    fVar6 = -fVar9;
    fVar21 = fVar16;
    if (fVar6 <= fVar16) {
      fVar21 = fVar6;
    }
    fVar6 = 0.0;
    if (fVar9 <= 0.0) {
      fVar6 = fVar21;
    }
  }
  fVar14 = *(float *)(lVar4 + 0x20);
  fVar21 = *(float *)(unaff_x19 + 0x7d);
  fVar9 = fVar6;
  if (fVar14 < fVar6) {
    fVar18 = *(float *)(unaff_x19 + 0x16) * fVar21;
    fVar9 = -(*(float *)(unaff_x19 + 0x16) * fVar21);
    if (0.0 <= fVar6 - fVar14) {
      fVar9 = fVar18;
    }
    fVar9 = fVar14 + fVar9;
    if (ABS(fVar6 - fVar14) <= fVar18) {
      fVar9 = fVar6;
    }
  }
  *(float *)(lVar4 + 0x20) = fVar9;
  fVar6 = 1.0;
  *(float *)(lVar4 + 0x30) = (*(float *)(lVar4 + 0x2c) - fVar9) / fVar21;
  if (fVar16 != 0.0) {
    fVar6 = (fVar16 - fVar9) / fVar16;
  }
  cVar1 = *(char *)((long)unaff_x19 + 0x9c);
  *(float *)(lVar4 + 0x10) = fVar6;
  if (cVar1 == '\0') {
    lVar5 = unaff_x19[5];
    *(undefined4 *)(lVar4 + 0x14) = 0;
LAB_06978838:
    if (lVar5 == 0) goto LAB_06978e5c;
    *(undefined4 *)(lVar5 + 0x30) = 0;
  }
  else {
    if (*(long *)(lVar4 + 0x18) == 0) goto LAB_06978e5c;
    fVar16 = *(float *)(lVar4 + 0x24);
    fVar6 = (float)FUN_07c42008(*(long *)(lVar4 + 0x18),0);
    cVar1 = *(char *)((long)unaff_x19 + 0x9c);
    lVar5 = unaff_x19[5];
    *(float *)(lVar4 + 0x14) = fVar16 * fVar6;
    if (cVar1 == '\0') goto LAB_06978838;
    lVar4 = unaff_x19[4];
    if ((lVar4 == 0) || (lVar5 == 0)) goto LAB_06978e5c;
    fVar6 = (float)FUN_069757c4(lVar5,lVar4 + 0x30);
    fVar16 = *(float *)(lVar4 + 0x28);
    *(float *)(lVar5 + 0x30) = fVar6;
    if ((fVar16 <= 0.0) || (*(float *)(lVar4 + 0x24) <= 0.0)) {
      *(int *)((long)unaff_x19 + 0x84) = (int)unaff_x19[0x11];
    }
    else {
      fVar6 = *(float *)(lVar4 + 0x14) + fVar6;
      fVar16 = 0.0;
      if (0.0 <= fVar6) {
        fVar16 = fVar6;
      }
      fVar6 = (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x54) >> 0x20) * fVar16;
      lVar4 = CONCAT44(fVar6,(float)*(undefined8 *)((long)unaff_x19 + 0x54) * fVar16);
      *(float *)((long)unaff_x19 + 0x84) = fVar16;
      *(float *)((long)unaff_x19 + 0x3d4) = *(float *)(unaff_x19 + 10) * fVar16;
      unaff_x19[0x7b] = lVar4;
      if (unaff_x19[0x14] == 0) goto LAB_06978e5c;
      FUN_07d32a2c(*(float *)(unaff_x19 + 10) * fVar16,lVar4,fVar6,(int)unaff_x19[0x4d],
                   *(undefined4 *)((long)unaff_x19 + 0x26c),(int)unaff_x19[0x4e],unaff_x19[0x14],0);
    }
  }
  FUN_06977c58();
  lVar4 = unaff_x19[6];
  if (lVar4 != 0) {
    fVar16 = *(float *)(lVar4 + 0x48);
    fVar9 = *(float *)(unaff_x19 + 0x7d);
    fVar6 = fmodf(*(float *)(lVar4 + 0x60),360.0);
    *(float *)(lVar4 + 0x60) = fVar6 + fVar16 * DAT_015c595c * fVar9;
    fVar9 = *(float *)(unaff_x19 + 0x68);
    fVar14 = *(float *)((long)unaff_x19 + 0x344);
    fVar18 = *(float *)(unaff_x19 + 0x69);
    fVar16 = (float)FUN_07c8b18c(0);
    fVar17 = *(float *)((long)unaff_x19 + 0x33c);
    fVar21 = *(float *)((long)unaff_x19 + 0x334);
    fVar6 = *(float *)(unaff_x19 + 0x10);
    if (0.0 <= *(float *)((long)unaff_x19 + 0x25c)) {
      fVar6 = -*(float *)(unaff_x19 + 0x10);
    }
    fVar11 = *(float *)(unaff_x19 + 0x67);
    fVar8 = (float)FUN_07c8b18c(fVar6,0);
    fVar20 = *(float *)(unaff_x19 + 0x7c);
    fVar22 = *(float *)((long)unaff_x19 + 0xb4);
    fVar6 = fVar9;
    fVar10 = fVar14;
    uVar7 = FUN_07c8b548(fVar16,fVar9,fVar14,fVar18,(int)unaff_x19[0x65],
                         *(undefined4 *)((long)unaff_x19 + 0x32c),(int)unaff_x19[0x66],0);
    uVar2 = (ulong)(uint)fVar9;
    uVar13 = (ulong)(uint)fVar14;
    uVar7 = FUN_07c8b548(fVar16,uVar2,uVar13,fVar18,uVar7,fVar6,fVar10,0);
    FUN_07c8b18c(fVar20 * fVar22,uVar7,uVar2 & 0xffffffff,uVar13 & 0xffffffff,0);
    lVar4 = unaff_x19[6];
    if (lVar4 != 0) {
      fVar22 = *(float *)((long)unaff_x19 + 0x324);
      fVar6 = ((fVar18 * fVar17 - fVar16 * fVar8) - fVar9 * fVar21) - fVar14 * fVar11;
      fVar10 = (fVar14 * fVar21 + fVar16 * fVar17 + fVar18 * fVar8) - fVar9 * fVar11;
      fVar19 = *(float *)(unaff_x19 + 99);
      fVar20 = (fVar16 * fVar11 + fVar9 * fVar17 + fVar18 * fVar21) - fVar14 * fVar8;
      fVar9 = (fVar9 * fVar8 + fVar14 * fVar17 + fVar18 * fVar11) - fVar16 * fVar21;
      fVar14 = *(float *)((long)unaff_x19 + 0x31c);
      fVar18 = *(float *)(unaff_x19 + 100);
      fVar16 = (fVar10 * fVar14 + fVar9 * fVar22 + fVar6 * fVar18) - fVar20 * fVar19;
      *(float *)(lVar4 + 0x30) =
           (fVar10 * fVar22 + fVar6 * fVar19 + fVar20 * fVar18) - fVar9 * fVar14;
      *(float *)(lVar4 + 0x34) =
           (fVar9 * fVar19 + fVar20 * fVar22 + fVar6 * fVar14) - fVar10 * fVar18;
      *(float *)(lVar4 + 0x38) = fVar16;
      *(float *)(lVar4 + 0x3c) =
           ((fVar6 * fVar22 - fVar10 * fVar19) - fVar20 * fVar14) - fVar9 * fVar18;
      (**(code **)(*unaff_x19 + 0x648))();
      if (unaff_x19[0x14] != 0) {
        fVar9 = *(float *)(unaff_x19 + 0xc);
        fVar10 = *(float *)((long)unaff_x19 + 100);
        fVar14 = *(float *)((long)unaff_x19 + 0x5c);
        fVar6 = fVar10;
        fVar18 = (float)FUN_07d310e8(unaff_x19[0x14],0);
        if (unaff_x19[8] != 0) {
          fVar19 = *(float *)(unaff_x19[8] + 0x10);
          fVar23 = *(float *)(unaff_x19 + 0x68);
          fVar20 = *(float *)((long)unaff_x19 + 0x344);
          fVar24 = *(float *)(unaff_x19 + 0x69);
          fVar22 = *(float *)((long)unaff_x19 + 0x8c);
          if (DAT_08974d90 == '\0') {
            FUN_03a8a718(PTR_DAT_08487160);
            DAT_08974d90 = '\x01';
          }
          fVar12 = fVar24 * fVar24 + fVar23 * fVar23 + fVar20 * fVar20;
          if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar12) {
            fVar10 = fVar10 - fVar16;
            fVar14 = fVar14 - fVar18;
            fVar9 = fVar24 * fVar22 * (fVar14 * fVar19 * fVar20 - (fVar9 - fVar6) * fVar19 * fVar23)
                    + fVar23 * fVar22 * ((fVar9 - fVar6) * fVar19 * fVar24 -
                                        fVar10 * fVar19 * fVar20) +
                      fVar20 * fVar22 * (fVar10 * fVar19 * fVar23 - fVar14 * fVar19 * fVar24);
            fVar6 = (fVar23 * fVar9) / fVar12;
            fVar16 = (fVar20 * fVar9) / fVar12;
            fVar12 = (fVar24 * fVar9) / fVar12;
          }
          else {
            if (DAT_08974d8f == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d8f = '\x01';
            }
            pfVar3 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fVar6 = *pfVar3;
            fVar16 = pfVar3[1];
            fVar12 = pfVar3[2];
          }
          if (unaff_x19[0x14] != 0) {
            FUN_07d32824(fVar6,fVar16,fVar12,unaff_x19[0x14],0);
            if (*(char *)((long)unaff_x19 + 0x9c) != '\0') {
              if ((unaff_x19[4] == 0) || (unaff_x19[0x14] == 0)) goto LAB_06978e5c;
              fVar6 = *(float *)(unaff_x19 + 0x15);
              fVar16 = *(float *)(unaff_x19[4] + 0x28);
              FUN_07d32a2c((int)unaff_x19[0x79],*(undefined4 *)((long)unaff_x19 + 0x3cc),
                           (int)unaff_x19[0x7a],
                           *(float *)((long)unaff_x19 + 0x5c) +
                           fVar16 * fVar6 * *(float *)((long)unaff_x19 + 0x284),
                           (float)unaff_x19[0xc] + (float)unaff_x19[0x51] * fVar6 * fVar16,
                           (float)((ulong)unaff_x19[0xc] >> 0x20) +
                           (float)((ulong)unaff_x19[0x51] >> 0x20) * fVar6 * fVar16,unaff_x19[0x14],
                           0);
              lVar4 = unaff_x19[0x77];
              if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar2 = FUN_07c9c218(lVar4,0,0);
              if ((uVar2 & 1) != 0) {
                if (unaff_x19[0x77] == 0) goto LAB_06978e5c;
                fVar16 = *(float *)(unaff_x19 + 0x17);
                fVar6 = -((float)((ulong)unaff_x19[0x79] >> 0x20) +
                         (float)((ulong)*unaff_x22 >> 0x20)) * fVar16;
                FUN_07d32a2c(CONCAT44(fVar6,-((float)unaff_x19[0x79] + (float)*unaff_x22) * fVar16),
                             fVar6,-((*(float *)(unaff_x19 + 0x7a) +
                                     *(float *)((long)unaff_x19 + 0x3dc)) * fVar16),
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
                fVar16 = *(float *)(unaff_x19 + 99);
                fVar9 = *(float *)(unaff_x19 + 100);
                fVar14 = *(float *)((long)unaff_x19 + 0x31c);
                FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                             *(undefined4 *)((long)unaff_x19 + 0x314),
                             (fVar8 * fVar6 + fVar17 * fVar16 + fVar21 * fVar9) - fVar11 * fVar14,
                             (fVar11 * fVar16 + fVar21 * fVar6 + fVar17 * fVar14) - fVar8 * fVar9,
                             (fVar8 * fVar14 + fVar11 * fVar6 + fVar17 * fVar9) - fVar21 * fVar16,
                             ((fVar17 * fVar6 - fVar8 * fVar16) - fVar21 * fVar14) - fVar11 * fVar9,
                             lVar4,0);
                if (((unaff_x19[6] != 0) && (lVar4 = *(long *)(unaff_x19[6] + 0x40), lVar4 != 0)) &&
                   (lVar4 = FUN_07c98f88(lVar4,0), lVar4 != 0)) {
                  fVar6 = *(float *)(unaff_x19 + 0x50);
                  fVar16 = *(float *)((long)unaff_x19 + 0x274);
                  fVar9 = *(float *)((long)unaff_x19 + 0x27c);
                  fVar14 = *(float *)(unaff_x19 + 0x4f);
                  FUN_07cad038((int)unaff_x19[0x4d],*(undefined4 *)((long)unaff_x19 + 0x26c),
                               (int)unaff_x19[0x4e],
                               (fVar8 * fVar6 + fVar17 * fVar16 + fVar21 * fVar9) - fVar11 * fVar14,
                               (fVar11 * fVar16 + fVar21 * fVar6 + fVar17 * fVar14) - fVar8 * fVar9,
                               (fVar8 * fVar14 + fVar11 * fVar6 + fVar17 * fVar9) - fVar21 * fVar16,
                               ((fVar17 * fVar6 - fVar8 * fVar16) - fVar21 * fVar14) -
                               fVar11 * fVar9,lVar4,0);
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


