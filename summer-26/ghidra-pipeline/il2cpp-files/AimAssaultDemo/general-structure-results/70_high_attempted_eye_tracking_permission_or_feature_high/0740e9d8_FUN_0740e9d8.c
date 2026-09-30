/*
FUNCTION_NAME: FUN_0740e9d8
ENTRY_POINT: 0740e9d8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0740f2d0) */
/* WARNING: Removing unreachable block (ram,0x0740f338) */

void FUN_0740e9d8(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 long param_6,float *param_7,undefined8 *param_8,float *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  double dVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  if ((DAT_0826995b & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d8a368);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    DAT_0826995b = 1;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if ((param_6 != 0) &&
     (lVar3 = FUN_07445304(param_6,0), puVar2 = OVRFaceExpressions_TypeInfo,
     puVar1 = PTR_DAT_07d8a368, lVar3 != 0)) {
    if ((*(int *)(lVar3 + 0x18) == 1) || (*(int *)(param_5 + 0x28) == 0)) {
      uVar9 = *(undefined8 *)(param_5 + 0xc4);
      param_7[2] = *(float *)(param_5 + 0xcc);
      *(undefined8 *)param_7 = uVar9;
      lVar3 = FUN_07445304(param_6,0);
      if ((lVar3 != 0) &&
         (plVar4 = (long *)FUN_049cec24(lVar3,0,*(undefined8 *)puVar2), plVar4 != (long *)0x0)) {
        lVar3 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar11 + 7) * 0x10 + 0x138);
              goto LAB_0740ebb8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar1,7);
LAB_0740ebb8:
        uVar9 = (*(code *)*puVar6)(plVar4,param_6,puVar6[1]);
        FUN_073a8d0c(&uStack_d0,uVar9,0);
        *(undefined4 *)(param_8 + 1) = uStack_c8;
        *param_8 = uStack_d0;
        uVar9 = CONCAT44(uStack_c0,local_c4);
LAB_0740ec08:
        *(undefined8 *)(param_9 + 2) = uStack_bc;
        *(undefined8 *)param_9 = uVar9;
        return;
      }
    }
    else {
      lVar3 = FUN_07445304(param_6,0);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) < 2) {
          uVar9 = *(undefined8 *)(param_5 + 0xc4);
          param_7[2] = *(float *)(param_5 + 0xcc);
          *(undefined8 *)param_7 = uVar9;
          if (DAT_082528b7 == '\0') {
            FUN_0373b518(PTR_DAT_07d863f0);
            DAT_082528b7 = '\x01';
          }
          uVar18 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_07d863f0 + 0xb8) + 1);
          *param_8 = **(undefined8 **)(*(long *)PTR_DAT_07d863f0 + 0xb8);
          *(undefined4 *)(param_8 + 1) = uVar18;
          if (DAT_082528b9 == '\0') {
            FUN_0373b518(PTR_DAT_07d86628);
            DAT_082528b9 = '\x01';
          }
          uStack_bc = (*(undefined8 **)(*(long *)PTR_DAT_07d86628 + 0xb8))[1];
          uVar9 = **(undefined8 **)(*(long *)PTR_DAT_07d86628 + 0xb8);
          goto LAB_0740ec08;
        }
        lVar3 = FUN_07445304(param_6,0);
        if (lVar3 != 0) {
          plVar4 = (long *)FUN_049cec24(lVar3,0,*(undefined8 *)puVar2);
          lVar3 = FUN_07445304(param_6,0);
          if ((lVar3 != 0) &&
             (plVar5 = (long *)FUN_049cec24(lVar3,1,*(undefined8 *)puVar2), plVar4 != (long *)0x0))
          {
            lVar3 = *plVar4;
            uVar10 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar3 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                  goto LAB_0740eccc;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar1,7);
LAB_0740eccc:
            lVar3 = (*(code *)*puVar6)(plVar4,param_6,puVar6[1]);
            if (plVar5 != (long *)0x0) {
              lVar7 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                    puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                    goto LAB_0740ed34;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar1,7);
LAB_0740ed34:
              lVar7 = (*(code *)*puVar6)(plVar5,param_6,puVar6[1]);
              if ((lVar7 != 0) && (FUN_075ba188(lVar7,0), lVar3 != 0)) {
                fVar12 = (float)FUN_075bbe90(lVar3,0);
                *param_7 = fVar12;
                param_7[1] = param_2;
                param_7[2] = param_3;
                if (*(int *)(param_5 + 0x28) == 2) {
                  fVar30 = (float)FUN_075ba188(lVar7,0);
                  fVar12 = param_2;
                  fVar13 = param_3;
                  fVar14 = (float)FUN_075ba188(lVar3,0);
                  if (DAT_082528ba == '\0') {
                    FUN_0373b518(PTR_DAT_07d863e8);
                    DAT_082528ba = '\x01';
                  }
                  puVar1 = PTR_DAT_07d863e8;
                  fVar30 = fVar30 - fVar14;
                  param_2 = param_2 - fVar12;
                  param_3 = param_3 - fVar13;
                  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  uVar10 = (ulong)(uint)DAT_0158677c;
                  uVar20 = (ulong)(uint)(param_3 * param_3);
                  fVar12 = SQRT(param_3 * param_3 + fVar30 * fVar30 + param_2 * param_2);
                  if (fVar12 <= DAT_0158677c) {
                    if (DAT_082528b7 == '\0') {
                      FUN_0373b518(PTR_DAT_07d863f0);
                      DAT_082528b7 = '\x01';
                    }
                    pfVar8 = *(float **)(*(long *)PTR_DAT_07d863f0 + 0xb8);
                    fVar30 = *pfVar8;
                    fVar13 = pfVar8[1];
                    param_3 = pfVar8[2];
                  }
                  else {
                    fVar30 = fVar30 / fVar12;
                    fVar13 = param_2 / fVar12;
                    param_3 = param_3 / fVar12;
                  }
                  uVar9 = FUN_075ba634(lVar3,0);
                  uVar19 = uVar10;
                  uVar16 = uVar20;
                  uVar15 = FUN_075ba634(lVar7,0);
                  fVar12 = (float)FUN_07597d7c(uVar9,uVar10,uVar20,uVar15,uVar19,uVar16,0x3f000000,0
                                              );
                  uVar19 = uVar10;
                  uVar21 = uVar20;
                  uVar9 = FUN_075ba6b0(lVar3,0);
                  uVar16 = uVar19;
                  uVar22 = uVar21;
                  uVar15 = FUN_075ba6b0(lVar7,0);
                  uVar16 = FUN_07597d7c(uVar9,uVar19,uVar21,uVar15,uVar16,uVar22,0x3f000000,0);
                  if (DAT_0825295b == '\0') {
                    FUN_0373b518(PTR_DAT_07d863e8);
                    DAT_0825295b = '\x01';
                  }
                  fVar24 = (float)uVar16;
                  fVar14 = (float)uVar19;
                  fVar23 = (float)uVar21;
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                    uVar21 = uVar21 & 0xffffffff;
                    uVar16 = uVar16 & 0xffffffff;
                    uVar19 = uVar19 & 0xffffffff;
                  }
                  fVar25 = fVar30 * (float)uVar10 - fVar13 * fVar12;
                  fVar14 = SQRT((param_3 * param_3 + fVar30 * fVar30 + fVar13 * fVar13) *
                                (fVar23 * fVar23 + fVar24 * fVar24 + fVar14 * fVar14));
                  fVar12 = param_3 * fVar12 - fVar30 * (float)uVar20;
                  fVar24 = 0.0;
                  if (DAT_015865b4 <= fVar14) {
                    fVar14 = (param_3 * (float)uVar21 +
                             fVar30 * (float)uVar16 + fVar13 * (float)uVar19) / fVar14;
                    if (fVar14 < -1.0) {
                      fVar14 = -1.0;
                    }
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_03798b70();
                    }
                    dVar17 = acos((double)fVar14);
                    fVar24 = (float)dVar17 * DAT_01586abc;
                  }
                  fVar24 = fVar24 - (float)(int)(fVar24 / 180.0) * 180.0;
                  fVar14 = fVar24 + -90.0;
                  if (fVar24 < 0.0) {
                    fVar14 = -90.0;
                  }
                  fVar14 = (float)FUN_07597d7c(fVar13 * (float)uVar20 - param_3 * (float)uVar10,
                                               fVar12,fVar25,uVar16,uVar19,uVar21,
                                               (90.0 - ABS(fVar14)) / 90.0,0);
                  fVar23 = param_3 * fVar12 - fVar13 * fVar25;
                  fVar24 = fVar30 * fVar25 - param_3 * fVar14;
                  fVar12 = fVar13 * fVar14 - fVar30 * fVar12;
                  fVar14 = fVar13 * fVar12 - param_3 * fVar24;
                  fVar12 = param_3 * fVar23 - fVar30 * fVar12;
                  fVar24 = fVar30 * fVar24 - fVar13 * fVar23;
                  if (*(char *)(param_5 + 0x124) == '\0') {
                    if (fVar24 * *(float *)(param_5 + 0x130) +
                        fVar14 * *(float *)(param_5 + 0x128) + fVar12 * *(float *)(param_5 + 300) <=
                        0.0) {
                      fVar14 = -fVar14;
                      fVar12 = -fVar12;
                      fVar24 = -fVar24;
                    }
                  }
                  else {
                    *(undefined1 *)(param_5 + 0x124) = 0;
                  }
                  *(float *)(param_5 + 0x128) = fVar14;
                  *(float *)(param_5 + 300) = fVar12;
                  *(float *)(param_5 + 0x130) = fVar24;
                  fVar23 = (float)FUN_07599ed4(fVar30,0);
                  fVar27 = *(float *)(param_5 + 0x78);
                  fVar28 = *(float *)(param_5 + 0x7c);
                  fVar26 = *(float *)(param_5 + 0x74);
                  fVar25 = (float)FUN_07599850(*(undefined4 *)(param_5 + 0x70),0);
                  fVar30 = param_3 * fVar27;
                  fVar12 = (fVar14 * fVar28 - fVar23 * fVar25) - fVar13 * fVar26;
                  fVar24 = (fVar13 * fVar27 + fVar14 * fVar25 + fVar23 * fVar28) - param_3 * fVar26;
                  param_2 = (param_3 * fVar25 + fVar14 * fVar26 + fVar13 * fVar28) - fVar23 * fVar27
                  ;
                  param_3 = (fVar23 * fVar26 + fVar14 * fVar27 + param_3 * fVar28) - fVar13 * fVar25
                  ;
                  param_4 = fVar12 - fVar30;
                }
                else if (*(int *)(param_5 + 0x28) == 1) {
                  if (DAT_082528ba == '\0') {
                    FUN_0373b518(PTR_DAT_07d863e8);
                    DAT_082528ba = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  puVar1 = PTR_DAT_07d863f0;
                  fVar13 = SQRT(param_3 * param_3 + fVar12 * fVar12 + param_2 * param_2);
                  if (fVar13 <= DAT_0158677c) {
                    /* try { // try from 0740eed4 to 0750ef67 has its CatchHandler @ 0740eed4
                       catch() { ... } // from try @ 0740eed4 with catch @ 0740eed4
                       catch() { ... } // from try @ 0740ef74 with catch @ 0740eed4
                       catch() { ... } // from try @ 0740f07c with catch @ 0740eed4 */
                    if (DAT_082528b7 == '\0') {
                      FUN_0373b518(PTR_DAT_07d863f0);
                      DAT_082528b7 = '\x01';
                    }
                    pfVar8 = *(float **)(*(long *)puVar1 + 0xb8);
                    fVar12 = *pfVar8;
                    param_2 = pfVar8[1];
                    param_3 = pfVar8[2];
                  }
                  else {
                    fVar12 = fVar12 / fVar13;
                    param_2 = param_2 / fVar13;
                    param_3 = param_3 / fVar13;
                  }
                  uVar18 = *(undefined4 *)(param_5 + 0x108);
                  fVar13 = *(float *)(param_5 + 0x10c);
                  fVar30 = *(float *)(param_5 + 0x110);
                  uVar31 = *(undefined4 *)(param_5 + 0x114);
                  if (DAT_082528bc == '\0') {
                    FUN_0373b518(PTR_DAT_07d863f0);
                    DAT_082528bc = '\x01';
                  }
                  lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
                  fVar14 = (float)FUN_0759a1e0(uVar18,fVar13,fVar30,uVar31,
                                               *(undefined4 *)(lVar7 + 0x18),
                                               *(undefined4 *)(lVar7 + 0x1c),
                                               *(undefined4 *)(lVar7 + 0x20),0);
                    /* try { // try from 0740ef68 to 0750ef73 has its CatchHandler @ 0740eff4 */
                    /* try { // try from 0740ef74 to 0750f00b has its CatchHandler @ 0740eed4 */
                  fVar13 = fVar30 * *(float *)(param_5 + 0xe4) +
                           *(float *)(param_5 + 0xdc) * fVar14 + fVar13 * *(float *)(param_5 + 0xe0)
                  ;
                  if (0.0 < fVar13) {
                    fVar13 = fVar13 * 0.5;
                    fVar13 = fVar13 * fVar13;
                    if (1.0 < fVar13) {
                      fVar13 = 1.0;
                    }
                    fVar14 = fVar14 + (*(float *)(param_5 + 0xdc) - fVar14) * fVar13;
                  }
                  fVar12 = (float)FUN_07599ed4(fVar12,0);
                  fVar24 = *(float *)(param_5 + 0xf8);
                  fVar27 = *(float *)(param_5 + 0xfc);
                  fVar25 = *(float *)(param_5 + 0x104);
                  fVar26 = *(float *)(param_5 + 0x100);
                  *(float *)(param_5 + 0x108) = fVar12;
                  *(float *)(param_5 + 0x10c) = param_2;
                  *(float *)(param_5 + 0x114) = fVar14;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 0740ef68 with catch @ 0740eff4
                        */
                    /* try { // try from 0740f00c to 0750f00f has its CatchHandler @ 0740f01c */
                  fVar13 = param_2 * fVar27;
                    /* catch() { ... } // from try @ 0740f00c with catch @ 0740f01c */
                  *(float *)(param_5 + 0x110) = param_3;
                  fVar30 = param_3 * fVar26;
                  fVar23 = param_2 * fVar26 + fVar14 * fVar24 + fVar12 * fVar25;
                    /* try { // try from 0740f054 to 0750f07b has its CatchHandler @ 0740f090 */
                  fVar28 = fVar23 - param_3 * fVar27;
                  fVar29 = (param_3 * fVar24 + fVar14 * fVar27 + param_2 * fVar25) - fVar12 * fVar26
                  ;
                  fVar26 = (fVar12 * fVar27 + fVar14 * fVar26 + param_3 * fVar25) - param_2 * fVar24
                  ;
                  fVar14 = ((fVar14 * fVar25 - fVar12 * fVar24) - fVar13) - fVar30;
                  fVar12 = (float)FUN_075b83f8(lVar3,0);
                    /* try { // try from 0740f07c to 0750f087 has its CatchHandler @ 0740eed4 */
                    /* try { // try from 0740f088 to 0750f08f has its CatchHandler @ 0740f090 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0740f054 with catch @ 0740f090
                       catch(type#2 @ 00000000) { ... } // from try @ 0740f088 with catch @ 0740f090
                        */
                  fVar24 = (fVar13 * fVar26 + fVar23 * fVar28 + fVar12 * fVar14) - fVar30 * fVar29;
                  param_2 = (fVar30 * fVar28 + fVar23 * fVar29 + fVar13 * fVar14) - fVar12 * fVar26;
                  param_3 = (fVar12 * fVar29 + fVar23 * fVar26 + fVar30 * fVar14) - fVar13 * fVar28;
                  param_4 = ((fVar23 * fVar14 - fVar12 * fVar28) - fVar13 * fVar29) -
                            fVar30 * fVar26;
                  fVar12 = fVar13 * fVar29;
                  fVar30 = fVar30 * fVar26;
                }
                else {
                  fVar24 = (float)FUN_075b83f8(lVar3,0);
                  fVar12 = param_2;
                  fVar30 = param_3;
                }
                uVar18 = FUN_075ba188(lVar3,0);
                *(undefined4 *)param_8 = uVar18;
                *(float *)((long)param_8 + 4) = fVar12;
                *(float *)(param_8 + 1) = fVar30;
                *param_9 = fVar24;
                param_9[1] = param_2;
                param_9[2] = param_3;
                param_9[3] = param_4;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


