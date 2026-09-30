/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetControllerLocalizedVibration
ENTRY_POINT: 06978540
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


void OVRPlugin_OVRP_1_78_0__ovrp_SetControllerLocalizedVibration(void)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  code *in_x10;
  long *unaff_x19;
  long lVar5;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar2 = (*in_x10)();
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)unaff_x19 + 0x9c) = 1;
    if (unaff_x19[0x14] == 0) goto LAB_06978e5c;
    uVar9 = (undefined4)unaff_x19[0xc];
    uVar12 = *(undefined4 *)((long)unaff_x19 + 100);
                    /* try { // try from 0697856c to 06a7857b has its CatchHandler @ 0697857c */
    uVar6 = FUN_07d32394(*(undefined4 *)((long)unaff_x19 + 0x5c),unaff_x19[0x14],0);
    lVar3 = 0;
    *(undefined4 *)((long)unaff_x19 + 0x39c) = uVar6;
                    /* catch() { ... } // from try @ 069784d0 with catch @ 0697857c
                       catch() { ... } // from try @ 0697856c with catch @ 0697857c */
    *(undefined4 *)(unaff_x19 + 0x74) = uVar9;
                    /* try { // try from 06978580 to 06a78583 has its CatchHandler @ 0697858c */
    *(undefined4 *)((long)unaff_x19 + 0x3a4) = uVar12;
                    /* try { // try from 06978584 to 06a7858f has its CatchHandler @ 06977ed0 */
    if (unaff_x19[9] != 0) {
      lVar3 = FUN_07d24714();
                    /* catch() { ... } // from try @ 06978580 with catch @ 0697858c */
    }
    unaff_x19[0x77] = lVar3;
    thunk_FUN_03afed3c(unaff_x19 + 0x77);
    lVar3 = unaff_x19[0x77];
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c9c218(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = unaff_x19[0x77];
      if (lVar3 == 0) goto LAB_06978e5c;
      fVar10 = *(float *)(unaff_x19 + 0xc);
      fVar13 = *(float *)((long)unaff_x19 + 100);
      fVar7 = (float)FUN_07d32394(*(undefined4 *)((long)unaff_x19 + 0x5c),lVar3,0);
      *(float *)(unaff_x19 + 0x75) = fVar7;
      uVar18 = *unaff_x24;
      fVar19 = *(float *)((long)unaff_x19 + 0x3a4);
      *(float *)((long)unaff_x19 + 0x3ac) = fVar10;
      *(float *)(unaff_x19 + 0x76) = fVar13;
      *unaff_x24 = CONCAT44((float)((ulong)uVar18 >> 0x20) - fVar10,(float)uVar18 - fVar7);
      *(float *)((long)unaff_x19 + 0x3a4) = fVar19 - fVar13;
    }
    if (unaff_x19[8] == 0) goto LAB_06978e5c;
    lVar3 = unaff_x19[7];
    *(float *)(unaff_x19[8] + 0x20) =
         (float)((ulong)unaff_x19[0x74] >> 0x20) * (float)((ulong)unaff_x19[0x67] >> 0x20) +
         *(float *)((long)unaff_x19 + 0x39c) * *(float *)((long)unaff_x19 + 0x334) +
         (float)unaff_x19[0x74] * (float)unaff_x19[0x67];
    if (lVar3 == 0) goto LAB_06978e5c;
    *(float *)(lVar3 + 0x20) =
         (float)((ulong)unaff_x19[0x74] >> 0x20) * (float)((ulong)*unaff_x23 >> 0x20) +
         *(float *)((long)unaff_x19 + 0x39c) * *(float *)(unaff_x19 + 0x68) +
         (float)unaff_x19[0x74] * (float)*unaff_x23;
  }
  lVar3 = unaff_x19[4];
  if (lVar3 == 0) goto LAB_06978e5c;
  cVar1 = *(char *)((long)unaff_x19 + 0x9c);
  *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(lVar3 + 0x20);
  if (cVar1 == '\0') {
    fVar10 = *(float *)(lVar3 + 0x28);
    fVar7 = fVar10;
  }
  else {
    fVar13 = *(float *)(unaff_x19 + 0xc);
    fVar7 = *(float *)((long)unaff_x19 + 100);
    uVar6 = FUN_07c888bc(*(undefined4 *)((long)unaff_x19 + 0x5c),(long)unaff_x19 + 0x21c,0);
    *(undefined4 *)(unaff_x19 + 0x89) = uVar6;
    *(float *)((long)unaff_x19 + 0x44c) = fVar13;
    *(float *)(unaff_x19 + 0x8a) = fVar7;
    if ((unaff_x19[6] == 0) || (lVar3 = unaff_x19[4], lVar3 == 0)) goto LAB_06978e5c;
    fVar19 = *(float *)(unaff_x19[6] + 0x58);
    fVar7 = fVar7 / fVar19;
    fVar10 = 1.0;
    if (fVar7 <= 1.0) {
      fVar10 = fVar7;
    }
    fVar17 = -1.0;
    if (-1.0 <= fVar7) {
      fVar17 = fVar10;
    }
    fVar7 = asinf(fVar17);
    fVar7 = cosf(fVar7);
    fVar10 = *(float *)(lVar3 + 0x28);
    fVar13 = fVar13 + fVar19 * fVar7;
    fVar7 = -fVar13;
    fVar19 = fVar10;
    if (fVar7 <= fVar10) {
      fVar19 = fVar7;
    }
    fVar7 = 0.0;
    if (fVar13 <= 0.0) {
      fVar7 = fVar19;
    }
  }
  fVar17 = *(float *)(lVar3 + 0x20);
  fVar19 = *(float *)(unaff_x19 + 0x7d);
  fVar13 = fVar7;
  if (fVar17 < fVar7) {
    fVar21 = *(float *)(unaff_x19 + 0x16) * fVar19;
    fVar13 = -(*(float *)(unaff_x19 + 0x16) * fVar19);
    if (0.0 <= fVar7 - fVar17) {
      fVar13 = fVar21;
    }
    fVar13 = fVar17 + fVar13;
    if (ABS(fVar7 - fVar17) <= fVar21) {
      fVar13 = fVar7;
    }
  }
  *(float *)(lVar3 + 0x20) = fVar13;
  fVar7 = 1.0;
  *(float *)(lVar3 + 0x30) = (*(float *)(lVar3 + 0x2c) - fVar13) / fVar19;
  if (fVar10 != 0.0) {
    fVar7 = (fVar10 - fVar13) / fVar10;
  }
  cVar1 = *(char *)((long)unaff_x19 + 0x9c);
  *(float *)(lVar3 + 0x10) = fVar7;
  if (cVar1 == '\0') {
    lVar5 = unaff_x19[5];
    *(undefined4 *)(lVar3 + 0x14) = 0;
LAB_06978838:
    if (lVar5 == 0) goto LAB_06978e5c;
    *(undefined4 *)(lVar5 + 0x30) = 0;
  }
  else {
    if (*(long *)(lVar3 + 0x18) == 0) goto LAB_06978e5c;
    fVar10 = *(float *)(lVar3 + 0x24);
    fVar7 = (float)FUN_07c42008(*(long *)(lVar3 + 0x18),0);
    cVar1 = *(char *)((long)unaff_x19 + 0x9c);
    lVar5 = unaff_x19[5];
    *(float *)(lVar3 + 0x14) = fVar10 * fVar7;
    if (cVar1 == '\0') goto LAB_06978838;
    lVar3 = unaff_x19[4];
    if ((lVar3 == 0) || (lVar5 == 0)) goto LAB_06978e5c;
    fVar7 = (float)FUN_069757c4(lVar5,lVar3 + 0x30);
    fVar10 = *(float *)(lVar3 + 0x28);
    *(float *)(lVar5 + 0x30) = fVar7;
    if ((fVar10 <= 0.0) || (*(float *)(lVar3 + 0x24) <= 0.0)) {
      *(int *)((long)unaff_x19 + 0x84) = (int)unaff_x19[0x11];
    }
    else {
      fVar7 = *(float *)(lVar3 + 0x14) + fVar7;
      fVar10 = 0.0;
      if (0.0 <= fVar7) {
        fVar10 = fVar7;
      }
      fVar7 = (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x54) >> 0x20) * fVar10;
      lVar3 = CONCAT44(fVar7,(float)*(undefined8 *)((long)unaff_x19 + 0x54) * fVar10);
      *(float *)((long)unaff_x19 + 0x84) = fVar10;
      *(float *)((long)unaff_x19 + 0x3d4) = *(float *)(unaff_x19 + 10) * fVar10;
      unaff_x19[0x7b] = lVar3;
      if (unaff_x19[0x14] == 0) goto LAB_06978e5c;
      FUN_07d32a2c(*(float *)(unaff_x19 + 10) * fVar10,lVar3,fVar7,(int)unaff_x19[0x4d],
                   *(undefined4 *)((long)unaff_x19 + 0x26c),(int)unaff_x19[0x4e],unaff_x19[0x14],0);
    }
  }
  FUN_06977c58();
  lVar3 = unaff_x19[6];
  if (lVar3 != 0) {
    fVar10 = *(float *)(lVar3 + 0x48);
    fVar13 = *(float *)(unaff_x19 + 0x7d);
    fVar7 = fmodf(*(float *)(lVar3 + 0x60),360.0);
    *(float *)(lVar3 + 0x60) = fVar7 + fVar10 * DAT_015c595c * fVar13;
    fVar13 = *(float *)(unaff_x19 + 0x68);
    fVar17 = *(float *)((long)unaff_x19 + 0x344);
    fVar21 = *(float *)(unaff_x19 + 0x69);
    fVar10 = (float)FUN_07c8b18c(0);
    fVar20 = *(float *)((long)unaff_x19 + 0x33c);
    fVar19 = *(float *)((long)unaff_x19 + 0x334);
    fVar7 = *(float *)(unaff_x19 + 0x10);
    if (0.0 <= *(float *)((long)unaff_x19 + 0x25c)) {
      fVar7 = -*(float *)(unaff_x19 + 0x10);
    }
    fVar14 = *(float *)(unaff_x19 + 0x67);
    fVar8 = (float)FUN_07c8b18c(fVar7,0);
    fVar23 = *(float *)(unaff_x19 + 0x7c);
    fVar24 = *(float *)((long)unaff_x19 + 0xb4);
    fVar7 = fVar13;
    fVar11 = fVar17;
    uVar6 = FUN_07c8b548(fVar10,fVar13,fVar17,fVar21,(int)unaff_x19[0x65],
                         *(undefined4 *)((long)unaff_x19 + 0x32c),(int)unaff_x19[0x66],0);
    uVar2 = (ulong)(uint)fVar13;
    uVar16 = (ulong)(uint)fVar17;
    uVar6 = FUN_07c8b548(fVar10,uVar2,uVar16,fVar21,uVar6,fVar7,fVar11,0);
    FUN_07c8b18c(fVar23 * fVar24,uVar6,uVar2 & 0xffffffff,uVar16 & 0xffffffff,0);
    lVar3 = unaff_x19[6];
    if (lVar3 != 0) {
      fVar24 = *(float *)((long)unaff_x19 + 0x324);
      fVar7 = ((fVar21 * fVar20 - fVar10 * fVar8) - fVar13 * fVar19) - fVar17 * fVar14;
      fVar11 = (fVar17 * fVar19 + fVar10 * fVar20 + fVar21 * fVar8) - fVar13 * fVar14;
      fVar22 = *(float *)(unaff_x19 + 99);
      fVar23 = (fVar10 * fVar14 + fVar13 * fVar20 + fVar21 * fVar19) - fVar17 * fVar8;
      fVar13 = (fVar13 * fVar8 + fVar17 * fVar20 + fVar21 * fVar14) - fVar10 * fVar19;
      fVar17 = *(float *)((long)unaff_x19 + 0x31c);
      fVar21 = *(float *)(unaff_x19 + 100);
      fVar10 = (fVar11 * fVar17 + fVar13 * fVar24 + fVar7 * fVar21) - fVar23 * fVar22;
      *(float *)(lVar3 + 0x30) =
           (fVar11 * fVar24 + fVar7 * fVar22 + fVar23 * fVar21) - fVar13 * fVar17;
      *(float *)(lVar3 + 0x34) =
           (fVar13 * fVar22 + fVar23 * fVar24 + fVar7 * fVar17) - fVar11 * fVar21;
      *(float *)(lVar3 + 0x38) = fVar10;
      *(float *)(lVar3 + 0x3c) =
           ((fVar7 * fVar24 - fVar11 * fVar22) - fVar23 * fVar17) - fVar13 * fVar21;
      (**(code **)(*unaff_x19 + 0x648))();
      if (unaff_x19[0x14] != 0) {
        fVar13 = *(float *)(unaff_x19 + 0xc);
        fVar11 = *(float *)((long)unaff_x19 + 100);
        fVar17 = *(float *)((long)unaff_x19 + 0x5c);
        fVar7 = fVar11;
        fVar21 = (float)FUN_07d310e8(unaff_x19[0x14],0);
        if (unaff_x19[8] != 0) {
          fVar22 = *(float *)(unaff_x19[8] + 0x10);
          fVar25 = *(float *)(unaff_x19 + 0x68);
          fVar23 = *(float *)((long)unaff_x19 + 0x344);
          fVar26 = *(float *)(unaff_x19 + 0x69);
          fVar24 = *(float *)((long)unaff_x19 + 0x8c);
          if (DAT_08974d90 == '\0') {
            FUN_03a8a718(PTR_DAT_08487160);
            DAT_08974d90 = '\x01';
          }
          fVar15 = fVar26 * fVar26 + fVar25 * fVar25 + fVar23 * fVar23;
          if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar15) {
            fVar11 = fVar11 - fVar10;
            fVar17 = fVar17 - fVar21;
            fVar13 = fVar26 * fVar24 * (fVar17 * fVar22 * fVar23 -
                                       (fVar13 - fVar7) * fVar22 * fVar25) +
                     fVar25 * fVar24 * ((fVar13 - fVar7) * fVar22 * fVar26 -
                                       fVar11 * fVar22 * fVar23) +
                     fVar23 * fVar24 * (fVar11 * fVar22 * fVar25 - fVar17 * fVar22 * fVar26);
            fVar7 = (fVar25 * fVar13) / fVar15;
            fVar10 = (fVar23 * fVar13) / fVar15;
            fVar15 = (fVar26 * fVar13) / fVar15;
          }
          else {
            if (DAT_08974d8f == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d8f = '\x01';
            }
            pfVar4 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fVar7 = *pfVar4;
            fVar10 = pfVar4[1];
            fVar15 = pfVar4[2];
          }
          if (unaff_x19[0x14] != 0) {
            FUN_07d32824(fVar7,fVar10,fVar15,unaff_x19[0x14],0);
            if (*(char *)((long)unaff_x19 + 0x9c) != '\0') {
              if ((unaff_x19[4] == 0) || (unaff_x19[0x14] == 0)) goto LAB_06978e5c;
              fVar7 = *(float *)(unaff_x19 + 0x15);
              fVar10 = *(float *)(unaff_x19[4] + 0x28);
              FUN_07d32a2c((int)unaff_x19[0x79],*(undefined4 *)((long)unaff_x19 + 0x3cc),
                           (int)unaff_x19[0x7a],
                           *(float *)((long)unaff_x19 + 0x5c) +
                           fVar10 * fVar7 * *(float *)((long)unaff_x19 + 0x284),
                           (float)unaff_x19[0xc] + (float)unaff_x19[0x51] * fVar7 * fVar10,
                           (float)((ulong)unaff_x19[0xc] >> 0x20) +
                           (float)((ulong)unaff_x19[0x51] >> 0x20) * fVar7 * fVar10,unaff_x19[0x14],
                           0);
              lVar3 = unaff_x19[0x77];
              if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar2 = FUN_07c9c218(lVar3,0,0);
              if ((uVar2 & 1) != 0) {
                if (unaff_x19[0x77] == 0) goto LAB_06978e5c;
                fVar10 = *(float *)(unaff_x19 + 0x17);
                fVar7 = -((float)((ulong)unaff_x19[0x79] >> 0x20) +
                         (float)((ulong)*unaff_x22 >> 0x20)) * fVar10;
                FUN_07d32a2c(CONCAT44(fVar7,-((float)unaff_x19[0x79] + (float)*unaff_x22) * fVar10),
                             fVar7,-((*(float *)(unaff_x19 + 0x7a) +
                                     *(float *)((long)unaff_x19 + 0x3dc)) * fVar10),
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
                fVar7 = *(float *)((long)unaff_x19 + 0x324);
                fVar10 = *(float *)(unaff_x19 + 99);
                fVar13 = *(float *)(unaff_x19 + 100);
                fVar17 = *(float *)((long)unaff_x19 + 0x31c);
                FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                             *(undefined4 *)((long)unaff_x19 + 0x314),
                             (fVar8 * fVar7 + fVar20 * fVar10 + fVar19 * fVar13) - fVar14 * fVar17,
                             (fVar14 * fVar10 + fVar19 * fVar7 + fVar20 * fVar17) - fVar8 * fVar13,
                             (fVar8 * fVar17 + fVar14 * fVar7 + fVar20 * fVar13) - fVar19 * fVar10,
                             ((fVar20 * fVar7 - fVar8 * fVar10) - fVar19 * fVar17) - fVar14 * fVar13
                             ,lVar3,0);
                if (((unaff_x19[6] != 0) && (lVar3 = *(long *)(unaff_x19[6] + 0x40), lVar3 != 0)) &&
                   (lVar3 = FUN_07c98f88(lVar3,0), lVar3 != 0)) {
                  fVar7 = *(float *)(unaff_x19 + 0x50);
                  fVar10 = *(float *)((long)unaff_x19 + 0x274);
                  fVar13 = *(float *)((long)unaff_x19 + 0x27c);
                  fVar17 = *(float *)(unaff_x19 + 0x4f);
                  FUN_07cad038((int)unaff_x19[0x4d],*(undefined4 *)((long)unaff_x19 + 0x26c),
                               (int)unaff_x19[0x4e],
                               (fVar8 * fVar7 + fVar20 * fVar10 + fVar19 * fVar13) - fVar14 * fVar17
                               ,(fVar14 * fVar10 + fVar19 * fVar7 + fVar20 * fVar17) -
                                fVar8 * fVar13,
                               (fVar8 * fVar17 + fVar14 * fVar7 + fVar20 * fVar13) - fVar19 * fVar10
                               ,((fVar20 * fVar7 - fVar8 * fVar10) - fVar19 * fVar17) -
                                fVar14 * fVar13,lVar3,0);
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


