/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetControllerState5
ENTRY_POINT: 069784bc
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


void OVRPlugin_OVRP_1_78_0__ovrp_GetControllerState5(long param_1,float param_2,float param_3)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long in_x9;
  long *unaff_x19;
  long lVar6;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack00000000000000ac;
  
  fVar9 = param_3 * DAT_015c57dc;
                    /* try { // try from 069784d0 to 06a784e7 has its CatchHandler @ 0697857c */
  fStack00000000000000ac = param_2 + param_3 * *(float *)(in_x9 + 0x908);
  fVar11 = (float)((ulong)unaff_x19[0x51] >> 0x20);
                    /* try { // try from 069784e8 to 06a7856b has its CatchHandler @ 06977ed0 */
  plVar2 = (long *)unaff_x19[0x7f];
  *(float *)((long)unaff_x19 + 0x43c) = -*(float *)((long)unaff_x19 + 0x284);
  unaff_x19[0x88] = CONCAT44(-fVar11,-(float)unaff_x19[0x51]);
  *(float *)(unaff_x19 + 0x87) = *(float *)(unaff_x19 + 0x4e) + fVar9 * fVar11;
  unaff_x19[0x86] =
       CONCAT44((float)((ulong)unaff_x19[0x4d] >> 0x20) +
                (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x284) >> 0x20) * fVar9,
                (float)unaff_x19[0x4d] + (float)*(undefined8 *)((long)unaff_x19 + 0x284) * fVar9);
  if (plVar2 == (long *)0x0) goto LAB_06978e5c;
  uVar3 = (**(code **)(*plVar2 + 0x178))
                    (plVar2,unaff_x19 + 0x86,(long)unaff_x19 + 0x43c,&stack0x000000ac,param_1 + 0x58
                     ,param_1 + 100,unaff_x19 + 9,*(undefined4 *)((long)unaff_x19 + 0xbc));
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)((long)unaff_x19 + 0x9c) = 1;
    if (unaff_x19[0x14] == 0) goto LAB_06978e5c;
    uVar10 = (undefined4)unaff_x19[0xc];
    uVar12 = *(undefined4 *)((long)unaff_x19 + 100);
    uVar7 = FUN_07d32394(*(undefined4 *)((long)unaff_x19 + 0x5c),unaff_x19[0x14],0);
    lVar4 = 0;
    *(undefined4 *)((long)unaff_x19 + 0x39c) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x74) = uVar10;
    *(undefined4 *)((long)unaff_x19 + 0x3a4) = uVar12;
    if (unaff_x19[9] != 0) {
      lVar4 = FUN_07d24714();
    }
    unaff_x19[0x77] = lVar4;
    thunk_FUN_03afed3c(unaff_x19 + 0x77);
    lVar4 = unaff_x19[0x77];
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = FUN_07c9c218(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = unaff_x19[0x77];
      if (lVar4 == 0) goto LAB_06978e5c;
      fVar11 = *(float *)(unaff_x19 + 0xc);
      fVar13 = *(float *)((long)unaff_x19 + 100);
      fVar9 = (float)FUN_07d32394(*(undefined4 *)((long)unaff_x19 + 0x5c),lVar4,0);
      *(float *)(unaff_x19 + 0x75) = fVar9;
      uVar19 = *unaff_x24;
      fVar20 = *(float *)((long)unaff_x19 + 0x3a4);
      *(float *)((long)unaff_x19 + 0x3ac) = fVar11;
      *(float *)(unaff_x19 + 0x76) = fVar13;
      *unaff_x24 = CONCAT44((float)((ulong)uVar19 >> 0x20) - fVar11,(float)uVar19 - fVar9);
      *(float *)((long)unaff_x19 + 0x3a4) = fVar20 - fVar13;
    }
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
  }
  lVar4 = unaff_x19[4];
  if (lVar4 == 0) goto LAB_06978e5c;
  cVar1 = *(char *)((long)unaff_x19 + 0x9c);
  *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar4 + 0x20);
  if (cVar1 == '\0') {
    fVar11 = *(float *)(lVar4 + 0x28);
    fVar9 = fVar11;
  }
  else {
    fVar13 = *(float *)(unaff_x19 + 0xc);
    fVar9 = *(float *)((long)unaff_x19 + 100);
    uVar7 = FUN_07c888bc(*(undefined4 *)((long)unaff_x19 + 0x5c),(long)unaff_x19 + 0x21c,0);
    *(undefined4 *)(unaff_x19 + 0x89) = uVar7;
    *(float *)((long)unaff_x19 + 0x44c) = fVar13;
    *(float *)(unaff_x19 + 0x8a) = fVar9;
    if ((unaff_x19[6] == 0) || (lVar4 = unaff_x19[4], lVar4 == 0)) goto LAB_06978e5c;
    fVar20 = *(float *)(unaff_x19[6] + 0x58);
    fVar9 = fVar9 / fVar20;
    fVar11 = 1.0;
    if (fVar9 <= 1.0) {
      fVar11 = fVar9;
    }
    fVar18 = -1.0;
    if (-1.0 <= fVar9) {
      fVar18 = fVar11;
    }
    fVar9 = asinf(fVar18);
    fVar9 = cosf(fVar9);
    fVar11 = *(float *)(lVar4 + 0x28);
    fVar13 = fVar13 + fVar20 * fVar9;
    fVar9 = -fVar13;
    fVar20 = fVar11;
    if (fVar9 <= fVar11) {
      fVar20 = fVar9;
    }
    fVar9 = 0.0;
    if (fVar13 <= 0.0) {
      fVar9 = fVar20;
    }
  }
  fVar18 = *(float *)(lVar4 + 0x20);
  fVar20 = *(float *)(unaff_x19 + 0x7d);
  fVar13 = fVar9;
  if (fVar18 < fVar9) {
    fVar23 = *(float *)(unaff_x19 + 0x16) * fVar20;
    fVar13 = -(*(float *)(unaff_x19 + 0x16) * fVar20);
    if (0.0 <= fVar9 - fVar18) {
      fVar13 = fVar23;
    }
    fVar13 = fVar18 + fVar13;
    if (ABS(fVar9 - fVar18) <= fVar23) {
      fVar13 = fVar9;
    }
  }
  *(float *)(lVar4 + 0x20) = fVar13;
  fVar9 = 1.0;
  *(float *)(lVar4 + 0x30) = (*(float *)(lVar4 + 0x2c) - fVar13) / fVar20;
  if (fVar11 != 0.0) {
    fVar9 = (fVar11 - fVar13) / fVar11;
  }
  cVar1 = *(char *)((long)unaff_x19 + 0x9c);
  *(float *)(lVar4 + 0x10) = fVar9;
  if (cVar1 == '\0') {
    lVar6 = unaff_x19[5];
    *(undefined4 *)(lVar4 + 0x14) = 0;
LAB_06978838:
    if (lVar6 == 0) goto LAB_06978e5c;
    *(undefined4 *)(lVar6 + 0x30) = 0;
  }
  else {
    if (*(long *)(lVar4 + 0x18) == 0) goto LAB_06978e5c;
    fVar11 = *(float *)(lVar4 + 0x24);
    fVar9 = (float)FUN_07c42008(*(long *)(lVar4 + 0x18),0);
    cVar1 = *(char *)((long)unaff_x19 + 0x9c);
    lVar6 = unaff_x19[5];
    *(float *)(lVar4 + 0x14) = fVar11 * fVar9;
    if (cVar1 == '\0') goto LAB_06978838;
    lVar4 = unaff_x19[4];
    if ((lVar4 == 0) || (lVar6 == 0)) goto LAB_06978e5c;
    fVar9 = (float)FUN_069757c4(lVar6,lVar4 + 0x30);
    fVar11 = *(float *)(lVar4 + 0x28);
    *(float *)(lVar6 + 0x30) = fVar9;
    if ((fVar11 <= 0.0) || (*(float *)(lVar4 + 0x24) <= 0.0)) {
      *(int *)((long)unaff_x19 + 0x84) = (int)unaff_x19[0x11];
    }
    else {
      fVar9 = *(float *)(lVar4 + 0x14) + fVar9;
      fVar11 = 0.0;
      if (0.0 <= fVar9) {
        fVar11 = fVar9;
      }
      fVar9 = (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x54) >> 0x20) * fVar11;
      lVar4 = CONCAT44(fVar9,(float)*(undefined8 *)((long)unaff_x19 + 0x54) * fVar11);
      *(float *)((long)unaff_x19 + 0x84) = fVar11;
      *(float *)((long)unaff_x19 + 0x3d4) = *(float *)(unaff_x19 + 10) * fVar11;
      unaff_x19[0x7b] = lVar4;
      if (unaff_x19[0x14] == 0) goto LAB_06978e5c;
      FUN_07d32a2c(*(float *)(unaff_x19 + 10) * fVar11,lVar4,fVar9,(int)unaff_x19[0x4d],
                   *(undefined4 *)((long)unaff_x19 + 0x26c),(int)unaff_x19[0x4e],unaff_x19[0x14],0);
    }
  }
  FUN_06977c58();
  lVar4 = unaff_x19[6];
  if (lVar4 != 0) {
    fVar11 = *(float *)(lVar4 + 0x48);
    fVar13 = *(float *)(unaff_x19 + 0x7d);
    fVar9 = fmodf(*(float *)(lVar4 + 0x60),360.0);
    *(float *)(lVar4 + 0x60) = fVar9 + fVar11 * DAT_015c595c * fVar13;
    fVar13 = *(float *)(unaff_x19 + 0x68);
    fVar18 = *(float *)((long)unaff_x19 + 0x344);
    fVar23 = *(float *)(unaff_x19 + 0x69);
    fVar11 = (float)FUN_07c8b18c(0);
    fVar21 = *(float *)((long)unaff_x19 + 0x33c);
    fVar20 = *(float *)((long)unaff_x19 + 0x334);
    fVar9 = *(float *)(unaff_x19 + 0x10);
    if (0.0 <= *(float *)((long)unaff_x19 + 0x25c)) {
      fVar9 = -*(float *)(unaff_x19 + 0x10);
    }
    fVar14 = *(float *)(unaff_x19 + 0x67);
    fVar8 = (float)FUN_07c8b18c(fVar9,0);
    uVar16 = (ulong)(uint)fVar18;
    fVar25 = *(float *)(unaff_x19 + 0x7c);
    fVar26 = *(float *)((long)unaff_x19 + 0xb4);
    fVar9 = fVar13;
    uVar7 = FUN_07c8b548(fVar11,fVar13,uVar16,fVar23,(int)unaff_x19[0x65],
                         *(undefined4 *)((long)unaff_x19 + 0x32c),(int)unaff_x19[0x66],0);
    uVar3 = (ulong)(uint)fVar13;
    uVar17 = (ulong)(uint)fVar18;
    uVar7 = FUN_07c8b548(fVar11,uVar3,uVar17,fVar23,uVar7,fVar9,uVar16 & 0xffffffff,0);
    FUN_07c8b18c(fVar25 * fVar26,uVar7,uVar3 & 0xffffffff,uVar17 & 0xffffffff,0);
    lVar4 = unaff_x19[6];
    if (lVar4 != 0) {
      fVar22 = *(float *)((long)unaff_x19 + 0x324);
      fVar9 = ((fVar23 * fVar21 - fVar11 * fVar8) - fVar13 * fVar20) - fVar18 * fVar14;
      fVar25 = (fVar18 * fVar20 + fVar11 * fVar21 + fVar23 * fVar8) - fVar13 * fVar14;
      fVar24 = *(float *)(unaff_x19 + 99);
      fVar26 = (fVar11 * fVar14 + fVar13 * fVar21 + fVar23 * fVar20) - fVar18 * fVar8;
      fVar13 = (fVar13 * fVar8 + fVar18 * fVar21 + fVar23 * fVar14) - fVar11 * fVar20;
      fVar18 = *(float *)((long)unaff_x19 + 0x31c);
      fVar23 = *(float *)(unaff_x19 + 100);
      fVar11 = (fVar25 * fVar18 + fVar13 * fVar22 + fVar9 * fVar23) - fVar26 * fVar24;
      *(float *)(lVar4 + 0x30) =
           (fVar25 * fVar22 + fVar9 * fVar24 + fVar26 * fVar23) - fVar13 * fVar18;
      *(float *)(lVar4 + 0x34) =
           (fVar13 * fVar24 + fVar26 * fVar22 + fVar9 * fVar18) - fVar25 * fVar23;
      *(float *)(lVar4 + 0x38) = fVar11;
      *(float *)(lVar4 + 0x3c) =
           ((fVar9 * fVar22 - fVar25 * fVar24) - fVar26 * fVar18) - fVar13 * fVar23;
      (**(code **)(*unaff_x19 + 0x648))();
      if (unaff_x19[0x14] != 0) {
        fVar13 = *(float *)(unaff_x19 + 0xc);
        fVar25 = *(float *)((long)unaff_x19 + 100);
        fVar18 = *(float *)((long)unaff_x19 + 0x5c);
        fVar9 = fVar25;
        fVar23 = (float)FUN_07d310e8(unaff_x19[0x14],0);
        if (unaff_x19[8] != 0) {
          fVar24 = *(float *)(unaff_x19[8] + 0x10);
          fVar27 = *(float *)(unaff_x19 + 0x68);
          fVar26 = *(float *)((long)unaff_x19 + 0x344);
          fVar28 = *(float *)(unaff_x19 + 0x69);
          fVar22 = *(float *)((long)unaff_x19 + 0x8c);
          if (DAT_08974d90 == '\0') {
            FUN_03a8a718(PTR_DAT_08487160);
            DAT_08974d90 = '\x01';
          }
          fVar15 = fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26;
          if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar15) {
            fVar25 = fVar25 - fVar11;
            fVar18 = fVar18 - fVar23;
            fVar13 = fVar28 * fVar22 * (fVar18 * fVar24 * fVar26 -
                                       (fVar13 - fVar9) * fVar24 * fVar27) +
                     fVar27 * fVar22 * ((fVar13 - fVar9) * fVar24 * fVar28 -
                                       fVar25 * fVar24 * fVar26) +
                     fVar26 * fVar22 * (fVar25 * fVar24 * fVar27 - fVar18 * fVar24 * fVar28);
            fVar9 = (fVar27 * fVar13) / fVar15;
            fVar11 = (fVar26 * fVar13) / fVar15;
            fVar15 = (fVar28 * fVar13) / fVar15;
          }
          else {
            if (DAT_08974d8f == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d8f = '\x01';
            }
            pfVar5 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fVar9 = *pfVar5;
            fVar11 = pfVar5[1];
            fVar15 = pfVar5[2];
          }
          if (unaff_x19[0x14] != 0) {
            FUN_07d32824(fVar9,fVar11,fVar15,unaff_x19[0x14],0);
            if (*(char *)((long)unaff_x19 + 0x9c) != '\0') {
              if ((unaff_x19[4] == 0) || (unaff_x19[0x14] == 0)) goto LAB_06978e5c;
              fVar9 = *(float *)(unaff_x19 + 0x15);
              fVar11 = *(float *)(unaff_x19[4] + 0x28);
              FUN_07d32a2c((int)unaff_x19[0x79],*(undefined4 *)((long)unaff_x19 + 0x3cc),
                           (int)unaff_x19[0x7a],
                           *(float *)((long)unaff_x19 + 0x5c) +
                           fVar11 * fVar9 * *(float *)((long)unaff_x19 + 0x284),
                           (float)unaff_x19[0xc] + (float)unaff_x19[0x51] * fVar9 * fVar11,
                           (float)((ulong)unaff_x19[0xc] >> 0x20) +
                           (float)((ulong)unaff_x19[0x51] >> 0x20) * fVar9 * fVar11,unaff_x19[0x14],
                           0);
              lVar4 = unaff_x19[0x77];
              if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar3 = FUN_07c9c218(lVar4,0,0);
              if ((uVar3 & 1) != 0) {
                if (unaff_x19[0x77] == 0) goto LAB_06978e5c;
                fVar11 = *(float *)(unaff_x19 + 0x17);
                fVar9 = -((float)((ulong)unaff_x19[0x79] >> 0x20) +
                         (float)((ulong)*unaff_x22 >> 0x20)) * fVar11;
                FUN_07d32a2c(CONCAT44(fVar9,-((float)unaff_x19[0x79] + (float)*unaff_x22) * fVar11),
                             fVar9,-((*(float *)(unaff_x19 + 0x7a) +
                                     *(float *)((long)unaff_x19 + 0x3dc)) * fVar11),
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
                fVar9 = *(float *)((long)unaff_x19 + 0x324);
                fVar11 = *(float *)(unaff_x19 + 99);
                fVar13 = *(float *)(unaff_x19 + 100);
                fVar18 = *(float *)((long)unaff_x19 + 0x31c);
                FUN_07cad038(*(undefined4 *)((long)unaff_x19 + 0x30c),(int)unaff_x19[0x62],
                             *(undefined4 *)((long)unaff_x19 + 0x314),
                             (fVar8 * fVar9 + fVar21 * fVar11 + fVar20 * fVar13) - fVar14 * fVar18,
                             (fVar14 * fVar11 + fVar20 * fVar9 + fVar21 * fVar18) - fVar8 * fVar13,
                             (fVar8 * fVar18 + fVar14 * fVar9 + fVar21 * fVar13) - fVar20 * fVar11,
                             ((fVar21 * fVar9 - fVar8 * fVar11) - fVar20 * fVar18) - fVar14 * fVar13
                             ,lVar4,0);
                if (((unaff_x19[6] != 0) && (lVar4 = *(long *)(unaff_x19[6] + 0x40), lVar4 != 0)) &&
                   (lVar4 = FUN_07c98f88(lVar4,0), lVar4 != 0)) {
                  fVar9 = *(float *)(unaff_x19 + 0x50);
                  fVar11 = *(float *)((long)unaff_x19 + 0x274);
                  fVar13 = *(float *)((long)unaff_x19 + 0x27c);
                  fVar18 = *(float *)(unaff_x19 + 0x4f);
                  FUN_07cad038((int)unaff_x19[0x4d],*(undefined4 *)((long)unaff_x19 + 0x26c),
                               (int)unaff_x19[0x4e],
                               (fVar8 * fVar9 + fVar21 * fVar11 + fVar20 * fVar13) - fVar14 * fVar18
                               ,(fVar14 * fVar11 + fVar20 * fVar9 + fVar21 * fVar18) -
                                fVar8 * fVar13,
                               (fVar8 * fVar18 + fVar14 * fVar9 + fVar21 * fVar13) - fVar20 * fVar11
                               ,((fVar21 * fVar9 - fVar8 * fVar11) - fVar20 * fVar18) -
                                fVar14 * fVar13,lVar4,0);
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


