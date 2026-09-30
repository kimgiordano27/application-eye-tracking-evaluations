/*
FUNCTION_NAME: FUN_0740e604
ENTRY_POINT: 0740e604
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_4
*/


void FUN_0740e604(undefined4 param_1,float param_2,float param_3,long *param_4,long *param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  
  fVar15 = param_2;
  fVar20 = param_3;
  if ((DAT_0826995a & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d8a368);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    DAT_0826995a = 1;
  }
  if ((param_5 != (long *)0x0) && (lVar3 = FUN_07445304(param_5,0), lVar3 != 0)) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 == 1) {
      lVar3 = FUN_07445304(param_5,0);
      if (lVar3 != 0) {
        lVar3 = FUN_049cec24(lVar3,0,*(undefined8 *)OVRFaceExpressions_TypeInfo);
        if ((lVar3 != param_4[0x17]) || (1 < (int)param_4[0x18])) {
          (**(code **)(*param_4 + 0x228))(param_4,param_5,*(undefined8 *)(*param_4 + 0x230));
        }
LAB_0740e978:
        fVar15 = *(float *)((long)param_4 + 0x3c);
        fVar20 = *(float *)(param_4 + 8);
        *(int *)(param_4 + 0x18) = iVar1;
        *(float *)((long)param_4 + 0x14c) = *(float *)((long)param_4 + 0x134) * fVar15;
        *(float *)(param_4 + 0x2a) = *(float *)(param_4 + 0x27) * fVar15;
        *(float *)((long)param_4 + 0x154) = *(float *)((long)param_4 + 0x13c) * fVar15;
        *(float *)(param_4 + 0x2b) = *(float *)((long)param_4 + 0x134) * fVar20;
        *(float *)((long)param_4 + 0x15c) = *(float *)(param_4 + 0x27) * fVar20;
        *(float *)(param_4 + 0x2c) = *(float *)((long)param_4 + 0x13c) * fVar20;
        return;
      }
    }
    else {
      if (iVar1 < 2) goto LAB_0740e978;
      lVar3 = FUN_07445304(param_5,0);
      puVar2 = OVRFaceExpressions_TypeInfo;
      if (lVar3 != 0) {
        plVar4 = (long *)FUN_049cec24(lVar3,0,*(undefined8 *)OVRFaceExpressions_TypeInfo);
        lVar3 = FUN_07445304(param_5,0);
        if ((lVar3 != 0) &&
           (uVar5 = FUN_049cec24(lVar3,1,*(undefined8 *)puVar2), plVar4 != (long *)0x0)) {
          lVar3 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d8a368) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                goto LAB_0740e788;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d8a368,7);
LAB_0740e788:
          lVar3 = (*(code *)*puVar6)(plVar4,param_5,puVar6[1]);
          lVar7 = (**(code **)(*param_5 + 0x5a8))(param_5,uVar5,*(undefined8 *)(*param_5 + 0x5b0));
          *(undefined4 *)(param_4 + 0x23) = param_1;
          *(float *)((long)param_4 + 0x11c) = param_2;
          *(float *)(param_4 + 0x24) = param_3;
          if ((lVar7 != 0) && (FUN_075ba188(lVar7,0), lVar3 != 0)) {
            fVar11 = (float)FUN_075bbe90(lVar3,0);
            *(float *)((long)param_4 + 0xc4) = fVar11;
            *(float *)(param_4 + 0x19) = fVar15;
            *(float *)((long)param_4 + 0xcc) = fVar20;
            if (DAT_082528ba == '\0') {
              FUN_0373b518(PTR_DAT_07d863e8);
              DAT_082528ba = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            puVar2 = PTR_DAT_07d863f0;
            fVar12 = SQRT(fVar20 * fVar20 + fVar11 * fVar11 + fVar15 * fVar15);
            if (fVar12 <= DAT_0158677c) {
              if (DAT_082528b7 == '\0') {
                FUN_0373b518(PTR_DAT_07d863f0);
                DAT_082528b7 = '\x01';
              }
              pfVar8 = *(float **)(*(long *)puVar2 + 0xb8);
              fVar11 = *pfVar8;
              fVar15 = pfVar8[1];
              fVar20 = pfVar8[2];
            }
            else {
              fVar11 = fVar11 / fVar12;
              fVar15 = fVar15 / fVar12;
              fVar20 = fVar20 / fVar12;
            }
            uVar17 = (ulong)(uint)fVar20;
            uVar9 = (ulong)(uint)fVar15;
            *(float *)(param_4 + 0x1a) = fVar11;
            *(float *)((long)param_4 + 0xd4) = fVar15;
            *(float *)(param_4 + 0x1b) = fVar20;
            uVar5 = FUN_073d8aac(fVar11,uVar9,uVar17,0);
            uVar14 = FUN_07599ed4(fVar11,0);
            *(int *)(param_4 + 0x1d) = (int)uVar14;
            *(int *)((long)param_4 + 0xec) = (int)uVar9;
            *(int *)(param_4 + 0x1e) = (int)uVar17;
            *(int *)((long)param_4 + 0xf4) = (int)uVar5;
            if (DAT_082528bc == '\0') {
              FUN_0373b518(PTR_DAT_07d863f0);
              DAT_082528bc = '\x01';
            }
            lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
            uVar13 = FUN_0759a1e0(uVar14,uVar9,uVar17,uVar5,*(undefined4 *)(lVar3 + 0x18),
                                  *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),0);
            uVar19 = *(undefined4 *)((long)param_4 + 0xec);
            uVar16 = (undefined4)param_4[0x1e];
            uVar18 = *(undefined4 *)((long)param_4 + 0xf4);
            *(undefined4 *)((long)param_4 + 0xdc) = uVar13;
            *(int *)(param_4 + 0x1c) = (int)uVar9;
            *(int *)((long)param_4 + 0xe4) = (int)uVar17;
            uVar13 = FUN_07599850((int)param_4[0x1d],0);
            *(undefined4 *)(param_4 + 0x1f) = uVar13;
            *(undefined4 *)((long)param_4 + 0xfc) = uVar19;
            *(undefined4 *)(param_4 + 0x20) = uVar16;
            *(undefined4 *)((long)param_4 + 0x104) = uVar18;
            param_4[0x22] = param_4[0x1e];
            param_4[0x21] = param_4[0x1d];
            *(undefined1 *)((long)param_4 + 0x124) = 1;
            goto LAB_0740e978;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


